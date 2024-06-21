#include<iostream>
#include<iomanip>
#include<fstream>
#include<unordered_set>
#include<unordered_map>
#include<string>
#include<set>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<cstdio>
#include"LR1Item.h"
#define TERMINS 20000 //终结符从20000以后开始编号
#define NONTERMINS 30000 //非终结符从30000以后开始编号
#define POUND 19999//#号标记为19999
#define SSTART 29999//拓广文法开始符号S'标记为29999
#define EPSILON 39999//产生式里可能会出现的空,平时标记为ε
#define ERROR 40000//错误边，用于占位符
using namespace std;

struct Producer//产生式数据结构
{
	int left; // 语法规则的左部符号编号
	vector<int> right; // 右部候选式中符号编号排列
};

struct LR1State
{
	int stateID; // 状态号
	multiset<LR1Item> itemSet; // ItemSet
	unordered_map<int, multiset<LR1Item>> moveItemSet; // <边上符号，对应LR1State项目集>
};

set<int> leftTable; // 左结合表
set<int> rightTable; // 右结合表
map<string, int> nonterminalTable; // 非终结符表 符号映射至数字编号
map<string, int> terminatorTable; // 终结符表 符号映射至数字编号

map<int, int> terminSet; // 终结符<数字编号,在分析表中的列号>,第二项为了构造LR(1)分析表，所以要在其中加入结束符号#
map<int, int> nonterminSet; // 非终结符<数字编号,在分析表中的列号>,并同时存储一个到action表头的对应关系

map<int, int> PriorityTable; // 优先级表，<编码, 优先级>

map<int, string> tokenTypeTable; // 存储语义值类型的表

vector<Producer> producerVector; // 存储所有的产生式
vector<int> producerPriorVector; // 存储所有的产生式优先级

vector<string> producerActionVector; // 存储所有产生式的动作
map<int, vector<int>> producerMap; // <产生式左边索引，vector<产生式的编号>>

vector<vector<int>> actionTable; // LR(1)分析表，项目集转换动作表

bool analysisInput(); // 解析输入文件
bool ExplanationProcess(); // 说明部分%{...%}解析
bool SymbolProcess(); // 说明部分%开头的，第一个%%之前
bool RuleProcess(); // 语法规则部分解析，第二个%%之前
bool ProducerProcess(); // 处理规则部分的生成式
void AdditionalProgramProcess(); // 处理附加程序段，第二个%%之后

void addtoTerminatorTable(string, int, int, string, int); // 加入非终结符表
void addtoNonterminalTable(string, int, int, string); // 加入终结符表

string getSymbol(int); // 从编号倒推回符号
void GenerateProducerMap(); // 产生式的左部符号编号 + 收集对应候选式的所有编号
void GenerateCode(); // 语法分析器代码生成

LR1Item::LR1Item(int np, int pos) {
	producerID = np;
	currentPos = pos;
}

void LR1Item::move(){
	currentPos++;
}

int LR1Item::getCurrentSymbol() const { // 返回下一个移进符号
	if (currentPos >= producerVector[producerID].right.size())
		return -1;
	else 
		return producerVector[producerID].right[currentPos];
}

int LR1Item::getCurrentPosition() const{
	return currentPos;
}

int LR1Item::getNextSymbol() const {
	if (currentPos + 1 >= producerVector[producerID].right.size()) 
		return -1;
	else
		return producerVector[producerID].right[currentPos + 1];
}

int LR1Item::getProducerID() const {
	return producerID;
}

bool LR1Item::isEnd() const {
	if (producerVector[producerID].right[0] == EPSILON) return 1; // 右边产生式是空串
	if (currentPos == producerVector[producerID].right.size()) return 1;
	else return 0;
}

bool LR1Item::nextIsEnd() const { // currentPos位于最后一个位置
	int num = producerVector[producerID].right.size();
	if (currentPos == num - 1) return 1;
	else return 0;
}

void LR1Item::setPredictiveSym(const set<int>& predictiveSymbol1) {
	for (auto& i : predictiveSymbol1)
		predictiveSymbol.insert(i);
}

const set<int>& LR1Item::getPredictiveSym() const {
	return predictiveSymbol;
}

bool LR1Item::checkEqual(const LR1Item& it1) const { // 检查两个IR1Item是否完全相同
	vector<bool> check;
	check.clear();
	if (it1.producerID != this->producerID || it1.currentPos != this->currentPos)
		return false;
	if(it1.getPredictiveSym() == this->getPredictiveSym()) return true;
	else return false;
}

bool LR1Item::checkLike(const LR1Item& it1) const { // 产生式一样，预测符不一样，返回true
	vector<bool> check;
	check.clear();
	if (it1.producerID != this->producerID || it1.currentPos != this->currentPos)
		return false;
	else {
		if (it1.getPredictiveSym() != this->getPredictiveSym()) return true;
		else return false;
	}
}

bool operator <(const LR1Item& it1, const LR1Item& it2) { // 为了multiset<LR1Item>的创建 要不然set有序无法满足要求
	if (it1.producerID != it2.producerID)
		return it1.producerID < it2.producerID;
	else
		return it1.currentPos < it2.currentPos;
}

void closure(multiset<LR1Item>& itemset); // LR(1)项目集闭包
void findPredictiveSym(const LR1Item& item, set<int>& predictiveSymbol); // 计算预测符
bool getFirstSet(int producerID, set<int>& firstSet, set<int>& visited); // 计算First集
int ProcessItemSet(); // LR(1)项目集转换关系构造，构造项目集族

void PrintSymbolTable(); // 输出终结符、非终结符

void PrintItemSet(multiset<LR1Item>& I0); // 输出项目集
bool checkItemSet(multiset<LR1Item> s1, multiset<LR1Item>s2); // 检查两个项目集是不是一致
multiset<LR1Item> minimizeItemset(multiset<LR1Item> s1); // 简化项目集，将项目集中只有预测符不同的项目合并

ifstream ifile; // 输入c99_1.y解析文件
ofstream ofile; // 输出语法分析器

int main()
{
	string inname;
	cout << "输入文件名："; // c99_1.y
	cin >> inname;
	ifile.open(inname);
	ofile.open("Yacc.cpp");

	// ① c99.y的读入与解析
	if (ifile.fail() || ofile.fail()) 
		cout << "打开文件失败\n";
	if(analysisInput())
		cout << inname << "文件解析成功完毕\n";
	else {
		cout << inname << "文件解析存在错误\n";
		return 0;
	}
	PrintSymbolTable();
	// return 0;

	// ② 构造LR(1)项目集并从项目集中构造分析表
	if (!ProcessItemSet()) {
		cout << "LR(1)项目集构建分析过程中出错\n";
		return 0;
	}

	// ③ 语法分析器代码生成
	GenerateCode();
}

// ============================= ①
bool analysisInput()
{
	if (!ExplanationProcess()) // %{...%}部分
		return false;

	if (!SymbolProcess()) // 第一个%%之前（符号定义）
		return false;

	ifile.get(); // 读取行末'\n'，转向下一行,不可省略

	if (!RuleProcess()) // 第二个%%之前（各种产生式）
		return false;

	AdditionalProgramProcess(); // 针对c99格式直接复制
	return true;
}

bool ExplanationProcess()
{
	string str;
	getline(ifile, str);
	if (str!="%{") {
		cout << "说明部分有错误" << endl;
		return false;
	}
	while (!ifile.eof()) // 逐行读取,说明部分直接输出到文件
	{
		getline(ifile, str);
		if (str == "%}")
			break;
		ofile << str << '\n';
	}
	cout << "说明部分成功解析完毕.\n";
	return true;
}

bool SymbolProcess()
{
	string line = "";
	while (!ifile.eof())
	{
		ifile >> line;
		if (line == "%%")
			break;
		//token type left right union 
		if (line == "%token") // token: 终结符
		{
			getline(ifile, line);
			int lpos = 0;
			int pos = 0;
			string terminator;
			string typeoft = ""; // 如果没有规定语义值类型则置为空
			lpos = line.find("<", pos);
			pos = line.find(">", pos);
			if (lpos != line.npos)
				typeoft = line.substr(lpos + 1, pos - lpos - 1);
			else{
				lpos = 0;
				pos = 0;
			}
			while (1) {
				lpos = line.find(" ", pos);
				pos = line.find(" ", lpos + 1);
				if (lpos == line.npos) break;
				terminator = line.substr(lpos + 1, pos - lpos - 1); // 找出一个终结符
				addtoTerminatorTable(terminator, TERMINS + terminatorTable.size(), 1, typeoft, 0);
				if (terminator == "ELSE")rightTable.insert(terminatorTable[terminator]);
			}
		}
		else if (line == "%left" || line == "%right")
		{
			string state = line;
			static int priority = 0;//优先级，越后面出现的优先级越高（即下一行就加一）
			priority++;
			
			getline(ifile, line);
			int lpos = 0;
			int pos = 0;
			string t;
			while (1) {
				lpos = line.find("'", pos);
				pos = line.find("'", lpos + 1);
				if (lpos == line.npos) break;
				t = line.substr(lpos + 1, pos - lpos - 1); // t为截断出来的type
				
				pair <string, int> p1;
				pair <int, int> p2;
				if (t != "" && t != " ") {
					// 操作符op也是终结符,放进终结符表中
					addtoTerminatorTable(t, TERMINS + terminatorTable.size(), 2, "", priority);
					//接下来往左右结合表里加
					if (state == "%left")
						leftTable.insert(terminatorTable[t]);
					else if (state == "%right")
						rightTable.insert(terminatorTable[t]);
				}
			}
		}
	}
	cout << "说明部分成功解析完毕\n";
	return true;
}

bool RuleProcess() // 语法规则部分
{
	Producer p0;
	p0.left = 0;
	p0.right.clear();
	producerVector.push_back(p0);//预先加入一个产生式，日后在其中放S'->S，以便产生拓广文法
	producerPriorVector.push_back(0);
	producerActionVector.push_back("");

	if(!ProducerProcess())
		return false;
	
	cout << "共" << producerVector.size() << "个产生式\n";
	producerVector[0].left = SSTART;//拓广文法开始符号S'标记为29999
	producerVector[0].right.push_back(producerVector[1].left);
	
	//将#号加入终结符表
	addtoTerminatorTable("#", POUND, 0, "", 0);

	GenerateProducerMap();
	return true;
}

bool ProducerProcess()
{
	string line; char c;
	string pleft;
	while (!ifile.eof()) {
		ifile >> line;
		if (line == "")	continue;
		if (line == "%%") {
			cout << "产生式读取已经结束" << endl;
			return true;
		}
		if (terminatorTable.find(line)!=terminatorTable.end()){
			cout << "定义错误:非终结符" << line << "出现在了终结符表中" << endl;
			return false;
		}
		if (nonterminalTable.find(line) == nonterminalTable.end()) // 可能不在非终结符表中，要补充进去
			addtoNonterminalTable(line, NONTERMINS + nonterminalTable.size(), 0, "");
		pleft = line; // 产生式左部符号暂存
		ifile >> line;
		if (line != ":"){
			cout << "产生式格式错误，没有冒号!" << endl;
			return false;
		}
		while (1)
		{
			Producer p1;
			p1.left = nonterminalTable[pleft]; // 产生式左侧符号的数字编码放进产生式
			int priority = 0;
			while (1)
			{
				c = ifile.get();
				while (c == ' ' || c == '\n' || c == '\r' || c == '\t') // 跳过空格
					c = ifile.get();
				if (c == ';' || c == '{' || c == '|') // 产生式结束了，或者开始记录动作
					break;
				if (c == '\'') // 操作符，op : '>'
				{
					c = ifile.get();
					string op1 = "";//记录碰到的这个操作符
					while (c != '\'') {
						op1.push_back(c);
						c = ifile.get();
					}
					if (terminatorTable.find(op1) == terminatorTable.end()) // 这一操作符不在终结符表里
						addtoTerminatorTable(op1,TERMINS + terminatorTable.size(),2,"",0); // 产生式里第一次出现的操作符，优先级该如何定?
					p1.right.push_back(terminatorTable[op1]);
					priority = PriorityTable[terminatorTable[op1]];
				}
				else if (c == '\\') // 用\e表示空,即ε
				{
					c = ifile.get();
					if (c == 'e') {
						//产生式右边是空的，加入EMPTY
						p1.right.push_back(EPSILON);
						break;
					}
					else {
						cout << "读到符号" << c << "发生错误!" << endl;
						return false;
					}
				}
				else {
					string s1 = "";
					while (c != ' ' && c != -1 && c != '\n' && c != '\t' && c != '\r')
					{
						s1.push_back(c);
						c = ifile.get();
					}
					if (terminatorTable.find(s1) != terminatorTable.end()) // 是一个终结符
						p1.right.push_back(terminatorTable[s1]);
					else {
						if (nonterminalTable.find(s1) == nonterminalTable.end()) // 不是终结符 就应是非终结符
							addtoNonterminalTable(s1, NONTERMINS + nonterminalTable.size(), 0, "");
						p1.right.push_back(nonterminalTable[s1]);
					}
				}
			}
			//以上是对右部单个候选式的处理
			// //这时候已经将会读到{**}，这中间是语义动作
			// 此部分为中间代码生成服务，可惜限于时间精力等无法实现
			string action = "";//语义动作
			// if (c == '{')
			// {
			// 	int numofleft = 1;//记录左右括号的个数
			// 	int numofright = 0;
			// 	c = ifile.get();
			// 	while (c != '}' || numofleft != numofright)//动作读取结束用{}匹配
			// 	{
			// 		if (c == '$') {
			// 			c = ifile.get();
			// 			if (c == '$') { // $$代表action存入u[0]
			// 				action.append("u[0]"); // 类型是union定义的
			// 				//如果没有对应的语义值类型则不加
			// 				if (tokenTypeTable[p1.left] != "") {
			// 					action.push_back('.');
			// 					action.append(tokenTypeTable[p1.left]);//0代表语法规则的左部
			// 				}
			// 			}
			// 			else // $1代表action存入u[1]
			// 				if (c >= '1' && c <= '9') {
			// 					int num = 0;
			// 					action.append("u[");
			// 					num += (c - '0');
			// 					action.push_back(c);
			// 					c = ifile.get();
			// 					while (c > '0' && c < '9')
			// 					{
			// 						//不止一位数
			// 						num = num * 10 + (c - '0');
			// 						action.push_back(c);
			// 						c = ifile.get();
			// 					}
			// 					ifile.unget();
			// 					action.push_back(']');
			// 					string s;
			// 					s = tokenTypeTable[p1.right[num - 1]];//num代表语法规则的右部第num个序号
			// 					if (s != "")
			// 					{
			// 						action.push_back('.');
			// 						action.append(s);
			// 					}
			// 				}
			// 				else {
			// 					cout << "语义动作定义有错误" << endl;
			// 					return false;
			// 				}
			// 		}
			// 		else //其余直接输入action
			// 			action.push_back(c);
			// 		c = ifile.get();
			// 		if (c == '}') numofright++;
			// 		if (c == '{')numofleft++;
			// 	}
			// 	c = ifile.get();
			// 	while (c == ' ' || c == '\n' || c == '\r' || c == '\t') c = ifile.get();
			// }
			if (c == ';' || c == '|')
			{
				producerActionVector.push_back(action);
				cout << "读取到产生式为" << getSymbol(p1.left);
				cout << "->";
				for (int i = 0; i < p1.right.size(); i++)
				{
					cout << getSymbol(p1.right[i]) << " ";
				}
				cout << " \n动作为";
				if (action == "") cout << "空\n";
				else cout << action << endl;
				cout << "\n--------------------------------------------------\n";
				producerVector.push_back(p1);
				producerPriorVector.push_back(priority); // 产生式中存在操作符，则priority为op优先级，否则优先级为0
				if (c == ';') break;
			}
			else {
				cout << "遇到" << c << ",产生式结尾没有分号，格式错误" << endl;
				return false;
			}
		}
	}
	return true;
}

void GenerateProducerMap()
{
	for (int i = 1; i < producerVector.size(); i++) // 0号产生式为S'->S,此处不考虑
	{
		if (producerMap.find(producerVector[i].left) == producerMap.end()) {
			pair<int, vector<int>> p1;
			p1.first = producerVector[i].left; // 产生式的左部
			vector<int> v1;
			v1.push_back(i);
			p1.second = v1;
			producerMap.insert(p1);
		}
		else
			producerMap[producerVector[i].left].push_back(i); // 加入对应产生式的编号
	}
}

void AdditionalProgramProcess() // 用户子程序部分
{
	string line;
	while (!ifile.eof()){
		getline(ifile, line);
		ofile << line << endl;
	}
}

void PrintSymbolTable()
{
	cout << "输出读取的终结符表:\n";
	map<string, int>::iterator iter=terminatorTable.begin();
	while(iter!=terminatorTable.end()){
		cout << iter->first << " " << iter->second << " " << tokenTypeTable[iter->second] << endl;
		iter++;
	}
	cout << "输出读取的非终结符表:\n";
	iter = nonterminalTable.begin();
	while (iter != nonterminalTable.end()) {
		cout << iter->first << " " << iter->second << " " << tokenTypeTable[iter->second] << endl;
		iter++;
	}
}
// ============================= ①



void addtoTerminatorTable(string s, int index, int flag, string type, int prior)
{
	pair<string, int> p1;
	pair<int, int>p2;
	p1.first = s;
	p1.second = index;
	terminatorTable.insert(p1);
	p2.first = p1.second;
	p2.second = terminSet.size() + nonterminSet.size();
	terminSet.insert(p2);
	if (flag == 1) { // 需要添加type
		pair<int, string> p3;
		p3.first = p1.second;
		p3.second = type;
		tokenTypeTable.insert(p3);
	}
	else if (flag == 2) { // 需要添加优先级
		pair<int, int> p3;
		p3.first = p1.second;
		p3.second = prior;
		PriorityTable.insert(p3);
	}
}

void addtoNonterminalTable(string s, int index, int flag, string type)
{
	pair<string, int> p1;
	pair<int, int> p2;
	p1.first = s;
	p1.second = index;
	nonterminalTable.insert(p1);
	p2.first = p1.second;
	p2.second = terminSet.size() + nonterminSet.size();
	nonterminSet.insert(p2);
	if (flag == 1) {
		pair<int, string> p3;
		p3.first = p1.second;
		p3.second = type;
		tokenTypeTable.insert(p3);
	}
}

bool checkItemSet(multiset<LR1Item> s1, multiset<LR1Item> s2)
{
	//每个项目的currpos、producernum、预测符一致
	multiset <LR1Item> tmp1 = s1;
	multiset <LR1Item> tmp2 = s2;
	if (s1.size() != s2.size()) return false;

	for (auto& item1 : s1)
	{
		bool check = false;
		for (auto& item2 : s2)
			if (item1.checkEqual(item2))
			{
				check = true;
				break;
			}
		if (!check) return false;
	}
	return true;
}

bool getFirstSet(int producerID, set<int>& firstSet, set<int>& visited)
{
	if (producerVector[producerID].right[0] == EPSILON) return false;
	else {
		int i = 0;
		vector<int>right = producerVector[producerID].right;
		if (terminSet.find(right[i])!=terminSet.end()) // 终结符
			firstSet.insert(right[i]);
		else if (nonterminSet.find(right[i])!=nonterminSet.end()) // 非终结符
		{
			if (visited.find(right[i])==visited.end()) // 未访问过
			{
				visited.insert(right[i]);
				vector<int> v1 = producerMap[right[i]];
				bool epilsonFlag = false;
				for (auto& p1 : v1)
					if (!getFirstSet(p1, firstSet, visited)) 
						epilsonFlag = true;
				while (epilsonFlag && i < right.size() - 1)	// 有空串
				{
					i++; // 看下一字符
					epilsonFlag = false; 
					if (right[i] != 0 
						&& nonterminSet.find(right[i])!=nonterminSet.end() // 非终结符
						&& visited.find(right[i]) == visited.end()) // 未访问过
					{
						vector<int> v2 = producerMap[right[i]];
						for (auto& p2 : v2)
							if (!getFirstSet(p2, firstSet, visited)) 
								epilsonFlag = true;	// 仍然存在空串
					}
					else if (terminSet.find(right[i])!=terminSet.end())	// 终结符
						firstSet.insert(right[i]);
				}
			}
		}
		return true;
	}
}

// A->a*Bb，B为currentSym，b为nextSymbol，算的是产生式左边为B的推出式的预测符
void findPredictiveSym(const LR1Item& item, set<int>& predictiveSymbol)	
{
	if (item.nextIsEnd()) // currentPos是最后一个
		predictiveSymbol = item.getPredictiveSym();
	else {
		int symbol = item.getNextSymbol();
		if (terminSet.find(symbol)!=terminSet.end()) // L->*i 这种
			predictiveSymbol.insert(symbol); // 如果是终结符就加入预测符
		else {
			vector<int> v1 = producerMap[symbol]; // v1为所有开始符号为symbol的产生式
			set<int> visited;
			for (int i = 0; i < v1.size(); i++)
				getFirstSet(v1[i], predictiveSymbol, visited);	// 计算First集
		}
	}
}

void closure(multiset<LR1Item>& itemSet) // 返回itemSet，此时为一个项目集，更新闭包
{
	queue<LR1Item> q; // 队列中为项目集所有状态
	for (auto& ps : itemSet) { // 遍历itemSet的LR1Item
		if (!ps.isEnd() && nonterminSet.find(ps.getCurrentSymbol()) != nonterminSet.end()) // 根据currentPos位置添加非终结符
			q.push(ps);
	}
	while (!q.empty())
	{
		LR1Item citem = q.front();
		q.pop();
		vector<int> vpi = producerMap[citem.getCurrentSymbol()]; // 右边点后面的字符 能引出的产生式编号集合
		set<int> predictiveSym;
		findPredictiveSym(citem, predictiveSym); // 计算预测符保存到predictiveSym中

		// 判断项目是否存在于项目集，存在则不重复添加
		for (int i = 0; i < vpi.size(); i++)
		{
			LR1Item tp(vpi[i], 0);
			tp.setPredictiveSym(predictiveSym);
			multiset<LR1Item>::iterator iter = itemSet.begin();
			bool flag = false;
			for (auto& it1 : itemSet)
				if (it1.checkEqual(tp)) {
					flag = true;
					break;
				}
			if (!flag) { // 计算预测符也需要入栈
				itemSet.insert(tp);
				if (nonterminSet.find(tp.getCurrentSymbol())!=nonterminSet.end())
					q.push(tp);
			}
		}
	}
}

multiset<LR1Item> minimizeItemset(multiset<LR1Item> s1)
{
	multiset<LR1Item> miniset;
	miniset.clear();
	for (auto& itm1 : s1) {
		set<int> predictiveSymSum;
		multiset<LR1Item>::iterator pos;
		bool findSimilar = false;
		for (auto& itm2 : miniset) {
			if (itm1.checkLike(itm2)) { // 找到相似项目，开始合并(相等的pass)
				findSimilar = true;
				predictiveSymSum = itm1.getPredictiveSym();
				for (auto& sym : itm2.getPredictiveSym()) // 预测符合并
					predictiveSymSum.insert(sym);
				pos = miniset.find(itm2);
				break;
			}
		}
		if (!findSimilar) 
			miniset.insert(itm1);
		else {
			LR1Item itm3 = *pos;
			miniset.erase(pos);
			itm3.setPredictiveSym(predictiveSymSum); // 加入合并后的预测符对应的LR1Item
			miniset.insert(itm3);
		}
	}
	return miniset;
}

int ProcessItemSet()
{
	int IR1StateID = 0;
	queue<multiset<LR1Item>> Q; // 项目集队列
	vector<LR1State> itemsetTable; // 存放table中每一个LR1项目集State

	unordered_map<int, multiset<LR1Item>> moveItemSet; // 以转换表中边的编号为关键词 后一项是项目集
	
	// ---- 初始化I0
	multiset<LR1Item> I0; // 初始项目集
	set<int> predictiveSym; // 预测符
	predictiveSym.insert(POUND); // 放入#
	LR1Item firstitem(0, 0); // 编号0 移进位置0
	firstitem.setPredictiveSym(predictiveSym);
	I0.insert(firstitem);

	closure(I0);

	multiset<LR1Item> miniI0 = minimizeItemset(I0); // 对应书本P121 图6.9的简化，例：S->*R,# 和 S->*R,= 简化为 S->*R,#|=
	Q.push(miniI0);
	
	LR1State p1;
	p1.itemSet = miniI0;
	p1.stateID = IR1StateID; // =0
	itemsetTable.push_back(p1);

	int maxnum = nonterminSet.size() + terminSet.size(); // 终结符+非终结符，边上的所有可能，即一个项目集最多有maxnum个边转到下一个项目集
	
	while (!Q.empty())
	{
		multiset<LR1Item> itemset = Q.front(); // 获取队列顶的一个项目集
		Q.pop();
		moveItemSet.clear();
		vector<int> f(maxnum); // 转换表的一行 长度固定为maxnum
		
		for (int i = 0; i < f.size(); i++)
			f[i] = ERROR; // 空边用ERROR进行占位
		actionTable.push_back(f);

		int column, stateID;
		stateID = -1;
		vector<LR1State>::iterator iter = itemsetTable.begin();
		while (iter != itemsetTable.end())
		{
			if (checkItemSet(iter->itemSet, itemset)) // 之前一定构建过该项目集，否则出错
			{
				stateID = iter->stateID;
				break;
			}
			iter++;
		}

		if (stateID == -1) {
			cout << "项目集错误\n";
			return 0;
		}

		cout << "项目集：I_" << stateID << endl;
		// if (stateID <= 50) {
		// 	PrintItemSet(itemset);
		// }

		for (auto& ps : itemset) // 项目集中的每一个项目分别move
		{
			if (ps.isEnd()) // 已到达可归约,用编号取负表示归约
			{
				for (auto& pi : ps.getPredictiveSym())
				{
					column = terminSet[pi];
					// 以负数代表归约项。0代表accept
					if (actionTable[stateID][column] <= 0 && ps.getProducerID() != actionTable[stateID][column] * (-1))
					{
						cout << "归约归约冲突！" << endl;
						cout << "stateID=" << stateID << " column=" << column << " old=" << actionTable[stateID][column] * (-1)
							<< " new=" << ps.getProducerID() << endl;
						return 0;
					}
					actionTable[stateID][column] = ps.getProducerID() * (-1);
				}
			}
			else {
				LR1Item tp = ps;
				tp.move();
				moveItemSet[ps.getCurrentSymbol()].insert(tp); // 注意此处是根据ps得到边上的符号
			}
		}
		iter->moveItemSet = moveItemSet; // 赋值itemset的moveItemSet
		
		// 对新产生的项目集求闭包
		for (auto& ph : moveItemSet)
		{
			closure(ph.second); // 新产生的项目集求闭包
			multiset<LR1Item> miniset = minimizeItemset(ph.second);
			ph.second = miniset;

			bool findset = false;
			int nextStateID = 0;
			
			for (auto& p : itemsetTable)
				if (checkItemSet(p.itemSet, ph.second)) {
					findset = true;
					nextStateID = p.stateID;
				}
			
			if (!findset) {
				IR1StateID++;
				LR1State p2;
				p2.itemSet = ph.second;
				p2.stateID = IR1StateID;
				nextStateID = p2.stateID;
				itemsetTable.push_back(p2);
				Q.push(ph.second);
			}
			
			// 移进填转换表
			if (nonterminSet.find(ph.first)!=nonterminSet.end())
				column = nonterminSet[ph.first];
			else
				column = terminSet[ph.first];
			if (actionTable[stateID][column] <= 0) // 此处为归约
			{
				// 用的producerPrior 归约时actionTable[stateID][column] * (-1)这里面是producerID
				if (producerPriorVector[actionTable[stateID][column] * (-1)] < PriorityTable[ph.first]) {
					actionTable[stateID][column] = nextStateID; // 不做归约，做移进，因为ph.first移进符号优先级>归约的符号优先级
					continue;
				}
				if (rightTable.find(ph.first)!=rightTable.end()) {
					actionTable[stateID][column] = nextStateID;
					continue;
				}
				if (leftTable.find(ph.first)!=leftTable.end())//如果此操作符不在两个结合表中
					continue;
					
				// 如果上述条件都不满足，则报错
				int prodID = actionTable[stateID][column] * (-1);
				cout << "移进归约冲突\n对应产生式为" << endl; 
				cout << getSymbol(producerVector[prodID].left);
				cout << "->";
				for (int i = 0; i < producerVector[prodID].right.size(); i++)
					cout << getSymbol(producerVector[prodID].right[i]) << " ";
				cout << "stateID=" << stateID << " column=" << column << " old=" << actionTable[stateID][column] * (-1)
					<< " new=" << nextStateID
					<< " signal=" << ph.first << endl;
				return 0;
			}
			else
				actionTable[stateID][column] = nextStateID;
		}
	}
	return 1;
}

string getSymbol(int t)
{
	/*
	#define TERMINS 20000 // 终结符从20000以后开始编号
	#define NONTERMINS 30000 // 非终结符从30000以后开始编号
	#define POUND 19999 // #号标记为19999
	#define SSTART 29999 // 拓广文法开始符号S'标记为29999
	#define EPSILON 39999 // 产生式里可能会出现的空,平时标记为epsilon
	*/
	if (t == 19999) return"#";
	if (t == 29999) return "S'";
	if (t == 39999) return "epsilon";
	if (t < 30000)
	{
		for (auto& p1 : terminatorTable)
		{
			if (p1.second == t) return p1.first;
		}
	}
	else
	{
		for (auto& p1 : nonterminalTable)
		{
			if (p1.second == t) return p1.first;
		}
	}
	return "";
}

void PrintItemSet(multiset<LR1Item>& i0)
{
	cout << "\n输出项目集：\n";
	for (auto& pi : i0)
	{
		cout << "项目号：" << pi.getProducerID() << " ";
		cout << getSymbol(producerVector[pi.getProducerID()].left) << "->";
		for (int i = 0; i < producerVector[pi.getProducerID()].right.size(); i++)
		{
			if (pi.getCurrentPosition() == i) cout << "·";
			cout << getSymbol(producerVector[pi.getProducerID()].right[i]) << " ";
		}

		if (pi.getCurrentSymbol() == -1) cout << "· 无待归约符号";
		else
			cout << " 待归约符号:" << getSymbol(pi.getCurrentSymbol());
		cout << " 预测符:";
		for (auto& i : pi.getPredictiveSym()) {
			cout << getSymbol(i) << " ";
		}
		cout << "\n";
	}

	cout << "\n--------------------------------------------------\n";
}

void GenerateCode()
{
	ofile << "#include<iostream>\n";
	ofile << "#include<map>\n";
	ofile << "#include<stack>\n";
	ofile << "#include<fstream>\n";
	ofile << "#include<vector>\n";
	ofile << "#include<string>\n";
	ofile << "#include\"Lex.h\"\n";
	ofile << "#define ERROR 40000\n";
	ofile << "#define ACCEPT 0\n";
	ofile << "#define SOURCE_END 40001\n";
	ofile << "using namespace std;\n";
	ofile << "extern string analysis(char *yytext,int n);\n";
	ofile << "\n";
	ofile << "struct Sym\n";
	ofile << "{\n";
	ofile << "\tint symbol;\n";
	ofile << "\tint state;\n";
	ofile << "};\n";
	ofile << "map<int,int> signalTable;\n";
	ofile << "map<string,int> symTable;\n";
	ofile << "\n";
	ofile << "struct node\n";
	ofile << "{\n";
	ofile << "\tstring name;//节点名称\n";
	ofile << "\tvector<node*>child;\n";
	ofile << "};\n";
	ofile << "typedef node* TreeNode;\n";
	ofile << "struct Tree\n";
	ofile << "{\n";
	ofile << "\tTreeNode root;\n";
	ofile << "};\n";
	ofile << "char buf[256]; // 不支持超过256个字符的符号\n";
	ofile << "Tree syntaxTree;//语法树\n";
	ofile << "stack<node*>syntaxTreeStack;\n";
	ofile << "string getSymbol(int t);\n";
	ofile << "ofstream treefile;\n";
	ofile << "void printMTree(string prefix, TreeNode Node, bool isFirst);\n";
	ofile << "\n";
	ofile << "int producerN[" << producerVector.size() << "]={"; // 产生式右部长度集合
	for (int i = 0; i < producerVector.size(); i++)
	{
		ofile << producerVector[i].right.size();
		if (i != producerVector.size() - 1)
			ofile << ",";
	}
	ofile << "};\n";
	ofile << "int pLeftSection[" << producerVector.size() << "]={"; // 产生式左部集合（肯定会有重复）
	for (int i = 0; i < producerVector.size(); i++)
	{
		ofile << producerVector[i].left;
		if (i != producerVector.size() - 1)
			ofile << ",";
	}
	ofile << "};\n";
	ofile << "ifstream ifile;\n";
	//输出文件定义的一些常量
	ofile << "int actionTable[" << actionTable.size() << "][" << actionTable.front().size() << "]=\n\t\t{";
	for (int i = 0; i < actionTable.size(); i++)
	{
		ofile << "\t\t{";
		for (int j = 0; j < actionTable.front().size(); j++)
		{
			if (actionTable[i][j] != 40000) // 4000 代表ERROR
				ofile << actionTable[i][j];
			else
				ofile << "ERROR";
			if (j == actionTable.front().size() - 1) continue;
			ofile << ",";
		}
		ofile << "}";
		if (i == actionTable.size() - 1) continue;
		ofile << ",\n";
	}
	ofile << "};\n";
	ofile << "int searchTable(int stateID,int symbol)\n";
	ofile << "{\n";
	ofile << "\treturn actionTable[stateID][symbol];\n";
	ofile << "}\n";
	ofile << "\n";
	//此部分完成查表程序的输出
	//下面完成读Token程序的输出
	ofile << "int readToken()\n";
	ofile << "{\n";
	ofile << "\tif(ifile.eof())\n";
	ofile << "\t\treturn SOURCE_END;\n";
	ofile << "\tint pos=0;\n";
	ofile << "\tbool isEnd=false;\n";
	ofile << "\tbool isToken=false;//与isOperator互斥\n";
	ofile << "\tbool isOperator=false;\n";
	ofile << "\tstring ops(\"!@#$%^&*()+-=|\[]{};':\\\",.<>/?\");\n";
	ofile << "\tstring wss(\"\\t\\n\\r \");\n";
	ofile << "\tstring letter(\"_.0123456789aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ\");\n";
	ofile << "\tstring repeat(\"&|+-=<>\"); // ++,--,&&,||,>>,<<,==\n";
	ofile << "\tchar c=ifile.get();\n";
	ofile << "\twhile(c==' '||c=='\\t'||c=='\\n'||c=='\\r') c=ifile.get();//滤掉空白符\n";
	ofile << "\twhile(!isEnd)\n";
	ofile << "\t{\n";
	ofile << "\t\tif(c==-1)\n";
	ofile << "\t\t{\n";
	ofile << "\t\t\tbuf[pos]='\\0';\n";
	ofile << "\t\t\tisEnd=true;\n";
	ofile << "\t\t\tcontinue;\n";
	ofile << "\t\t}\n";
	ofile << "\t\tif(letter.find(c)>=0&&letter.find(c)<letter.size())\n";
	ofile << "\t\t{\n";
	ofile << "\t\t\tif(isOperator)\n";
	ofile << "\t\t\t{\n";
	ofile << "\t\t\t\tifile.unget();\n";
	ofile << "\t\t\t\tbuf[pos]='\\0';\n";
	ofile << "\t\t\t\tisEnd=true;\n";
	ofile << "\t\t\t}\n";
	ofile << "\t\t\telse\n";
	ofile << "\t\t\t{\n";
	ofile << "\t\t\t\tisToken=true;\n";
	ofile << "\t\t\t\tbuf[pos]=c;\n";
	ofile << "\t\t\t\tpos++;\n";
	ofile << "\t\t\t\tc=ifile.get();\n";
	ofile << "\t\t\t\tif (c == '.' && (buf[pos - 1] < '0' || buf[pos - 1]>'9')) {//不是double，float\n";
	ofile << "\t\t\t\t\tifile.unget();\n";
	ofile << "\t\t\t\t\tbuf[pos]='\\0';\n";
	ofile << "\t\t\t\t\tisEnd = true;\n";
	ofile << "\t\t\t\t}\n";
	ofile << "\t\t\t}\n";
	ofile << "\t\t\tcontinue;\n";
	ofile << "\t\t}\n";
	ofile << "\t\tif(ops.find(c)>=0&&ops.find(c)<ops.size())//表示当c不是正常字符时\n";
	ofile << "\t\t{\n";
	ofile << "\t\t\t//进入非正常字符的处理过程\n";
	ofile << "\t\t\tif(isToken)\n";
	ofile << "\t\t\t{\n";
	ofile << "\t\t\t\tifile.unget();\n";
	ofile << "\t\t\t\tbuf[pos]='\\0';\n";
	ofile << "\t\t\t\tisEnd=true;\n";
	ofile << "\t\t\t}\n";
	ofile << "\t\t\telse\n";
	ofile << "\t\t\t{\n";
	ofile << "\t\t\t\tisOperator=true;\n";
	ofile << "\t\t\t\tbuf[pos]=c;\n";
	ofile << "\t\t\t\tpos++;\n";
	ofile << "\t\t\t\tif (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '!' || c == '&' || c == '|' || c == '>' || c == '<' || c == '^' || c == '=') { // ++,+=,--,-=,/=,!=,%=,&&,||,>>,>=,<=,<<,^=,==\n";
	ofile << "\t\t\t\t\tchar old = c;\n";
	ofile << "\t\t\t\t\tc = ifile.get();\n";
	ofile << "\t\t\t\t\tif ((repeat.find(old) >= 0 && repeat.find(old) < repeat.size() && c == old) || (c == '='))//罗列上面所有情况\n";
	ofile << "\t\t\t\t\t\tcontinue;\n";
	ofile << "\t\t\t\t\telse // 否则文件输出流退回一位，退出if，继续后续判断\n";
	ofile << "\t\t\t\t\t\tifile.unget();\n";
	ofile << "\t\t\t\t}\n";
	ofile << "\t\t\t\t// 单读一个字符，滤掉空白符\n";
	ofile << "\t\t\t\tc = ifile.get();\n";
	ofile << "\t\t\t\twhile (wss.find(c) >= 0 && wss.find(c) < wss.size())\n";
	ofile << "\t\t\t\t\tc = ifile.get();\n";
	ofile << "\t\t\t\tif (c != -1) // c=-1代表文件EOF\n";
	ofile << "\t\t\t\t\tifile.unget(); \n";
	ofile << "\t\t\t\tbuf[pos] = '\\0'; \n";
	ofile << "\t\t\t\tisEnd = true; \n";
	ofile << "\t\t\t}\n";
	ofile << "\t\t\tcontinue;\n";
	ofile << "\t\t}\n";
	ofile << "\t\tif(wss.find(c)>=0&&wss.find(c)<wss.size())\n";
	ofile << "\t\t{\n";
	ofile << "\t\t\tbuf[pos]='\\0';\n";
	ofile << "\t\t\tisEnd=true;\n";
	ofile << "\t\t}\n";
	ofile << "\t\telse return -1;\n";
	ofile << "\t}\n";
	ofile << "\tcout << \"yytext: \" << buf << \" TokenName:\";\n";
	ofile << "\tstring LexOuput = analysis(buf, strlen(buf));\n";
	ofile << "\tcout << LexOuput << endl;\n";
	ofile << "\treturn symTable[LexOuput];\n";
	ofile << "}\n";
	ofile << "\n";
	ofile << "int parse()\n";
	ofile << "{\n";
	ofile << "\tint inputsymbol=0;\n";
	ofile << "\tint cstate=0;\n";
	ofile << "\tstack<Sym> symStack;//符号栈\n";
	ofile << "\tSym st;//用作分析时的临时栈顶元素存储变量\n";
	ofile << "\tst.symbol=0;// #入栈\n";
	ofile << "\tst.state=0;\n";
	ofile << "\tsymStack.push(st);\n";
	ofile << "\tinputsymbol=readToken();\n";
	ofile << "\n";
	ofile << "\twhile(1)\n";
	ofile << "\t{\n";
	ofile << "\t\tst=symStack.top();\n";
	ofile << "\t\tint col=signalTable[inputsymbol];\n";
	ofile << "\t\tint result=searchTable(st.state,col);\n";
	ofile << "\t\tif(result==ERROR)//出错\n";
	ofile << "\t\t{\n";
	ofile << "\t\t\tcout<<\"Compile Error!\"<<endl;\n";
	ofile << "\t\t\treturn 0;\n";
	ofile << "\t\t}\n";
	ofile << "\t\tif(result==ACCEPT)\n";
	ofile << "\t\t{\n";
	ofile << "\t\t\tcout<<\"Compile sucessfully!\"<<endl;\n";
	ofile << "\t\t\tsyntaxTree.root = syntaxTreeStack.top();\n";
	ofile << "\t\t\tstring filename;\n";
	ofile << "\t\t\tcout << \"请输入语法树的输出文件名:\" << endl;\n";
	ofile << "\t\t\tcin >> filename;\n";
	ofile << "\t\t\ttreefile.open(filename);\n";
	ofile << "\t\t\tprintMTree("", syntaxTree.root, 0);\n";
	ofile << "\t\t\treturn 1;\n";
	ofile << "\t\t}\n";
	ofile << "\t\tif(result<0)//负数表示为归约项目\n";
	ofile << "\t\t{\n";
	ofile << "\t\t\tresult*=-1;\n";
	ofile << "\t\t\tint n=producerN[result];//取得该号产生式右部符号数量，以作弹栈用\n";
	ofile << "\t\t\tTreeNode parentNode = new node;\n";
	ofile << "\t\t\tst.symbol = pLeftSection[result];//产生式左部的符号\n";
	ofile << "\t\t\tparentNode->name = getSymbol(st.symbol);\n";
	ofile << "\t\t\tfor(int i=0;i<n;i++)\n";
	ofile << "\t\t\t{\n";
	ofile << "\t\t\t\tparentNode->child.push_back(syntaxTreeStack.top());\n";
	ofile << "\t\t\t\tsyntaxTreeStack.pop();\n";
	ofile << "\t\t\t\tsymStack.pop();\n";
	ofile << "\t\t\t}\n";
	ofile << "\t\t\t//产生式左部的符号压栈\n";
	ofile << "\t\t\tst.state=searchTable(symStack.top().state,signalTable[st.symbol]);\n";
	ofile << "\t\t\tsymStack.push(st);\n";
	ofile << "\t\t\tsyntaxTreeStack.push(parentNode);\n";
	ofile << "\t\t}\n";
	ofile << "\t\telse\n";
	ofile << "\t\t{\n";
	ofile << "\t\t\tst.symbol=inputsymbol;\n";
	ofile << "\t\t\tst.state=result;\n";
	ofile << "\t\t\tsymStack.push(st);\n";
	ofile << "\t\t\tTreeNode newNode = new node;\n";
	ofile << "\t\t\tnewNode->name = buf;\n";
	ofile << "\t\t\tsyntaxTreeStack.push(newNode);\n";
	ofile << "\t\t\tinputsymbol=readToken();\n";
	ofile << "\t\t}\n";
	ofile << "\t}\n";
	ofile << "}\n";
	//输出main函数
	ofile << "int main()\n";
	ofile << "{\n";
	ofile << "\tpair<string,int> p1;\n";//输出符号名和对应编号
	for (auto& i : terminatorTable)
	{
		if (i.first != "#")
		{
			ofile << "\tp1.first=\"" << i.first << "\";\n";
			ofile << "\tp1.second=" << i.second << ";\n";
			ofile << "\tsymTable.insert(p1);\n";
		}
		else
		{
			ofile << "\tp1.first=\"#\";\n";
			ofile << "\tp1.second=" << i.second << ";\n";
			ofile << "\tsymTable.insert(p1);\n";
		}
	}
	for (auto& i : nonterminalTable)
	{
		ofile << "\tp1.first=\"" << i.first << "\";\n";
		ofile << "\tp1.second=" << i.second << ";\n";
		ofile << "\tsymTable.insert(p1);\n";
	}
	ofile << "\tpair<int,int> tp;\n";
	for (map<string, int>::iterator pti = terminatorTable.begin(); pti != terminatorTable.end(); pti++)
	{
		if (pti->first != "#")
		{
			ofile << "\ttp.first=" << pti->second << ";\n";
			ofile << "\ttp.second=" << terminSet[pti->second] << ";\n";
			ofile << "\tsignalTable.insert(tp);\n";
		}
		else
		{
			ofile << "\ttp.first=40001;\n";
			ofile << "\ttp.second=" << terminSet[pti->second] << ";\n";
			ofile << "\tsignalTable.insert(tp);\n";
		}
	}
	for (map<int, int>::iterator pti = nonterminSet.begin(); pti != nonterminSet.end(); pti++)
	{
		ofile << "\ttp.first=" << pti->first << ";\n";
		ofile << "\ttp.second=" << pti->second << ";\n";
		ofile << "\tsignalTable.insert(tp);\n";
	}
	//以上完成signalTable的初始化段代码.
	ofile << "\tstring filename;\n";
	ofile << "\tcout<<\"Please input the file name:\"<<endl;\n";
	ofile << "\tcin>>filename;\n";
	ofile << "\tifile.open(filename.c_str());\n";
	ofile << "\tif(ifile.fail())\n";
	ofile << "\t{\n";
	ofile << "\t\tcout<<\"Cannot open the file \"<<filename<<endl;\n";
	ofile << "\t\treturn 0;\n";
	ofile << "\t}\n";
	ofile << "\tparse();\n";
	ofile << "\treturn 0;\n";
	ofile << "}\n";
	ofile << "string getSymbol(int t)\n";
	ofile << "{\n";
	ofile << "\tif (t == 19999) return\"#\"; \n";
	ofile << "\tif (t == 29999) return \"S'\"; \n";
	ofile << "\tif (t == 39999) return \"epsilon\"; \n";
	ofile << "\tfor (auto& p : symTable)\n";
	ofile << "\t\tif (p.second == t) return p.first; \n";
	ofile << "\treturn ""; \n";
	ofile << "}\n";
	ofile << "\n";
	ofile << "void printMTree(string prefix, TreeNode Node, bool isFirst)\n";
	ofile << "{\n";
	ofile << "\tif (Node != NULL) {\n";
	ofile << "\t\ttreefile << prefix; \n";
	ofile << "\t\ttreefile << (isFirst ? \"├─ \" : \"└─ \"); \n";
	ofile << "\t\ttreefile << Node->name << endl; \n";
	ofile << "\t\t// enter the next tree level - left and right branch\n";
	ofile << "\t\tfor (int i = 0; i < Node->child.size(); i++)\n";
	ofile << "\t\t\tprintMTree(prefix + (isFirst ? \"│\\\t\t\t\" : \" \t\t\t\"), Node->child[i], i == 0); \n";
	ofile << "\t}\n";
	ofile << "}\n";
}