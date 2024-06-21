#include<unordered_map>
#include<string>
#include<vector>
#include<fstream>
#include<iostream>
using namespace std;

// token{词、类型、类号、类内编码}
struct token {
    string word;
    string type;
    int classNumber;
    int innerCode;
};

vector<token>tokens;

unordered_map<string, int> Keywords;
unordered_map<string, int> Identifiers;
unordered_map<string, int> ConstNumbers;
unordered_map<string, int> Ops;
unordered_map<string, int> Delimiters;

int NUM_OF_ID = 53;
int NUM_OF_CONST = 10;
int state = 0;
char c, pre;
string s="";

bool isDigit(char ch){
    return ch>='0' && ch<='9';
}
bool isLetter(char ch){
    return (ch>='a' && ch<='z') ||(ch>='A' && ch<='Z');
}
bool isOperator(string word){
    return Ops.count(word);
}
bool isDelimiter(string word){
    return Delimiters.count(word);
}
bool isDelimiter(char ch){
    string str(1,ch);
    return isDelimiter(str);
}
void buildKeywords()
{
	Keywords["asm"] = 1;
	Keywords["auto"] = 2;
	Keywords["bool"] = 3;
	Keywords["break"] = 4;
	Keywords["case"] = 5;
	Keywords["catch"] = 6;
	Keywords["char"] = 7;
	Keywords["class"] = 8;
	Keywords["const"] = 9;
	Keywords["const_cast"] = 10;
	Keywords["continue"] = 11;
	Keywords["default"] = 12;
	Keywords["delete"] = 13;
	Keywords["do"] = 14;
	Keywords["double"] = 15;
	Keywords["dynamic"] = 16;
	Keywords["else"] = 17;
	Keywords["enum"] = 18;
	Keywords["explicit"] = 19;
	Keywords["export"] = 20;
	Keywords["extern"] = 21;
	Keywords["false"] = 22;
	Keywords["float"] = 23;
	Keywords["for"] = 24;
	Keywords["friend"] = 25;
	Keywords["goto"] = 26;
	Keywords["if"] = 27;
	Keywords["inline"] = 28;
	Keywords["int"] = 29;
	Keywords["long"] = 30;
	Keywords["mutable"] = 31;
	Keywords["namespace"] = 32;
	Keywords["new"] = 33;
	Keywords["operator"] = 34;
	Keywords["private"] = 35;
	Keywords["protected"] = 36;
	Keywords["public"] = 37;
	Keywords["register"] = 38;
	Keywords["reinterpret_cast"] = 39;
	Keywords["return"] = 40;
	Keywords["short"] = 41;
	Keywords["signed"] = 42;
	Keywords["sizeof"] = 43;
	Keywords["static"] = 44;
	Keywords["static_cast"] = 45;
	Keywords["struct"] = 46;
	Keywords["switch"] = 47;
	Keywords["template"] = 48;
	Keywords["this"] = 49;
	Keywords["throw"] = 50;
	Keywords["true"] = 51;
	Keywords["try"] = 52;
	Keywords["typedef"] = 53;
	Keywords["typeid"] = 54;
	Keywords["typename"] = 55;
	Keywords["union"] = 56;
	Keywords["unsigned"] = 57;
	Keywords["using"] = 58;
	Keywords["virtual"] = 59;
	Keywords["void"] = 60;
	Keywords["volatile"] = 61;
	Keywords["while"] = 62;
}
void buildIdentifier()
{
	Identifiers["a"] = 1;
	Identifiers["b"] = 2;
	Identifiers["c"] = 3;
	Identifiers["d"] = 4;
	Identifiers["e"] = 5;
	Identifiers["f"] = 6;
	Identifiers["g"] = 7;
	Identifiers["h"] = 8;
	Identifiers["i"] = 9;
	Identifiers["g"] = 10;
	Identifiers["k"] = 11;
	Identifiers["l"] = 12;
	Identifiers["m"] = 13;
	Identifiers["n"] = 14;
	Identifiers["o"] = 15;
	Identifiers["p"] = 16;
	Identifiers["q"] = 17;
	Identifiers["r"] = 18;
	Identifiers["s"] = 19;
	Identifiers["t"] = 20;
	Identifiers["u"] = 21;
	Identifiers["v"] = 22;
	Identifiers["w"] = 23;
	Identifiers["x"] = 24;
	Identifiers["y"] = 25;
	Identifiers["z"] = 26;
	Identifiers["main"] = 27;
	Identifiers["fun"] = 28;
	Identifiers["number"] = 29;
	Identifiers["value"] = 30;
	Identifiers["state"] = 31;
	Identifiers["width"] = 32;
	Identifiers["height"] = 33;
	Identifiers["max"] = 34;
	Identifiers["min"] = 35;
	Identifiers["ptr"] = 36;
	Identifiers["str"] = 37;
	Identifiers["token"] = 38;
	Identifiers["words"] = 39;
	Identifiers["constant"] = 40;
	Identifiers["pre"] = 41;
	Identifiers["next"] = 42;
	Identifiers["count"] = 43;
	Identifiers["example"] = 44;
	Identifiers["comment"] = 45;
	Identifiers["keyword"] = 46;
	Identifiers["set"] = 47;
	Identifiers["fp"] = 48;
	Identifiers["name"] = 49;
	Identifiers["type"] = 50;
	Identifiers["num"] = 51;
	Identifiers["letter"] = 52;
}
void buildConstant()
{
	ConstNumbers["0"] = 0;
	ConstNumbers["1"] = 1;
	ConstNumbers["2"] = 2;
	ConstNumbers["3"] = 3;
	ConstNumbers["4"] = 4;
	ConstNumbers["5"] = 5;
	ConstNumbers["6"] = 6;
	ConstNumbers["7"] = 7;
	ConstNumbers["8"] = 8;
	ConstNumbers["9"] = 9;

}
void buildOperator()
{
	Ops["+"] = 1;
	Ops["++"] = 2;
	Ops["+="] = 3;
	Ops["-"] = 4;
	Ops["--"] = 5;
	Ops["-="] = 6;
	Ops["*"] = 7;
	Ops["*="] = 8;
	Ops["/"] = 9;
	Ops["/="] = 10;
	Ops["%"] = 11;
	Ops["%="] = 12;
	Ops["|"] = 13;
	Ops["|="] = 14;
	Ops["&"] = 15;
	Ops["&="] = 16;
	Ops["^"] = 17;
	Ops["^="] = 18;
	Ops["<<"] = 19;
	Ops[">>"] = 20;
	Ops["="] = 21;
	Ops["!"] = 22;
	Ops["!="] = 23;
	Ops["&&"] = 24;
	Ops["||"] = 25;
	Ops["~"] = 26;
	Ops["<"] = 27;
	Ops["<="] = 28;
	Ops["<>"] = 29;
	Ops[">"] = 30;
	Ops[">="] = 31;
	Ops["=="] = 32;
}
void buildDelim()
{
	Delimiters["("] = 1;
	Delimiters[")"] = 2;
	Delimiters[","] = 3;
	Delimiters[";"] = 4;
	Delimiters["["] = 5;
	Delimiters["]"] = 6;
	Delimiters["{"] = 7;
	Delimiters["}"] = 8;
}

void addToken(string word, int classNumber){
    token tem;
    switch(classNumber){
        case 1:
            if(Keywords.count(word)){
                tem = {word, "keyword", 1, Keywords[word]};
                tokens.push_back(tem);
            }
            else{
                if(Identifiers.count(word)){
                    tem = {word, "identifier", 2, Identifiers[word]};
                    tokens.push_back(tem);
                }
                else{
                    Identifiers[word] = NUM_OF_ID;
                    tem = {word, "identifier", 2, NUM_OF_ID++};
                    tokens.push_back(tem);
                }
            }
            break;
        case 2:
            if(Identifiers.count(word)){
                    tem = {word, "identifier", 2, Identifiers[word]};
                    tokens.push_back(tem);
            }
            else{
                    Identifiers[word] = NUM_OF_ID;
                    tem = {word, "identifier", 2, NUM_OF_ID++};
                    tokens.push_back(tem);
            }
            break;
        case 3:
            if(ConstNumbers.count(word)){
                    tem = {word, "const_number", 3, ConstNumbers[word]};
                    tokens.push_back(tem);
            }
            else{
                    ConstNumbers[word] = NUM_OF_CONST;
                    tem = {word, "const_number", 3, NUM_OF_CONST++};
                    tokens.push_back(tem);
            }
            break;
        case 4:
            if(Ops.count(word)){
                    tem = {word, "operator", 4, Ops[word]};
                    tokens.push_back(tem);
            }
            break;
        case 5:
            if(Delimiters.count(word)){
                    tem = {word, "Delimiter", 5, Delimiters[word]};
                    tokens.push_back(tem);
            }
            break;
        default:
            tem = {word, "ERROR", -1 ,-1};
            tokens.push_back(tem);
            break;
    }
}

void lexical_analyzer(const string& path)
{
	fstream input(path);
	while (!input.eof()){
		switch (state){
			case 0:
				c = input.get();
				s = c;
				if (c == 9 || c == 10 || c == 13 || c == 32) {	
					// Address delimiters like space, tab and so on 
					state = 0;
					s = "";
				}
				else if (isLetter(c))
					state = 1;
				else if (isDigit(c))
					state = 3;
				else if (c == '<')
					state = 8;
				else if (c == '=')
					state = 13;
				else if (c == '>')
					state = 16;
				else if (c == '+' || c == '-' || c == '&' || c == '|') {
					
					state = 20; pre = c;
				}
				else if (c == '*' || c == '/' || c == '%' || c == '^' || c == '!')
					state = 24;
				else if (isDelimiter(s))
					state = 27;
				else if (isOperator(s))
					state = 28;
				else 
					state = 7;	//error
				break;
			case 1: // letter
				c = input.get();
				if (isLetter(c) || isDigit(c))s += c;	// keywords/id
				else state = 2;
				break;
			case 2:	//* back
				// keywords or id
				addToken(s, 1);	
				input.seekg(-1, ios::cur);
				state = 0;
				break;
			case 3:	// digit
				c = input.get();
				if (isDigit(c))
					s += c;	
				else if (c == '.') {
					s += c;
					state = 4;
				}
				else 
					state = 6;
				break;
			case 4:
				c = input.get();
				if (isDigit(c)) {
					s += c;
					state = 5;
				}
				else 
					state = 7;	//error
				break;
			case 5:
				c = input.get();
				if (isDigit(c))	
					s += c;
				else 
					state = 6;
				break;
			case 6:
			 	// The letter-checking is necessary because some error may exits
				// As an example 111; is legal while 111a is illegal
				if (isLetter(c)) {
					s += c;
					state = 7;
				}
				else {
					addToken(s, 3);	
					input.seekg(-1, ios::cur);
					state = 0;
				}
				break;
			case 7:	
				// handling error
				while (((c = input.get()) != EOF)) {
					if (isDelimiter(c) || c == 9 || c == 10 || c == 13 || c == 32)
						break;
					else
						s += c;
				}
				addToken(s, 6);// error
				input.seekg(-1, ios::cur);// then skip error continue
				state = 0;
				break;
			case 8:	// <
				c = input.get();
				if (c == '=') state = 9;	//	<=,Relop
				else if (c == '>') state = 10;	//	<>,Relop
				else if (c == '<')state = 11;	// <<,
				else state = 12;
				break;
			case 9:
				s += c;
				addToken(s, 4);	// op:relop
				state = 0;
				break;
			case 10:
				s += c;
				addToken(s, 4);	// op:relop
				state = 0;
				break;
			case 11:
				s += c;
				addToken(s, 4);	// op
				state = 0;
				break;
			case 12:	// * back
				addToken(s, 4);	// op:relop
				input.seekg(-1, ios::cur);
				state = 0;
				break;
			case 13:	// =
				c = input.get();
				if (c == '=') state = 14;	//	==,Resign
				else state = 15;
				break;
			case 14:
				s += c;
				addToken(s, 4); // op:relop
				state = 0;
				break;
			case 15:	//* back
				addToken(s, 4);	// op
				input.seekg(-1, ios::cur);
				state = 0;
				break;
			case 16:	// >
				c = input.get();
				if (c == '=') state = 17;	//	>=,Relop
				else if (c == '>')state = 18;	// >>,
				else state = 19;
				break;
			case 17:
				s += c;
				addToken(s, 4);	// op:relop
				state = 0;
				break;
			case 18:
				s += c;
				addToken(s, 4);	// op
				state = 0;
				break;
			case 19:	//* back
				addToken(s, 4);	// op:relop
				input.seekg(-1, ios::cur);
				state = 0;
				break;
			case 20:	//
				c = input.get();
				if (c == pre)	state = 21;	//++,--,&&,||
				else if (c == '=')	state = 22;	//+=,-=,&=,|=
				else state = 23;
				break;
			case 21:
				s += c;
				addToken(s, 4);	// op
				state = 0;
				break;
			case 22:
				s += c;
				addToken(s, 4);	// op
				state = 0;
				break;
			case 23:	//* back
				addToken(s, 4);	// op:+,-,&,|
				input.seekg(-1, ios::cur);
				state = 0;
				break;
			case 24:
				c = input.get();
				if (c == '=')state = 25;//*=,/=,%=,^=,!=
				else if ((c == '/'|| c== '*') && s == "/")state = 29;
				else state = 26;
				break;
			case 25:
				s += c;
				addToken(s, 4);	// op
				state = 0;
				break;
			case 26:	//* back
				addToken(s, 4);	// op:*,/,%,^,!
				input.seekg(-1, ios::cur);
				state = 0;
				break;
			case 27:
				addToken(s, 5);
				state = 0;
				break;
			case 28:
				addToken(s, 4);
				state = 0;
				break;
			case 29:
				c = input.get();
				if (c != '\n')state = 29;
				else state = 0;
			default:
				break;
		}
	}
}
void printToken(){
    // print the head
    cout << setw(15) << std::left << "       RE" 
              << setw(15) << std::left << "|     type"
              << setw(15) << std::left << "| classNumber"
              << setw(15) << std::left << "|   innerCode" << endl;
    cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;

	// print the tokens
	for (unsigned int i = 0; i < tokens.size(); i++)
	{
		cout << "     "<<setw(10) << std::left << tokens[i].word
               << "| " << setw(13) << std::left << tokens[i].type 
               << "|      " << setw(8) << std::left << tokens[i].classNumber
               << "|      " << setw(8) << std::left << tokens[i].innerCode <<endl;

    	cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;

	}
}
void printTokenToFile(const string& fileName) {
    // Open the file for writing
    ofstream outputFile(fileName);

    if (!outputFile.is_open()) {
        cerr << "Error opening file: " << fileName << endl;
        return;
    }

    // Print the header to the file
    outputFile << setw(15) << left << "       RE" 
               << setw(15) << left << "|     type"
               << setw(15) << left << "| classNumber"
               << setw(15) << left << "|   innerCode" << endl;
    outputFile << setw(60) << setfill('-') << "" << setfill(' ') << endl;

    // Print the tokens to the file
    for (unsigned int i = 0; i < tokens.size(); i++) {
        outputFile << "     " << setw(10) << left << tokens[i].word
                   << "| " << setw(13) << left << tokens[i].type 
                   << "|      " << setw(8) << left << tokens[i].classNumber
                   << "|      " << setw(8) << left << tokens[i].innerCode << endl;

        outputFile << setw(60) << setfill('-') << "" << setfill(' ') << endl;
    }

    // Close the file
    outputFile.close();
}
int main()
{
	// Construct the base map for analyzer
	buildKeywords();
	buildIdentifier();
	buildConstant();
	buildOperator();
	buildDelim();
	// do the Lexical Analysis
	string inputPath = "../test.txt";
	string outputPath = "../result.txt";
	lexical_analyzer(inputPath);
	// print the results as a table on terminal
	printToken();
	// write the results as a table to txt
	printTokenToFile(outputPath);
}