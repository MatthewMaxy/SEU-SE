# Array
## 1	基本信息：
1. 不一定使用连续内存实现
2. 索引可以以任何方式进行编码
3. 基本操作
   1. 找到该列表的长度n
   2. 从左到右（或从右到左）阅读该列表
   3. 检索第i个元素
   4. 将一个新值存储到第i个位置
   5. 在位置i处插入一个新的元素
   6. 删除位置i处的元素，

## 2	多项式：

### 2.1	表示方法：
**表示一：**

```cpp
private: 
    int degree; // degree <= MaxDegree
    float coef[MaxDegree+1];
```
当`a.degree` << `MaxDegree` 时，表示1在使用计算机内存方面是相当浪费的。要解决此问题，将定义可变大小的数据成员。  

**表示二：**

```cpp
private: 
    int degree;
    float *coef;
Polynomial::Polynomial(int d)
{ 
    int degree = d;
    coef = new float[degree+1];
}
```
表示2仍然不可取。例如，x^1000^ + 1使999个`coef`条目为零。所以，我们只存储非零项：  

**表示三：**

```cpp
class Polynomial; // forward declaration
struct Term
{
	float coef;
	int exp;
};
class Polynomial { 
public:
    //默认构造函数
    Polynomial()
	{
		termArray = new Term[1];
		capacity = 1;
		terms = 0;
		cout << "Create!";
	}
    //指定非零项个数
    Polynomial( int terms)
	{
		this->capacity = terms;
		this->terms = terms;
		termArray = new Term[capacity];
		for (int i = 0; i < terms; i++)
			cin >> termArray[i].coef >> termArray[i].exp;
		cout << "Create!"<<endl;
	}
private:
    Term *termArray;
    int capacity; // size of termArray
    int terms; // number of nonzero terms
}
```
对于系数为0项数较多时具有优越性。_但较少时，花费空间为表示二的两倍_

### 2.2	加法：

默认两个多项式按降幂排列
#### 2.2.1	加法原理：
```cpp
Polynomial Add(Polynomial b)
{
    Polynomial c;
    int aPos = 0, bPos = 0;
    while (aPos < terms && bPos < b.terms) {
        // 如果两个指数相等直接将系数相加
        if (termArray[aPos].exp == b.termArray[bPos].exp) {
            float t = termArray[aPos].coef + b.termArray[bPos].coef;
            if (t)
                c.newTerm(t, termArray[aPos].exp);
            aPos++;
            bPos++;
        }
        else if (termArray[aPos].exp < b.termArray[bPos].exp)
        {
            c.newTerm(b.termArray[bPos].coef, b.termArray[bPos].exp);
            bPos++;
        }
        else
        {
            c.newTerm(termArray[aPos].coef, termArray[aPos].exp);
            aPos++;
        }
    }
    // 将剩下的a或b全部放入c中
    for(;aPos<terms;aPos++)
        c.newTerm(termArray[aPos].coef, termArray[aPos].exp);
    for(;bPos<b.terms;bPos++)
        c.newTerm(b.termArray[bPos].coef, b.termArray[bPos].exp);
    return c;
}
```
其中`newTerm`函数用于创建新的Term并放入他的`termArray`中
```cpp
void newTerm(float coef, int exp)
{
    // 如果数组空间已满，将扩大空间2倍
    if (terms == capacity)
    {
        capacity *= 2;
        Term* tem = new Term[capacity];
        copy(termArray, termArray + capacity, tem);
        delete[]termArray;
        termArray = tem;
    }
    termArray[terms].coef = coef;
    termArray[terms].exp = exp;
    terms++;
}
```
#### 2.2.2	性能分析：
1. 设m，n分别是a和b中的非零项的个数。
2. 在同时循环的每次迭代中，`aPos`或`bPos`或两者都增加了1，因此这个循环的迭代次数<=（m+n-1）。
3. 如果忽略double array时间，每次迭代时间为`O(1)`
4. 结束遍历剩余a-`O(m)`，剩余b-`O(n)`
5. 总的时间复杂度为`O(m+n)`
> **分析数组加倍**  
>
> 1. 加倍的时间与新数组的大小相比是线性的
> 2. 最初，c容量为1
> 3. 假设当Add终止时，c.容量为2^k^
> 4. 他花在所有数组加倍上的总时间是`O(2^k^)`
> 5. 由于`c.terms`> 2^k-1^ 和 m + n >= `c.terms`，数组加倍的总时间是` O(c.terms)=O(m+n)`

综上，即便考虑数组加倍时间 **==Add的时间复杂度依然是O(m+n)==**

## 3	稀疏矩阵:
### 3.1	简介：
1. m*m的矩阵称为方阵
2. 一个有许多零项的矩阵被称为稀疏矩阵
### 3.2	表示方法：
```cpp
struct MatrixTerm
{
	int row, col, value;
};
class SparseMatrix {
private:
	MatrixTerm* smArray;
	int rows, cols, terms, capacity;
public:
	SparseMatrix()
	{
		smArray = new MatrixTerm[1];
		capacity = 1;
		terms = 0;
		cols = rows = 0;
	}
	SparseMatrix(int c, int r, int t)
	{
		smArray = new MatrixTerm[t];
		terms = t;
		cols = c; rows = r;
		capacity = t;
		for (int i = 0; i < t; i++)
			cin >> smArray[i].row >> smArray[i].col >> smArray[i].value;
		cout << "create!" << endl;
	}
}
```
### 3.3	矩阵的转置:
#### 3.3.1	一般矩阵Transpose
```cpp
for (int j = 0; j < cols; j++)
   for (int i = 0;i < rows;i++) 
      B[j][i] = A[i][j];
```
​	==时间复杂度O(cols$\times$rows)==
#### 3.3.2	稀疏矩阵的转置
```cpp
 SparseMatrix Transpose()
 {
     SparseMatrix b(rows, cols, terms,true);
     if (terms > 0)//非空
     {
         int currentB = 0;
         for(int i=0;i<cols;i++)//依次遍历列为0，1……，转置后他们对应行0，1……顺序
             for(int j=0;j<terms;j++)
                 if (smArray[j].col == i)
                 {
                     b.smArray[currentB].col = smArray[j].row;
                     b.smArray[currentB].row = i;
                     b.smArray[currentB++].value = smArray[j].value;
                 }
     }
     return b;
 }
```
> **复杂度分析：**
> 1. 最外层循环：`cols`次
> 2. 内层if判断：`terms`次
> 3. ==总时间复杂度：O(cols$\times$terms)==
> 4. ==额外空间：O(1)==

改进：
1. 获取每列中的元素的数量 = 转置后B中每行元素的个数
2. 获取其每行在B中的起始点
3. 将当前矩阵的元素逐个移动到B中的正确位置。

#### 3.3.3	快速转置
```cpp
 SparseMatrix FastTranspose()
 {
     SparseMatrix b(rows, cols, terms, true);
     if (terms > 0)
     {
         int* rowSize = new int[cols];//转置后各行元素个数
         int* rowStart = new int[cols];//转置后各行开始储存的位置的下标
         fill(rowSize, rowSize + cols, 0);// 4
         for (int i = 0; i < terms; i++)// 1
             rowSize[smArray[i].col]++;
         rowStart[0] = 0;
         for (int i = 1; i < cols; i++)//  2
             rowStart[i] = rowStart[i - 1] + rowSize[i - 1];
         for (int i = 0; i < terms; i++)// 3
         {
             int j = rowStart[smArray[i].col];
             b.smArray[j].col = smArray[i].row;
             b.smArray[j].row = smArray[i].col;
             b.smArray[j].value = smArray[i].value;
             rowStart[smArray[i].col]++;
         }
         delete[]rowSize;
         delete[]rowStart;
     }
     return b;
 }
```
> **复杂度分析：**
> 1. 循环1处：O(terms)
> 2. 循环2处：O(cols)
> 3. 循环3处：O(terms)
> 4. 4处: O(cols)   其余行：O(1)
> 5. ==总时间复杂度：O(cols+terms)==
> 6. ==额外空间：O(2*cols)==

## 4	字符串:
### 4.1	简单查找
```cpp
int Find(string str,string pat)
{
	if (pat.length() == 0)
		return -1;
	for (int i = 0; i <= str.length() - pat.length(); i++)
	{
		if (str[i] == pat[0])
		{
			int j = 0;
			for (; j < pat.length() && str[i + j] == pat[j]; j++);
			if (j == pat.length())
				return i;
		}
	}
	return -1;
}
```
==时间复杂度O(LengthP$\times$LengthS)==

### 4.2	KMP算法
#### 4.2.1	失败函数
```cpp
void F(int next[],string str)
{
	int j = 0, k = -1;
	next[0] = -1;
	while (j < str.length() )
	{
		if (k == -1 || str[j] == str[k])// 1
		{
			next[j] = k;
			j++;
			k++;
		}
		else
			k = next[k];
	}
}
```
> **复杂度分析：**
> 1. 循环主体最多执行`LengthP-1`次
> 1. 时间复杂度为O(LengthP)

#### 4.2.2	KMP主体
```cpp
int FastFind(string str, string pat)
{
	int *n = new int[pat.length()];
	F(n, pat);
	int PosP = 0, PosS = 0;
	while (PosP < pat.length() && PosS < str.length())
	{
		if (pat[PosP] == str[PosS])
		{
			PosP++; PosS++;// 1
		}
		else
			if (PosP == 0)
				PosS++; // 2
			else
				PosP = n[PosP - 1] + 1; // 3
	}
	if (PosP < pat.length()||pat.length()==0)
		return -1;
	else
		return PosS - pat.length();
}
```
> **复杂度分析：**
> 1. 1,2两处`PosS`只增未减，最多执行`LengthS`次
> 2. 3处最多执行`LengthS`次
> 3. 总时间复杂度为O(LengthS)

#### 4.2.3	总时间复杂度
​	综合两者考虑，当失败函数事先不知道时，可以首先计算失败函数，然后使用FastFind进行模式匹配，总时间复杂度为==O(LengthP + LengthS)==