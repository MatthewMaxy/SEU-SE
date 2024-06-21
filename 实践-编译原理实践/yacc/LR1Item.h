#pragma once
#ifndef LR1ITEM_H
#define LR1ITEM_H
#include<unordered_set>
using namespace std;

class LR1Item // LR1项目类
{
public:
	LR1Item(int np, int pos); // 构造函数
	void move();
	int getCurrentSymbol() const;//返回下一个要移进的符号，为空则返回-1
	int getNextSymbol() const;
	int getProducerID() const;
	int getCurrentPosition() const;
	const set<int>& getPredictiveSym() const;
	bool isEnd() const;//是否右部已经全部移进
	bool nextIsEnd() const;//右部是否到达最后一个符号，求闭包运算时用
	void setPredictiveSym(const set<int>& predictiveSymbol1);
	bool checkEqual(const LR1Item& it1) const;//检查两个项目是否相等
	bool checkLike(const LR1Item& it1) const;//检查两个项目是否只有预测符不等
	friend bool operator <(const LR1Item& it1, const LR1Item& it2);
private:
	int producerID; // 产生式编号
	int currentPos; // 该项目目前移进位置，等价于点的位置
	set<int> predictiveSymbol; // 预测符
};

#endif