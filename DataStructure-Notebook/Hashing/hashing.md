# 散列
## 1 简介
哈希函数用于将一个大空间映射到一个小空间
## 2 静态哈希
### 2.1 哈希表
在静态哈希表中，字典对存储在一个称为哈希表的表ht中
+ ht被划分为b个桶ht[0:b-1]，并在顺序内存中进行维护
+ 每个桶b容纳s个槽，每个槽容纳一个对，通常是s = 1
+ 键为k的一个对的地址由哈希函数h确定，h (k)是k的哈希或主地址，h (k)属于{0,1，...，b-1}

>  T —— 可能的键的总数    
>  n —— 哈希表中对的数量  
>  哈希表的键密度是n/T。哈希表的加载密度（或因子）为$\alpha = n/(sb)$  
>  通常：n<<T, b<<T

+ 如果h（k1）= h（k2），则称2个键k1和k2是关于h的同义词
+ 当新加入对的主桶不是空的时，就会发生碰撞。
+ 当一个新对hashed into满桶中时，会发生溢出。
+ 当s = 1时，碰撞和溢出同时发生

### 2.2 哈希函数
如果k是从键空间中随机选择的一个键，那么我们希望h (k)=i对于所有桶i的概率为1/b。  
一个满足此性质的哈希函数是一个**均匀的哈希函数**
#### 2.2.1 Division
**h(k)=k%D** b=D  
D的选择是至关重要的。
> 1. 如果D=为2^r^，那么h (k)只依赖于k的最后一r位.
> 2. 如果D可被2整除，那么奇数键将映射到奇数桶，偶数键将映射到偶数桶
> 3. 在实践中，选择D没有小于20的素因子就足够了。

#### 2.2.2 Mid-Square
h (k)是通过使用k^2^中间适当的位数来获得桶地址。
如果使用r位，b = 2^r^。

#### 2.2.3 Folding
K被划分成几个部分，除了最后一个部分外，
其余的部分都是相同长度的。然后将这些分区加在一起，以获得k的哈希地址。
> k=12320324111220  
> shift folding:  
>   + h(k)=123+203+241+112+20=699
> folding at the boundaries:  
>   + h(x)=123+302+241+211+20=897

#### 2.2.4 Digit Analysis
在静态文件中很有用:
1. 每个k都用一些基数r来解释为一个数。
2. 检查每个k的数字，具有最大偏态分布的数字被删除 —— 直到剩下的数字数量小到足以给出一个地址。
3. 例如学生学号（71121101 - 71121144）

#### 2.2.5 Converting Keys to integers 将密钥转换为整数
只考虑将字符串转换为非负的16位整数：
```c++
unsigned int StringToInt(string s)
{   // Convert s into a nonnegative int that depends on all
    // characters in s
    int length = (int) s.length(); // number of characters in s
    unsigned int answer = 0;
    if (length%2 == 1) { // length is odd
        answer = s.at(length-1);
        length--;
    }
    // length is now even
    for (int i=0; i<length; i+=2)
    { // do 2 characters at a time
        answer += s.at(i);
        answer += ((int) s.at(i+1)) << 8;
    }
    return answer;
}
```
### 2.3 溢出处理
#### 2.3.1 开放寻址
假定：
+ 哈希表ht是一个数组，并存储指向字典对的指针。
+ s = 1
```c++
template<class K, class E> 
typedef pair<K, E> * pairPtr;
class LinearProbing {
public:
    LinearProbing (int size) {
        if (size < 3) 
            throw "the size must be >= 3.";
        b = size;
        ht = new pairPtr[b];
        fill(ht, ht+b, 0); // initialize the hash table to empty.
    };
private:
    int b;
    pairPtr *ht;
};
```
线性探测(线性开放寻址)。
1. 计算h (k)
2. 检查 ht[h(k)], ht[(h(k)+1) % b], …,ht[(h(k)+j)%b] 直到：
   1. ht[(h(k)+j)%b]有一个键为k —— 找到
   2. ht[(h(x)+j)%b]为空 —— 不存在
   3. 返回到起始位置h(k) —— 表已满，k不在表内
```c++
template <class K, class E>
pair<K, E>* LinearProbing<K, E>::Get(const K& k)
{ 
    int i = h(k); // home bucket
    int j;
    for (j=i; ht[j] && ht[j]->first != k;) {
        j = (j+1) % b; // treat the table as circular
        if (j == i)
            return 0; // back to the start point
    } 
    if (ht[j]->first==k) 
        return ht[j];
    return 0;
}
```
算法分析：
==平均查找次数：$(2-\alpha)/(2-2\alpha)$==
其中，$\alpha$为加载密度。

#### 2.3.2 链式寻址
```c++
template <class K, class E>
typedef ChianNode<pair<K, E>>* ChainNodePtr;
class Chaining { // assume Chining is friend of ChainNode
public:
    Chaining(int size) { 
        if (size <3) 
            throw "the size must be >= 3.";
        b = size;
        ht = new ChainNodePtr[b];
        fill(ht, ht+b, 0); // initialize the hash table to empty.
    };
private:
    int b; 
    ChainNodePtr *ht;
};
```
链式寻址：
```c++
template <class K, class E>
Pair<K, E>* Chaining<K, E>::Get(const K& k)
{ // Search the chained hash table ht for k. If a pair with key k 
// is found return a pointer to this pair, else return 0.
    int i = h(k); // home bucket
    // search the chain starting at ht[i]
    for (ChainNode<pair<K, E>>* current=ht[i]; current;current=current->link)
        if (current->data.first==k) 
            return &current->data;
    return 0;
}
```
算法分析：
==平均查找次数：$1+\alpha /2$==
其中，$\alpha$为加载密度。

**链式寻址在溢出处理方面优于线性寻址，而除法则优于其他哈希函数**



