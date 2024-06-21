#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<stack>
#include<cstring>
#include<set>
#include<fstream>
using namespace std;
 
map<char, int>getnum;        
char getchar_[100];        
vector<string>productions;      
int parsingTable[100][100];

int numAll = 0;
int numTerminal = 0;

// Through getnum and getchar_ we build the mapping between character and integer
// Then we use string to store the first or follow set of a char
// the index is the same as the mapping of character
string first[100];
string follow[200];

// The data structures below are designed to do analyse and draw the parsing tree
struct node{
	string name;
	int cnt;
	vector<node*>child;
};
typedef node* TreeNode;
struct Tree{
	TreeNode root;
};
Tree syntaxTree;
string** LL1ForecastAnalysisTable;
map<string, int> terminalSet;
map<string, int> nonTerminalSet;
vector<string>pushdownStack;
vector<vector<void*>>constructSyntaxTreeStack;

void initGrammar(const string& filepath)
{
    /*
        test.txt
        [Termianls]
        [NonTerminals]
        [Productions]
        end
    */
	fstream input(filepath);
	memset(parsingTable, -1, sizeof(parsingTable));

    // Get all Terminals from txt
	getnum['#'] = 0;
	getchar_[0] = '#';
	char ch;
	do{
		input >> ch;
		getnum[ch] = ++numAll;
		getchar_[numAll] = ch;
	} while (input.peek() != '\n');
	numTerminal = ++numAll;
    // We use @ to replace epsilon since we cann't use it
	getnum['@'] = numTerminal;        
	getchar_[numAll] = ('@');
    // Get all nonTerminals from txt
	do
    {
		input >> ch;
		getnum[ch] = ++numAll;
		getchar_[numAll] = ch;
	} while (input.peek() != '\n');

    // Get productions from txt
	string production;
	while (input >> production && production != "end"){
        // the string in productions have structures as below
        // str : [NonTerminal][production[3:]]
		string str;
		str += production[0];
		for (int i = 3; i < production.size(); i++)
			if (production[i] == '|'){
				productions.push_back(str);
				str.clear();
				str += production[0];
			}
			else
				str += production[i];
		productions.push_back(str);
	}    
}

void unionOfString(string& a, string b){
    // Get the union of a and b
    // Set the result as new a
    // The set is used to keep the element unique
	set<char>temSet;
	for (int i = 0; i < a.size(); i++)
		temSet.insert(a[i]);
	for (int i = 0; i < b.size(); i++)
		temSet.insert(b[i]);
    // get all elments in set and set it to a
	string ans;
	set<char>::iterator it;
	for (it = temSet.begin(); it != temSet.end(); it++)
		ans += *it;
	a = ans;
}

string getFirstOfVn(int vn, int& has_0){
    // epsilon itselt
	if (vn == numTerminal)
        has_0 = 1;       
    
    // nonTerminals
	if (vn < numTerminal)
        return first[vn];
    
    // Terminals 
	string ans;
	for (int i = 0; i < productions.size(); i++)
        // if the first element after "->" is Non Terminal
		if (getnum[productions[i][0]] == vn){
			ans += getFirstOfVn(getnum[productions[i][1]], has_0);
        }
	return  ans;
}

void getFirstSets()
{
    // The first set of Terminal is itself
	for (int i = 1; i <= numTerminal; i++)
		first[i] += ('0' + i);
    
    // Scan the productions to get all first sets
	for (int j = 0; j < productions.size(); j++){
		int k = 0;        
		int has_0 = 0;
		do {
			has_0 = 0;
			k++;
			if (k == productions[j].size()){
				first[getnum[productions[j][0]]] += ('0' + numTerminal);
				break;
			}
			unionOfString(first[getnum[productions[j][0]]], getFirstOfVn(getnum[productions[j][k]], has_0));
		} while (has_0);
	}
}
void getFollowSets()
{
    // Add # to Follow 
    // Attention string is the index of #
	unionOfString(follow[getnum[productions[0][0]]], "0");  //先添加‘#’；
	for (int j = 0; j < productions.size(); j++){
		for (int i = 1; i < productions[j].size(); i++){
            // Terminal next
			if (getnum[productions[j][i]] <= numTerminal)
                continue;  
            
			int k = i; int has_0;
			do{
				has_0 = 0;
				k++;
				if (k == productions[j].size()){
					unionOfString(follow[getnum[productions[j][i]]], follow[getnum[productions[j][0]]]);
					break;
				}
				unionOfString(follow[getnum[productions[j][i]]], getFirstOfVn(getnum[productions[j][k]], has_0));
			} while (has_0);
		}
	}
}

void getParsingTable(){
	for (int i = 0; i < productions.size(); i++){
        // if @ add follow
		if (productions[i][1] == '@'){
			string flw = follow[getnum[productions[i][0]]];
			for (int k = 0; k < flw.size(); k++)
				parsingTable[getnum[productions[i][0]]][flw[k] - '0'] = i;
		}
		string temps = first[getnum[productions[i][1]]];

        // add according to first sets
		for (int j = 0; j < temps.size(); j++){
			if (temps[j] != ('0' + numTerminal))
				parsingTable[getnum[productions[i][0]]][temps[j] - '0'] = i;
			else{
                // contains @, look in follow
				string flw = follow[getnum[productions[i][1]]];
				for (int k = 0; k < flw.size(); k++)
					parsingTable[getnum[productions[i][0]]][flw[k] - '0'] = i;
			}
		}
	}
}

string get_productions(int i){
	if (i < 0)
        return " ";
	string ans;
	ans += productions[i][0];
	ans += "->";
	for (int j = 1; j < productions[i].size(); j++)
		ans += productions[i][j];
	return ans;
}

void analyseParsingTable(){
	ifstream input("../parsingtable.txt");
	int terminalNum = numTerminal-1;
	int nonTerminalNum = numAll - numTerminal;
	LL1ForecastAnalysisTable = new string * [nonTerminalNum + 1];
	for (int i = 0; i <= nonTerminalNum; i++) {
		LL1ForecastAnalysisTable[i] = new string[terminalNum + 2];
		for (int j = 0; j <= terminalNum + 1; j++) {
			if (i == 0 && j == 0)LL1ForecastAnalysisTable[i][j] = " ";
			else {
				input >> LL1ForecastAnalysisTable[i][j];
				if (i == 0)terminalSet[LL1ForecastAnalysisTable[i][j]] = j;
				if (j == 0)nonTerminalSet[LL1ForecastAnalysisTable[i][j]] = i;
			}
		}
	}
	string str;
	cout<<"Please enter in the token string to analyse:"<<endl;
	cin>>str;
	cout << "Step\t\tStack\t\tInput\t\tProduction\t\tAction" << endl;
	cout << "Initial\t\t#" << LL1ForecastAnalysisTable[1][0] << "\t\t" << str << "#\t\t\n";
	str += "#";
	// i: the step
	// ptr: the index of string analyse now
	int i = 0, ptr = 0;
	string X, a(1, str[ptr]);// X:stack.top;	a: symbol now
	string inStack, inputStr;
	pushdownStack.clear();
	// push in the #
	pushdownStack.push_back("#");
	pushdownStack.push_back(LL1ForecastAnalysisTable[1][0]);
	// the root of parsing tree
	syntaxTree.root = new node;
	auto cur_node = syntaxTree.root;
	cur_node->name = LL1ForecastAnalysisTable[1][0];

	constructSyntaxTreeStack.push_back(vector<void*>());
	constructSyntaxTreeStack.back().push_back(0);
	constructSyntaxTreeStack.back().push_back(cur_node);

	while (++i){
		X = pushdownStack.back();
		if (X == a){
			if (a == "#") {	
				cout << "\t\tSuccess!" << endl;
				break;
			}
			else {	
				ptr++;
				pushdownStack.pop_back();
				inStack = "";
				for (int i = 0; i < pushdownStack.size(); i++)
					inStack += pushdownStack[i];
				inputStr = "";
				for (int i = ptr; i < str.size(); i++)
					inputStr += str[i];
				cout << i << "\t\t" << inStack << "\t";
				if (pushdownStack.size() <= 5)cout << "\t";
				cout << inputStr << "\t\t\t\t\t" << "Match" << endl;
				a = str[ptr];

				// Adjust the syntax tree stack (when reaching the leaf node)
				// move the index to the right
				// structSyntaxTreeStack. size() is the number of syntax tree layers
				while (constructSyntaxTreeStack.size() > 1){
					constructSyntaxTreeStack.back()[0] = (void*)((long long)constructSyntaxTreeStack.back()[0] + 1);
					int index = (long long)constructSyntaxTreeStack.back()[0];
					int parent_idx = (long long)constructSyntaxTreeStack[constructSyntaxTreeStack.size() - 2][0];
					TreeNode Node = (TreeNode)constructSyntaxTreeStack[constructSyntaxTreeStack.size() - 2][parent_idx + 1];
					if (Node->child.size() == index){
						constructSyntaxTreeStack.pop_back();
						continue;
					}
					break;
				}
			}
		}
		else {
			// X ∈ terminals and X!=a =>Error
			if (terminalSet[X]){
				cout << i << "\t\tError\n";
				return;
			}
			// X ∈ non-terminals check parsing table
			else {
				int row = nonTerminalSet[X], col = terminalSet[a];
				string production = LL1ForecastAnalysisTable[row][col];
				if (production == "_") {
					cout << i << "\t\tError\n";
					return;
				}
				else {
					pushdownStack.pop_back();
					if (production != "@")
						for (int i = production.size() - 1; i >= 0; i--)
							if (production[i] == '\'') {
								i--;
								pushdownStack.push_back(string(1, production[i]) + "'");
							}
							else
								pushdownStack.push_back(string(1, production[i]));
					inStack = "";
					for (int i = 0; i < pushdownStack.size(); i++)
						inStack += pushdownStack[i];
					inputStr = "";
					for (int i = ptr; i < str.size(); i++)
						inputStr += str[i];
					cout << i << "\t\t" << inStack << "\t";
					if (pushdownStack.size() < 5)cout << "\t";
					cout << inputStr << "\t\t" << X << "->" << production << "\t\t";
					if (production.size() < 4)cout << "\t";
					cout << "Derivation";
					if (production == "@")
						cout << "Empty";
					cout << endl;

					int index = (long long)constructSyntaxTreeStack.back()[0];
					TreeNode Node = (TreeNode)constructSyntaxTreeStack.back()[index + 1];
					// Down the parsing tree
					constructSyntaxTreeStack.push_back(vector<void*>());
					constructSyntaxTreeStack.back().push_back(0);

					if (production != "@")
						for (int i = 0; i < production.size(); i++){
							TreeNode newNode = new node;
							if (i + 1 < production.size() && production[i + 1] == '\'') {
								newNode->name = string(1, production[i]) + "'";
								i++;
							}
							else
								newNode->name = string(1, production[i]);
							Node->child.push_back(newNode);
							constructSyntaxTreeStack.back().push_back(newNode);
						}
					else {
						TreeNode newNode = new node;
						newNode->name = "@";
						Node->child.push_back(newNode);
						constructSyntaxTreeStack.back().push_back(newNode);
					}
					// if empty need to adjust the parsing tree
					if (production == "@"){
						while (constructSyntaxTreeStack.size() > 1){
							constructSyntaxTreeStack.back()[0] = (void*)((long long)constructSyntaxTreeStack.back()[0] + 1);
							int index = (long long)constructSyntaxTreeStack.back()[0];
							int parent_idx = (long long)constructSyntaxTreeStack[constructSyntaxTreeStack.size() - 2][0];
							TreeNode Node = (TreeNode)constructSyntaxTreeStack[constructSyntaxTreeStack.size() - 2][parent_idx + 1];
							if (Node->child.size() == index){
								constructSyntaxTreeStack.pop_back();
								continue;
							}
							break;
						}
					}
				}
			}
		}
	}
}
void printTree(TreeNode Node, int deep)
{
	for (int i = 0; i <= deep; i++)
		cout << "\t";
	cout << Node->name << endl;
	for (int i = 0; i < Node->child.size(); i++)
		printTree(Node->child[i], deep + 1);
}
void printFirstSets()
{
	cout << "------------FIRST SETS-------------" << endl;
	for (int i = numTerminal + 1; i <= numAll; i++){
		cout << "FIRST [" << getchar_[i] << "]:\t";
		for (int j = 0; j < first[i].size(); j++)
			cout << getchar_[first[i][j] - '0'] << " ";
		cout << endl;
	}
}
void printFollowSets()
{
	cout << "------------FOLLOW SETS------------" << endl;
	for (int i = numTerminal + 1; i <= numAll; i++)
	{
		cout << "FOLLOW[" << getchar_[i] << "]:\t";
		for (int j = 0; j < follow[i].size(); j++)
			cout << getchar_[follow[i][j] - '0'] << " ";
		cout << endl;
	}
	cout << endl;
}
void printParsingTable()
{
	cout << "---------------------------------PARSING TABLE(LL1)---------------------------------" << endl;
	for (int i = 0; i < numTerminal; i++)
		cout << '\t' << getchar_[i];
    cout<<"\n";
	cout << endl;
	for (int i = numTerminal + 1; i <= numAll; i++){
		cout << getchar_[i];
		for (int j = 0; j < numTerminal; j++)
			cout <<'\t' << get_productions(parsingTable[i][j]);
        cout<<"\n";
		cout << endl;
	}
}
void printParsingTableToFile(){
    fstream output("../parsingtable.txt");
	for (int i = 0; i < numTerminal; i++)
		output << '\t' << getchar_[i];
	output << endl;
	for (int i = numTerminal + 1; i <= numAll; i++){
		output << getchar_[i]<<'\t';
		for (int j = 0; j < numTerminal; j++){
			string tem = get_productions(parsingTable[i][j]);
			if(tem ==" ")
				output<<"_\t";
			else{
				string tem_n = tem.substr(3);
				output<<tem_n<<'\t'; 
			}
			output <<'\t';
		}
		output << endl;
	}
}
int main()
{
	string filepath = "../where.txt";
	initGrammar(filepath);
	getFirstSets();
	printFirstSets();
    getFollowSets();
	getFollowSets();
    printFollowSets();
    getParsingTable();
    printParsingTable();
    printParsingTableToFile();
	analyseParsingTable();
	cout << "\nThe parsing table is:\n" << endl;
	printTree(syntaxTree.root, 0);
}
