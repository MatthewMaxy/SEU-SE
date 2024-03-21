# 链表
## 1	单链接的列表和链
使用数组和顺序映射来表示简单的数据结构具有以下特性：
> 1. 数据对象的连续节点以固定的距离间隔存储
> 2. 这使得访问中的任意节点时间复杂度：O (1)

顺序映射的缺点：
> 它使得插入和删除任意元素时，时间耗费昂贵。  

解决方案——具有链接功能的表示法：
> + 与每个节点关联的是指向下一个项目的点（链接）。
> + 上述结构称为单链表或链，其中每个节点都有一个指针字段  
>   + 列表元素以任意的顺序存储在内存中  
>   + 显式信息（称为链接）用于从一个元素转到下一个元素

## 2	链表表示：
实现：
```c++
class Chain;
class ChainNode {
	friend class Chain;
private:
	int data;
	ChainNode* link;
public:
	ChainNode(int element = 0, ChainNode* next = 0)
	{
		data = element;
		link = next;
	}
};
class Chain {
private:
	ChainNode* first;
public:
	Chain(){}
};
```
在某个节点后插入50：
```c++
void Chain::Insert50 (ChainNode *x) 
{
    if (first)
        // insert after x
        x.link = new ChainNode(50, x.link); 
    else
        // insert into empty chain
        first = new ChainNode(50);
}
```
## 3	模板类链表
### 3.1	使用模板实现链链
```c++
template <class T> class Chain; // forward declaration
template <class T>
class ChainNode {
    friend class Chain<T>;
public:
    ChainNode(T element, ChainNode *next = 0)
    { data = element; link = next;}
private:
    T data;
    ChainNode *link;
};
template <class T>
class Chain {
public: 
    Chain() { first=0;}; // constructor initializing first to 0
    // Chain manipulation operations
    // ...
private:
    ChainNode<T> *first; 
}
```
### 3.2	链表迭代器
> 容器类是表示包含或存储大量数据对象的数据结构的类。  
> 迭代器是一个用于逐个访问容器类的元素的对象。  

考虑可能在容器类C上执行的以下操作，其所有元素都是整数：
+ 输出C中的所有整数
+ 得到C中所有整数的和、最大值、最小值、平均值、中值
+ 从C中获取整数x，使f (x)最大。

_通常，一个迭代器被实现为容器类的一个嵌套类。_
#### 3.2.1	链表的正向迭代器：
```c++
class ChainIterator {
private:
	ChainNode* current;
public:
	ChainIterator(ChainNode* startNode = 0)
	    {current = startNode;}
	int& operator *() const { return current->data; }
	int* operator->() const { return &current->data; }
	ChainIterator& operator++()//++a
	{
		current = current->link;
		return *this;
	}
	ChainIterator& operator++(int)//a++
	{
		ChainIterator old = *this;
		current = current->link;
		return old;
	}
	bool operator != (const ChainIterator right) const
	    {return current != right.current;}
	bool operator == (const ChainIterator right) const
	    {return current == right.current;	}
	void printIt()
	    {cout << current->data << " ";}
};
```
除此以外，在Chain中添加函数：
```c++
	ChainIterator begin() 
        { return ChainIterator(first); }
	ChainIterator end() 
        { return ChainIterator(0); }
```
输出一个链表所有元素的两种实现方法：
```c++
// 直接输出所有元素
void Print()
{
    ChainNode* tem = first;
    while(tem!=0){
        cout << tem->data << "  ";
        tem = tem->link;
    }
    cout << endl;
}
// 利用迭代器输出
void Print2()
{
    ChainIterator ai = this->begin();
    while (ai != this->end())
    {
        ai.printIt();
        ai++;
    }
    cout << endl;
}
```
### 3.3	链表操作：
1. InsertBack:
```c++
void InsertBack(int element)
{
    if (first){
        last->link = new ChainNode(element);
        last = last->link;
    }
    else
        first = last = new ChainNode(element);
}
```
==时间复杂度：O(1)==
2. Concatenate:
```c++
void Concatenate(Chain& b)
{
    if (first){
        last->link=b.first;
        last = b.last;
    }
    else{
        first = b.first;
        last = b.last;
    }
    b.first = b.last = 0;
}
```
==时间复杂度：O(1)==
3. Reverse:
```c++
void Reverse()
{
    ChainNode* cur = first, * pre = 0;
    while (cur){
        ChainNode* r = pre;
        pre = cur;
        cur = cur->link;
        pre->link = r;
    }
    first = pre;
}
```
假设链表有m$\geq$1个节点，==时间复杂度：O(m)==
## 4	循环链表
通过修改一个链，使最后一个节点的链接字段指向第一个节点，就可以得到一个循环列表。
1. 在前端插入元素
```c++
template <class T>
void CircularList<T>::InsertFront(const T& e) 
{ // insert the element e at the “front” of the circular list *this,
    // where last points to the last node in the list.
    ChainNode<T>* newNode = new ChainNode<T>(e);
    if (last) { // nonempty list
        newNode->link =last->link; 
        last->link = newNode; 
    } 
    else { 
        last = newNode; 
        newNode->link = newNode;
    }
}
```
==时间复杂度:O(1)==
2. 在最后插入元素
```c++
    //在InsertFront代码后添加：
    last = newNode;
```
==时间复杂度:O(1)==
## 5	可用空间列表
+ 链和循环列表的析构函数的时间与链或列表的长度是线性的  
+ 如果我们保持我们自己的自由节点链，它可能会被简化为O(1)。
+ 可用空间列表由av指向。
+ av是CircularList<T>的ChaiNode<T>*类型的静态成员，最初是av = 0
+ 只有当av列表为空时，我们才需要使用new
### 5.1	基于av的新建节点（不使用new）
```c++
template <class T>
ChainNode<T>* CircularList<T>::GetNode( ) 
{ //Provide a node for use.
    ChainNode<T>* x;
    if (av) {
        x = av; 
        av = av->link;
    }
    else 
        x = new ChainNode<T>; 
    return x;
}
```
### 5.2	基于av的删除节点（不使用delete）
```c++
template <class T>
void CircularList<T>::RetNode(ChainNode<T>*& x) 
{ // Free the node pointed to by x.
    x->link = av;
    av = x;
    x = 0;
}
```
### 5.3	删除一个循环链表
```c++
template <class T>
void CircularList<T>::~CircularList() 
{ // Delete the circular list.
    if (last) {
        ChainNode <T> * first = last->link;
        last->link = av; 
        av = first; 
        last = 0;
    }
}
```
==时间复杂度:O(1)==
## 6	链表栈和队列
### 6.1	链表栈
```c++
class LStack {
private:
	ChainNode* top;
public:
	LStack(){
		top = 0;
	}
	void Pop() {
		if (top != 0){
			ChainNode* tem = top;
			top = top->link;
			delete tem;
		}
		else
			cout << "error";
	}
	void Push(int element){
		top = new ChainNode(element,top);
	}
};
```
### 6.21链表队列
```c++
class LQueue {
private:
	ChainNode* front, * rear;
public:
	LQueue(){
		front = rear = 0;
	}
	void Push(int element)	{
		if (front ==0)
			front=rear = new ChainNode(element);
        else{
			rear->link = new ChainNode(element);
			rear = rear->link;
		}
	}
	void Pop()
	{
		if (front == 0)
			cout << "error";
		else{
			ChainNode* tem = front;
			front = front->link;
			delete tem;
		}
	}
};
```
## 7	链表多项式
### 7.1	多项式表示
```c++
struct Term
{ // All members of Term are public by default.
    int coef;
    int exp;
    Term Set(int c, int e){ 
        coef = c; exp = e; 
        return *this;
    };
};
class Polynomial {
public:
    // public functions defined here
private:
    Chain<Term> poly;
};
```
### 7.2	多项式加法
```c++
 Polynomial Polynomial::operaor+ (const Polynomial& b) const
{ // *this (a) and b are added and the sum returned
    Term temp;
    Chain<Term>::ChainIterator ai = poly.begin(),
                                bi = b.poly.begin();
    Polynomial c;
    while (ai != poly.end() && bi != b.poly.end()) { //not null
        if (ai->exp == bi->exp) {
            int sum = ai->coef + bi->coef; 
            if (sum) 
                c.poly.InsertBack(temp.Set(sum, bi->exp));
            ai++; bi++; // to next term
        } 
        else if (ai->exp < bi->exp){
            c.poly.InsertBack(temp.Set(bi->coef, bi->exp));
            bi++; // next term of b
        } 
        else {
            c.poly.InsertBack(temp.Set(ai->coef, ai->exp));
            ai++; // next term of a
        }
    } 
    while (ai != poly.end()) { // copy rest of a
        c.poly.InsertBack(temp.Set(ai->coef, ai->exp));
        ai++;
    }
    while (bi != b.poly.end()) { // copy rest of b
        c.poly.InsertBack(temp.Set(bi->coef, bi->exp));
        bi++;
    }
    return c;
}
```
设a有m项,b有n项,==时间复杂度：O(m+n)==
### 7.3	循环链表表示多项式
多项式加法：  
头部节点的exp被设置为-1，以将a或b的其余部分推向结果。
```c++
Polynomial Polynomial::operaor+(const Polynomial& b) const
{ // *this (a) and b are added and the sum returned
    Term temp;
    CircularListWithHead<Term>::Iterator ai = poly.begin(),
                                            bi = b.poly.begin(); 
    Polynomial c; //assume constructor sets headexp = -1
    while (1) { 
        if (ai->exp == bi->exp) {
            if (ai->exp == -1) 
                return c;
            int sum = ai->coef + bi->coef; 
            if (sum) 
                c.poly.InsertBack(temp.Set(sum, ai->exp);
            ai++; bi++; // to next term
        }
        else if (ai->exp < bi->exp) {
            c.poly.InsertBack(temp.Set(bi->coef, bi->exp));
            bi++; // next term of b
        } 
        else {
            c.poly.InsertBack(temp.Set(ai->coef, ai->exp));
            ai++; // next term of a 
        }
    } 
}
```
## 8	稀疏矩阵
**稀疏矩阵表示**
1. 每个头节点:都有一个bool head和三个附加字段：down,right和next。
   + 头节点的总数是max{cols,rows}。
2. 每个元素节点:都有一个bool head和五个附加字段：row、col、value、down和right。
3. H是头节点列表的头节点，使用元素节点的结构。

<img src="C:\Users\DELL\Desktop\数据结构笔记\Linked_Lists\1.jpg" alt="1" style="zoom: 67%;" />

## 9	双向链表
### 9.1	概念
1. 双向链表中的一个节点至少有3个字段：data, left和right，这使得它很容易向两个方向移动。
2. 一个双链表可能是循环的。

<img src="C:\Users\DELL\Desktop\数据结构笔记\Linked_Lists\2.jpg" alt="2" style="zoom:50%;" />

### 9.2	代码实现：
数据结构实现：
```c++
class DblList;
class DblListNode {
    friend class DblList;
private:
    int data; 
    DblListNode *left, *right; 
};
class DblList {
public:
    // List manipulation operations
    // ...
private:
    DblListNode *first; // points to head node
};
```
删除实现：
```c++
void DblList::Delete(DblListNode *x)
{
    if(x == first) 
        throw "Deletion of head node not permitted";
    else{
        x->left->right = x->right; 
        x->right->left = x->left;
        delete x;
    }
}
```
插入实现：
```c++
void DblList::Insert(DblListNode *p, DblListNode *x)
{ // insert node p to the right of node x
    p->left = x; 
    p->right = x->right; 
    x->right->left = p; 
    x->right = p; 
}
```
## 10	广义表
广义列表是一个线性列表(a~0~,...,a~n-1~)，其中元素a~i~(0<=i<=n-1)是一个原子或一个列表。
> + A = (): 空表
> + B = (a, (b, c)): a list of length two; 第一个元素：a  第二个元素： 表 (b, c).
> + C = (B, B, ()): a list of length three 第一、二个元素：表 B 第三个元素：空表
> + D = (a, D): 递归表：D=(a,(a,(a, ...)))

```c++
enum Triple {var, ptr, no};
class PolyNode
{
    PolyNode *next;
    int exp;
    Triple trio;
    union {
        char vble;
        PolyNode *down;
        int coef;
    };
};
```

![3](C:\Users\DELL\Desktop\数据结构笔记\Linked_Lists\3.jpg)
