#include<iostream>
#include<fstream>
#include<string>
#include<set>
#include<map>
#include<regex>
#include<vector>

using namespace std;

map<string, string> rules;
map<string, set<int>> symbols;
struct Edge {
    string symbol = "";
    Edge *next = nullptr;
    int toNode = -1;
};
struct Node {
    Edge *edge = nullptr;
    string action = "";
    set<int> nodes;
};

ifstream in;
ofstream out;
vector<Node> NFA;
vector<Node> DFA;
int startSt = 0;

int newNode() {
    return NFA.size() - 1;
}

string strRE(string str) {
    while (1) {
        int i = 0;
        while (str[i] != '{' && i < str.size())i++;
        if (i == str.size())return str;
        int j = i + 1;
        while (j != str.size()) {
            if (str[j] == '{')i=j;
            if (str[j] == '}')break;
            j++;
        }
        if (j == str.size())return str;
        string str1 = str.substr(0, i);
        string str2 = str.substr(i + 1, j - i - 1);
        string str3 = str.substr(j + 1);
        str2 = rules.find(str2)->second;
        str = str1 + str2 + str3;
    }
}

void newNFANode() {
    Node node;
    NFA.emplace_back(node);
}

Edge *newEdge(string str, int toNode, int fromNode, vector<Node> &FA) {
    Edge *edge = new Edge;
    edge->toNode = toNode;
    edge->symbol = str;
    if (FA[fromNode].edge == nullptr) {
        FA[fromNode].edge = edge;
    } else {
        Edge *e = FA[fromNode].edge;
        while (e->next != nullptr)
            e = e->next;
        e->next = edge;
    }
    return edge;
}

void processEdge(int node, Edge *edge);

void processStar(string pro, string rest, Edge *edge) {
    newNFANode();
    Edge *new1 = newEdge(rest, edge->toNode, newNode(), NFA);
    edge->toNode = newNode();
    edge->symbol = "";
    Edge *new2 = newEdge(pro, newNode(), newNode(), NFA);
    processEdge(newNode(), new1);
    processEdge(newNode(), new2);
}

void processPlus(string pro, string rest, Edge *edge, int node) {
    newNFANode();
    Edge *new1 = newEdge(rest, edge->toNode, newNode(), NFA);
    edge->toNode = newNode();
    edge->symbol = pro;
    Edge *new2 = newEdge(pro, newNode(), newNode(), NFA);
    processEdge(node, edge);
    processEdge(newNode(), new1);
    processEdge(newNode(), new2);
}

void processQuestion(string pro, string rest, Edge *edge, int node) {
    newNFANode();
    Edge *new1 = newEdge("", newNode(), node, NFA);
    Edge *new2 = newEdge(rest, edge->toNode, newNode(), NFA);
    edge->symbol = pro;
    edge->toNode = newNode();
    processEdge(node, edge);
    processEdge(newNode(), new2);
}

void processOr(string pro, string rest, Edge *edge, int node) {
    Edge *newE = newEdge(pro, edge->toNode, node, NFA);
    edge->symbol = rest;
    processEdge(node, edge);
    processEdge(node, newE);
}

void processPart(string pro, string rest, Edge *edge, int node) {
    newNFANode();
    Edge *newE = newEdge(rest, edge->toNode, newNode(), NFA);
    edge->toNode = newNode();
    edge->symbol = pro;
    processEdge(node, edge);
    processEdge(newNode(), newE);
}

void processEdge(int node, Edge *edge) {
    string str = edge->symbol;
    if (str.size() <= 1)
        return;
    if (str[0] == '[') {
        int index = 1;
        while (str[index] != ']' && index < str.size())
            index++;
        if (str[index] != ']')
            index = 0;
        if (index == str.size() - 1) {
            bool b = true;
            for (int c = 32; c < 128; c++) {
                string st = "";
                st += (char) c;
                if (regex_match(st, regex(str))) {
                    if (b) {
                        edge->symbol = st;
                        b = false;
                    } else
                        newEdge(st, edge->toNode, node, NFA);
                }
            }
        } else {
            string pro = str.substr(0, index + 1);
            string rest = str.substr(index + 2);
            if (str[index + 1] == '*')
                processStar(pro, rest, edge);
            else if (str[index + 1] == '+')
                processPlus(pro, rest, edge, node);
            else if (str[index + 1] == '?')
                processQuestion(pro, rest, edge, node);
            else if (str[index + 1] == '|')
                processOr(pro, rest, edge, node);
            else {
                rest = str.substr(index + 1);
                processPart(pro, rest, edge, node);
            }
        }
    }
    else if (str[0] == '(') {
        int index = 1;
        int count = 1;
        while (index < str.size()) {
            if (str[index] == '(')count++;
            if (str[index] == ')')count--;
            if (count == 0)break;
            index++;
        }
        if (index == str.size() - 1) {
            edge->symbol = str.substr(1, str.size() - 2);
            processEdge(node, edge);
        } else {
            string pro = str.substr(0, index + 1);
            string rest = str.substr(index + 2);
            if (str[index + 1] == '*')
                processStar(pro, rest, edge);
            else if (str[index + 1] == '+')
                processPlus(pro, rest, edge, node);
            else if (str[index + 1] == '?')
                processQuestion(pro, rest, edge, node);
            else if (str[index + 1] == '|')
                processOr(pro, rest, edge, node);
            else {
                rest = str.substr(index + 1);
                processPart(pro, rest, edge, node);
            }
        }
    }
    else if (str[0] == '\"') {
        int index = 1;
        while (str[index] != '\"')
            index++;
        if (index == str.size() - 1) {
            str = str.substr(1, str.size() - 2);
            edge->symbol = str.substr(0, 1);
            if (str.size() != 1) {
                newNFANode();
                Edge *newE = newEdge("\"" + str.substr(1) + "\"", edge->toNode, newNode(), NFA);
                edge->toNode = newNode();
                processEdge(newNode(), newE);
            }
        } else {
            string pro = str.substr(0, index + 1);
            string rest = str.substr(index + 2);
            if (str[index + 1] == '*')
                processStar(pro, rest, edge);
            else if (str[index + 1] == '+')
                processPlus(pro, rest, edge, node);
            else if (str[index + 1] == '?')
                processQuestion(pro, rest, edge, node);
            else if (str[index + 1] == '|')
                processOr(pro, rest, edge, node);
            else {
                rest = str.substr(index + 1);
                processPart(pro, rest, edge, node);
            }
        }
    }
    else if (str[0] == '\\') {
        string pro;
        if (str[1] == '\\')
            pro = "\\";
        else if (str[1] == '\"')
            pro = "\"";
        else if (str[1] == '\'')
            pro = "\'";
        else if (str[1] == 't')
            pro = "\t";
        else if (str[1] == 'v')
            pro = "\v";
        else if (str[1] == 'n')
            pro = "\n";
        else if (str[1] == 'f')
            pro = "\f";
        else if (str[1] == '0')
            pro = "\0";
        else if (str[1] == '?')
            pro = "\?";
        else if (str[1] == 'r')
            pro = "\r";
        else if (str[1] == 'a')
            pro = "\a";
        else if (str[1] == 'b')
            pro = "\b";
        else
            exit(0);
        if (str[2] == '*') {
            string rest = str.substr(3);
            processStar(pro, rest, edge);
        } else if (str[2] == '+') {
            string theRest = str.substr(3);
            processPlus(pro, theRest, edge, node);
        } else if (str[2] == '?') {
            string theRest = str.substr(3);
            processQuestion(pro, theRest, edge, node);
        } else if (str[2] == '|') {
            string theRest = str.substr(3);
            processOr(pro, theRest, edge, node);
        } else {
            string theRest = str.substr(2);
            processPart(pro, theRest, edge, node);
        }
    }
    else {
        string pro = str.substr(0, 1);
        string rest = str.substr(2);
        if (str[1] == '*')
            processStar(pro, rest, edge);
        else if (str[1] == '+')
            processPlus(pro, rest, edge, node);
        else if (str[1] == '?')
            processQuestion(pro, rest, edge, node);
        else if (str[1] == '|')
            processOr(pro, rest, edge, node);
        else {
            rest = str.substr(1);
            processPart(pro, rest, edge, node);
        }
    }
}

void makeNFA() {
    for (Edge *i = NFA[0].edge; i != nullptr; i = i->next)
        processEdge(0, i);
}

void symbolClear() {
    for (auto iter = symbols.begin(); iter != symbols.end(); iter++) {
        iter->second.clear();
    }
}

void newDFANode(set<int> NFANodes) {
    if (DFA.empty()) {
        Node node;
        node.edge = nullptr;
        node.nodes = NFANodes;
        DFA.emplace_back(node);
    } else {
        for (auto &node: DFA) {
            if (node.nodes == NFANodes)return;
        }
        Node node;
        node.edge = nullptr;
        node.nodes = NFANodes;
        DFA.emplace_back(node);
    }
}

int getDFANode(set<int> NFANodes) {
    for (int i = 0; i < DFA.size(); ++i) {
        if (DFA[i].nodes == NFANodes)return i;
    }
    return -1;
}

void findClosure(set<int> &NFANodes) {
    bool changed = true;
    while (changed) {
        changed = false;
        for (int i = 0; i < NFA.size(); ++i) {
            if (NFANodes.find(i) != NFANodes.end()) {
                for (Edge *e = NFA[i].edge; e != nullptr; e = e->next) {
                    if (e->symbol == "") {
                        if (NFANodes.find(e->toNode) == NFANodes.end()) {
                            NFANodes.insert(e->toNode);
                            changed = true;
                        }
                    }
                }
            }
        }
    }
}

void makeDFATable(int DFAnode) {
    map<string, set<int>>::iterator iter;
    for (int i = 0; i < NFA.size(); ++i) {
        if (DFA[DFAnode].nodes.find(i) != DFA[DFAnode].nodes.end()) {
            for (Edge *e = NFA[i].edge; e != nullptr; e = e->next) {
                iter = symbols.find(e->symbol);
                if (iter != symbols.end())
                    iter->second.insert(e->toNode);
            }
        }
    }
    iter = symbols.begin();
    while (iter != symbols.end()) {
        findClosure(iter->second);
        if (!iter->second.empty()) {
            newDFANode(iter->second);
            newEdge(iter->first, getDFANode(iter->second), DFAnode, DFA);
        }
        iter++;
    }
    symbolClear();
}

void NFA2DFA() {
    set<int> firstGroup;
    firstGroup.insert(0);
    findClosure(firstGroup);
    newDFANode(firstGroup);
    for (int i = 0; i < DFA.size(); ++i) {
        makeDFATable(i);
    }
    for (int i = 0; i < NFA.size(); ++i) {
        if (NFA[i].action != "") {
            for (int j = 0; j < DFA.size(); ++j) {
                if (DFA[j].nodes.find(i) != DFA[j].nodes.end() && DFA[j].action == "")
                    DFA[j].action = NFA[i].action;
            }
        }
    }
}

int findGroup(int toNode, vector<set<int>> &groups) {
    for (int i = 0; i < groups.size(); ++i) {
        if (groups[i].find(toNode) != groups[i].end()) {
            return i;
        }
    }
    return -1;
}

void minimizeDFA() {
    vector<set<int>> groups;
    set<int> endGroup, nonGroup;
    for (int i = 0; i < DFA.size(); i++) {
        if (DFA[i].action == "") {
            nonGroup.insert(i);
        } else {
            endGroup.insert(i);
        }
    }
    groups.push_back(nonGroup);
    groups.push_back(endGroup);

    bool changed = true;
    while (changed) {
        changed = false;
        int oldSize = groups.size();
        for (int i = 0; i < oldSize; ++i) {
            set<int> newGroup;
            int first = *groups[i].begin();
            for (int state: groups[i]) {
                if (state == first)continue;
                if (DFA[first].action != "" && DFA[first].action != DFA[state].action) {
                    newGroup.insert(state);
                    groups[i].erase(state);
                    continue;
                }
                for (Edge *e1 = DFA[first].edge; e1 != nullptr; e1 = e1->next) {
                    bool flag = false;
                    for (Edge *e2 = DFA[state].edge; e2 != nullptr; e2 = e2->next) {
                        if (e1->symbol != e2->symbol)continue;
                        flag = findGroup(e1->toNode, groups) == findGroup(e2->toNode, groups);
                    }
                    if (!flag) {
                        newGroup.insert(state);
                        groups[i].erase(state);
                        break;
                    }
                }
            }
            if (!newGroup.empty()) {
                groups.emplace_back(newGroup);
            }
        }
        if (oldSize != groups.size()) {
            changed = true;
        }
    }
    vector<Node> newDFA(groups.size());
    for (int i = 0; i < groups.size(); ++i) {
        newDFA[i].nodes = groups[i];
        if (startSt == -1) {
            if (groups[i].find(0) != groups[i].end()) {
                startSt = i;
            }
        }
    }
    for (int i = 0; i < newDFA.size(); ++i) {
        int j = *newDFA[i].nodes.begin();
        for (Edge *e = DFA[j].edge; e != nullptr; e = e->next) {
            newEdge(e->symbol, findGroup(e->toNode, groups), i, newDFA);
        }
        if (DFA[j].action != "") {
            newDFA[i].action = DFA[j].action;
        }
    }
    DFA = newDFA;
}

void generateCode() {
    out << "using namespace std;\n"
        << "string analysis(char *yytext,int n)\n"
        << "{\n"
        << "\tint state = " << startSt << ";\n"
        << "\tint N = n + 1;\n"
        << "\tfor (int i = 0; i < N; i++)\n"
        << "\t{\n"
        << "\t\tswitch (state)\n"
        << "\t\t{\n";
    for (int i = 0; i < DFA.size(); ++i) {
        out << "\t\t\tcase " << i << ":\n"
            << "\t\t\t{\n";
        if (DFA[i].action != "") {
            out << "\t\t\t\tif(i==N-1)\n"
                << "\t\t\t\t{\n";
            out << "\t\t\t\t\t" << DFA[i].action.substr(1, DFA[i].action.size() - 2) << "\n";
            out << "\t\t\t\t\tbreak;\n"
                << "\t\t\t\t}\n";
        }
        if (DFA[i].edge == nullptr)
            out << "\t\t\t\treturn \"ERROR\";\n";
        else {
            if (DFA[i].edge->symbol == "\a")
                DFA[i].edge->symbol = "\\a";
            if (DFA[i].edge->symbol == "\b")
                DFA[i].edge->symbol = "\\b";
            if (DFA[i].edge->symbol == "\r")
                DFA[i].edge->symbol = "\\r";
            if (DFA[i].edge->symbol == "\?")
                DFA[i].edge->symbol = "\\?";
            if (DFA[i].edge->symbol == "\n")
                DFA[i].edge->symbol = "\\n";
            if (DFA[i].edge->symbol == "\t")
                DFA[i].edge->symbol = "\\t";
            if (DFA[i].edge->symbol == "\v")
                DFA[i].edge->symbol = "\\v";
            if (DFA[i].edge->symbol == "\f")
                DFA[i].edge->symbol = "\\f";
            if (DFA[i].edge->symbol == "\"")
                DFA[i].edge->symbol = "\\\"";
            if (DFA[i].edge->symbol == "\'")
                DFA[i].edge->symbol = "\\\'";
            if (DFA[i].edge->symbol == "\\")
                DFA[i].edge->symbol = "\\\\";
            if (DFA[i].edge->symbol == "\0")
                DFA[i].edge->symbol = "\\0";
            out << "\t\t\t\tif (yytext[i] == '" << DFA[i].edge->symbol[0];
            if (DFA[i].edge->symbol[0] == '\\')
                out << DFA[i].edge->symbol[1];
            out << "')\n"
                << "\t\t\t\t{\n"
                << "\t\t\t\t\tstate=" << DFA[i].edge->toNode << ";\n"
                << "\t\t\t\t\tbreak;\n"
                << "\t\t\t\t}\n";
            for (Edge *e = DFA[i].edge->next; e != nullptr; e = e->next) {
                if (e->symbol == "\a")
                    e->symbol = "\\a";
                if (e->symbol == "\b")
                    e->symbol = "\\b";
                if (e->symbol == "\r")
                    e->symbol = "\\r";
                if (e->symbol == "\?")
                    e->symbol = "\\?";
                if (e->symbol == "\n")
                    e->symbol = "\\n";
                if (e->symbol == "\t")
                    e->symbol = "\\t";
                if (e->symbol == "\f")
                    e->symbol = "\\f";
                if (e->symbol == "\v")
                    e->symbol = "\\v";
                if (e->symbol == "\"")
                    e->symbol = "\\\"";
                if (e->symbol == "\'")
                    e->symbol = "\\\'";
                if (e->symbol == "\\")
                    e->symbol = "\\\\";
                if (e->symbol == "\0")
                    e->symbol = "\\0";
                out << "\t\t\t\telse if (yytext[i] == '" << (char) (int) e->symbol[0];
                if (e->symbol[0] == '\\')
                    out << e->symbol[1];
                out << "')\n"
                    << "\t\t\t\t{\n"
                    << "\t\t\t\t\tstate=" << e->toNode << ";\n"
                    << "\t\t\t\t\tbreak;\n"
                    << "\t\t\t\t}\n";
            }
            out << "\t\t\t\telse\n"
                << "\t\t\t\t{\n"
                << "\t\t\t\t\treturn \"ERROR\";\n"
                << "\t\t\t\t}\n"
                << "\t\t\t\tbreak;\n";
        }
        out << "\t\t\t}\n";
    }
    out << "\t\t}\n"
        << "\t}\n"
        << "}\n";
}

int main() {
    in.open("c99.l", ios::in);
    if (!in.good()) {
        cerr << "error\n" << endl;
        return 0;
    }
    out.open("Lex.h", ios::out);

    string str;
    getline(in, str);
    if (str != "%{") {
        cerr << "error\n";
        return 0;
    }
    while (!in.eof()) {
        getline(in, str);
        if (str == "%}")
            break;
        out << str << '\n';
    }
    string ID, RE;
    while (!in.eof()) {
        in >> ID;
        if (ID == "%%")
            break;
        in >> RE;
        rules.insert(pair<string, string>(ID, RE));
    }
    newNFANode();
    in.get();
    while (!in.eof()) {
        getline(in, RE);
        if (RE == "%%")break;
        int i;
        for (i = RE.size() - 1; i >= 0; i--)
            if (RE[i] == '\t')break;
        int j = i;
        while (RE[j] == ' ' || RE[j] == '\t')j--;
        ID = RE.substr(0, j + 1);
        ID = strRE(ID);
        RE = RE.substr(i + 1);
        newNFANode();
        NFA[newNode()].action = RE;
        newEdge(ID, newNode(), 0, NFA);
    }
    makeNFA();
    set<int> emptySet;
    for (int i = 0; i < NFA.size(); ++i)
        for (Edge *e = NFA[i].edge; e != nullptr; e = e->next)
            if (e->symbol != "")
                symbols.insert(pair<string, set<int>>(e->symbol, emptySet));
    cout << "NFA:" << NFA.size() << endl;
    NFA2DFA();
    cout << "DFA:" << DFA.size() << endl;
    minimizeDFA();
    cout << "minimizeDFA:" << DFA.size() << endl;
    generateCode();
    char c;
    while ((c = in.get()) != -1)
        out.put(c);
    in.close();
    out.close();
    cout << "done!" << endl;
    return 0;
}