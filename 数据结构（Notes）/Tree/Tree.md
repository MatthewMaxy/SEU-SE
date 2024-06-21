# 树
## 1	简介
### 1.1	专门名词：
**树：一个或多个节点的有限集**

> 1. 有一个专门指定的节点，称为`root`。
> 2. 其余的节点被划分为n个不相交的集T1,... ,Tn，其中每个集合都是一个树。T1,... ,Tn被称为根的子树。
> 3. **节点：**代表节点信息和到其他节点的分支。
> 4. **节点的度：**一个节点的子树的数量是它的度。
> 5. 度为0的节点为*叶节点*或*终端节点*，其他节点是*非终端节点*
> 6. 节点X的子树的根是X的子节点，X是其子树的父节点。同一个parent的children都是兄弟姐妹。
> 7. **树的度：**是树中节点的度的最大值。
> 8. **节点的祖先：**是从根到该节点的路径上的所有节点
> 9. **节点的级数：**是通过让根在级别1来定义的，如果一个节点在级别l，那么它的子节点在l+1
> 10. **树的高度（深度）：**是树中任何节点的最大级别。

### 1.2	树的表示：
表示一：
对于度为k的树，我们可以使用一个树节点，该节点有数据字段和k个指向子节点的指针。
| Data | Child 1 | Child 2 | ... | Child k |

表示一的问题：
> 如果T是一个有n个节点的k型树，每个节点的大小固定，如表示1，则 n*k 个节点的n(k-1)+1个子节点指针空间为0  
> **证明如下**  
> 共 n*k 个子节点指针空间  
> 除了根节点每个节点被一个指针指向 共计(n-1)个指针  
> 空（浪费）空间：n*k - (n-1) = n(k-1)+1

表示二：  
左孩子-右兄弟表示法
|        data         |  

|  孩子  |  兄弟  |
<img src="C:\Users\DELL\Desktop\数据结构笔记\Tree\1.jpg" alt="1" style="zoom:50%;" />

## 2	二叉树

### 2.1	定义
二叉树是一组有限的节点，它要么是空的，  
要么由一个根节点和两个不相交的二叉树组成，分别称为左子树和右子树

**二叉树和树之间的区别：**

1. 没有一个树有0个节点，但有一个空的二叉树
2. 二叉树的根总是有两个子树：左树和右子树，尽管它们可能是空的。
3. 在二叉树中，一个节点的非空子树的数量是其度。

### 2.2	二叉树的属性
**1. 二叉树第i级的最大节点数为2^i-1^, i>=1.**

> i = 1 : 根节点 M~0~ = 1  
> 假设 M~i-1~ = 2^i-2^ 对 i > 1  
> 每个节点最多两个子节点，M~i~ = 2*M~i-1~ = 2^i-1^

**2. 深度为k的二叉树的最多节点数为2^k^-1，k>=1**

> 对‘1’等比数列求和得出结果

**3. 对于任何非空二叉树T，如果n~0~为叶节点数，n~2~为度数为2的节点数，则n~0~ = n~2~ + 1**

> 设n~1~为1度的节点数，n为节点总数，我们有：n = n~0~ + n~1~ + n~2~  
> 除了根之外，每个节点都有一个通向它的分支。如果B是分支的数量，那么n = B + 1。  
> 由于B = n~1~ + 2 * n~2~, 我们得到: n = n~1~ + 2 * n~2~ + 1
> 做差得出：n~0~ = n~2~ + 1

**4. 深度为k的满二叉树是指深度为k、有2^k^-1个节点的二叉树，k>=0**  
**5. 一个有n个节点和深度为k的二叉树是完全的，当且仅当它的节点对应于深度为k的满二叉树中从1到n个编号的节点**  
**6. 具有n个节点的完全二叉树的高度为$\lceil log_2(n+1)\rceil$**

### 2.3	二叉树的表示

#### 2.3.1	数组表示法：
节点可以存储在一维数组树中，按顺序编号的节点i存储在`tree[i]`中。  
> **如果一个有n个节点的完全二叉树按顺序表示，那么对于任何索引为i的节点，1<=i<=n，我们有:**  
>
> 1. i 的父节点位于$\lfloor$ i/2$\rfloor$, 如果i=1，为根
> 2. i 的左孩子位于 2i， 若2i>n 则i没有左孩子
> 3. i 的右孩子位于 2i+1， 若2i+1 > n 则i没有右孩子

该数组表示法可以用于所有的二叉树。
> + 对于一个完全二叉树，没有浪费空间  
> + 对于深度为k的倾斜树，在最坏的情况下，它将需要2k-1个空间，其中只有k个将被使用



#### 2.3.2	链接表示法：
```cpp
class Tree;
class TreeNode {
	friend class Tree;
private:
	TreeNode* leftChild;
	TreeNode* rightChild;
	int data;
public:
	TreeNode(int element = 0, TreeNode* left = 0, TreeNode* right = 0)
	{
		data = element;
		leftChild = left;
		rightChild = right;
	}
};
class Tree {
private:
	TreeNode* root;
public:
	Tree(TreeNode*a=0,int e=0,TreeNode* b=0)
	{
		root = new TreeNode( e,a,b);
	}
	bool isEmpty()
	{
		return root == 0;
	}
	TreeNode* LeftSubTree()
	{
		return root->leftChild;
	}
	TreeNode* RightSubTree()
	{
		return root->rightChild;
	}
};
```



## 3	二叉树的遍历和树的迭代器

### 3.1	简介：
> + L-向左移动，V-访问节点，R-向右移动  
> + 如果我们采用从右向左遍历的惯例，那么只剩下3个遍历形式：LVR（中序）、LRV（后序）、VLR（前序）  
> + 这些遍历与产生表达式的中缀、后缀和前缀之间存在一种自然的对应关系  

### 3.2	中序遍历

```cpp
void Inorder(TreeNode* currentNode)
{
    // 作为Tree的private方法
    if (currentNode)
    {
        Inorder(currentNode->leftChild);
        cout << currentNode->data<<"  ";
        Inorder(currentNode->rightChild);
    }
}
void Inorder()
{   // public中调用的启动函数
    cout << "Inorder:";
    Inorder(root);
    cout << endl;
}
```
### 3.3	前序遍历：
```cpp
void Preorder(TreeNode* currentNode)
{
    // 作为Tree的private方法
    if (currentNode)
    {
        cout << currentNode->data << "  ";
        Preorder(currentNode->leftChild);
        Preorder(currentNode->rightChild);
    }
}
void Preorder()
{   // public中调用的启动函数
    cout << "Preorder:";
    Preorder(root);
    cout << endl;
}
```
### 3.4	后序遍历
```cpp
void Postorder(TreeNode* currentNode)
{
    // 作为Tree的private方法
    if (currentNode)
    {
        Postorder(currentNode->leftChild);
        Postorder(currentNode->rightChild);
        cout << currentNode->data << "  ";
    }
}
void Postorder()
{   // public中调用的启动函数
    cout << "Postorder:";
    Postorder(root);
    cout << endl;
}
```
### 3.5	迭代实现中序遍历：
为了使用迭代器实现树遍历，我们首先需要实现一个非递归的树遍历算法：**直接的方法是使用一个堆栈**  
```cpp
void NuInorder()
{
    cout << "NuInorder:";
    stack<TreeNode*> s;
    TreeNode* current = root;
    while (1){
        while (current){
            s.push(current);//a
            current = current->leftChild;
        }
        if (s.empty()){
            cout << endl; return;
        }
        current = s.top();
        cout << current->data << "  ";
        s.pop();
        current = current->rightChild;//b
    }
    cout << endl;
}
```
> **算法分析：**
> + 共有n个节点，因此 a~b 一共进行了n次
> + current==0 的次数：2n~0~+n~1~ = n~0~+n~1~+n~2~ = n+1
> + ==时间复杂度：O(n)==
> + ==所需额外空间：栈的大小 = 树的高度==

**中序迭代器：**

```cpp
class InorderIterator { // a public nested member class of Tree 
public: 
    InorderIterator() {currentNode = root;}; 
    int* Next( );
private:
    Stack<TreeNode*> s;
    TreeNode* currentNode;
};
int* InorderIterator::Next()
{
    while (currentNode) { 
        s.Push(currentNode); 
        currentNode = currentNode -> LeftChild;
    }
    if (s.IsEmpty()) return 0; 
    currentNode=s.Top(); 
    s.Pop(); 
    int& temp = currentNode -> data;
    currentNode = currentNode -> rightChild; 
    return &temp;
}
```

### 3.6	层次遍历：
层次遍历按照满二叉树节点编号中建议的顺序访问节点（1-n）：  
**为了实现层次遍历，我们使用了一个队列。**

```cpp
void LevelOrder()
{
    cout << "LevelOrder:";
    queue<TreeNode*> q;
    TreeNode* current = root;
    while (current){
        cout << current->data << "  ";
        if(current->leftChild)
            q.push(current->leftChild);
        if (current->rightChild)
            q.push(current->rightChild);
        if (q.empty()){
            cout << endl; return;
        }
        current = q.front();
        q.pop();
    }
}
```



## 4	其他的二叉树操作

### 4.1	拷贝构造
```cpp
Tree(const Tree<T>& s) // driver
{ // Copy constructor
    root = Copy(s.root);
}
TreeNode<T>* Copy(TreeNode<T>* origNode) // workhorse 
{
    // tree rooted at origNode
    if (!origNode) return 0;
    return new TreeNode(origNode->data,
                        Copy(origNode->leftChild),
                        Copy(origNode->rightChild));
}
```
### 4.2	检测相等

```cpp
bool operator==(const Tree& t) const
{
    return Equal(root, t.root);
}
bool Equal(TreeNode* a, TreeNode* b)
{
    if ((!a) && (!b)) return true; // both a and b are 0
    return (a && b // ab均非空树
        && (a->data == b->data) //数值相等
        && Equal(a->leftChild, b->leftChild) //left equal
        && Equal(a->rightChild, b->rightChild)); //right equal
}
```


## 5	线索二叉树：

### 5.1	线索：
在二叉树的链接表示法中，有n+1个 0 links，数目比实际使用的指针要多。  
一个利用这些0 links的聪明方法是：将它们替换为指向树中的其他节点的指针，叫做**线索**  

> **线程使用以下规则构造：**
>
> 1. p节点没有右孩子的指针域：指向中序遍历中p的后继节点successor
> 2. p节点没有左孩子的指针域：指向中序遍历中p的前置节点predecessor

为了区分线索和正常指针，需要添加两个布尔字段：`leftThread`, `rightThread`
> 如果`t->leftThread == true`，那么`t->leftChild`为线索，否则是一个指向左子点的指针。`t->rightThread`类似。
```cpp
class ThreadedNode {
    friend class ThreadedTree;
private:
    bool leftThread;
    ThreadedNode *leftChild;
    int data;
    bool rightThread;
    ThreadedNode *rightChild;
};

class ThreadedTree {
public:
    // Tree operations
private:
    ThreadedNode *root; 
};

class ThreadedInorderIterator {
public:
    int* Next();
    ThreadedInorderIterator()
    { currentNode = root; } 
private: 
    ThreadedNode* currentNode; 
};
```
1. 为了解决中序遍历中输出的第一个节点的左线索和最后一个节点的右线索悬挂问题
2. 我们假设所有线索二叉树都有一个header node头节点，让这两个线索指向头节点
3. 原始树是头节点的左子树，头节点的右子树指向头节点本身

<img src="C:\Users\DELL\Desktop\数据结构笔记\Tree\2.jpg" alt="2" style="zoom: 67%;" />

### 5.2	线索二叉树的中序遍历
1. `x->rightThread == true` , 后续节点就是`x->rightThread`
2. `x->rightThread == false` , 后续节点为通过x的右孩子t，一直访问t的左孩子直到`t->leftThread == true`
```cpp
int* ThreadedInorderIterator::Next()
{
    ThreadedNode *temp = currentNode->rightChild;
    if (! currentNode->rightThread)
        while (!temp->leftThread) temp = temp->leftChild;
    currentNode = temp;
    if (currentNode == root) return 0; //no next 
    else return &currentNode->data;
}
void ThreadedTree::Inorder()
{
    ThreadedInorderiterator ti;
    for (int* p = ti.Next(); p; p = ti.Next()) 
        Visit(*p);
}
```
> **算法分析：**
> + 每个节点最多被访问两次：
> + ==时间复杂度：O(n)==
> + ==该遍历没有使用栈==

### 5.3线索二叉树中插入节点
1. `If s->rightThread == true`
<img src="C:\Users\DELL\Desktop\数据结构笔记\Tree\3.jpg" alt="3" style="zoom: 67%;" />
2. `If s->rightThread == false`
<img src="C:\Users\DELL\Desktop\数据结构笔记\Tree\4.jpg" alt="4" style="zoom: 67%;" />
```cpp
void InsertRight(ThreadedNode* s, ThreadedNode* r)
{ // Insert r as the right child of s
    r->rightChild = s->rightChild; // ①
    r->rightThread = s->rightThread; // ① note s!=t.root, 
    r->leftChild = s; // ②
    r->leftThread = true; // ②
    s->rightChild = r; // ③
    s->rightThread = false; // ③
    if (! r->rightThread) { // case (2)
        //InorderSucc(r)用于找到r（即原来s）的后继节点：即leftThread指向s的那个节点
        ThreadedNode *temp = InorderSucc(r); // ④
    temp->leftChild = r; // ④
    }
}
```


## 6	堆

### 6.1	优先队列
**在优先级队列中，要删除的元素是具有最高（或最低）优先级的元素。**  
表示优先级队列的最简单方法是表示无序线性列表：

> **时间复杂度:**
> + ==`IsEmpty()`与`Push()` -- O(1)==
> + ==`Top()` 与 `Pop()` -- O(n)==

### 6.2	大顶堆（最大堆）
#### 6.2.1定义：
1. **最大值（最小值）树**：每个节点中的键值不小于（大于）其子节点（如果有）中的键值的树
2. **最大（最小）堆**：是一个完全二叉树，它也是最大值（最小值）树。
#### 6.2.2	表示：
由于最大堆是一个**完全二叉树**，所以我们使用一个数组堆来表示它。
```cpp
template<class T>
class MaxHeap: public MaxPQ <T>//MaxPQ为优先队列
{
public: 
    MaxHeap (int theCapacity = 10);
    bool IsEmpty () { return heapSize == 0;}
    const T& Top() const;
    void Push(const T&);
    void Pop();
private: 
    T* heap; // 储存数组
    int heapSize; // 堆内元素个数
    int capacity; // 堆大小
};

template <class T>
MaxHeap<T>::MaxHeap (int theCapacity = 10)
{ //constructor
    if (theCapacity < 1) 
        throw "Capacity must be >= 1";
    capacity = theCapacity;
    heapSize = 0; 
    heap = new T[capacity+1]; //heap[0] not used
}
template <class T>
Inline T& MaxHeap<T>::Top()
{
    if (IsEmpty()) 
        throw "The heap is empty";
    return heap[1];
}
```
### 6.3	向最大堆中插入元素
> 我们使用一个冒泡过程来插入一个元素:  
> 从节点`i = heapSize+1`开始，并将它的键与其父节点的键进行比较。  
> 如果它的键较大，将它的父节点放入节点i，一直向上，直到它比父节点小或到达根节点。  

具体实现：
```cpp
template <class T>
void MaxHeap<T>::Push(const T& e) 
{ // insert e into the max heap
    if (heapSize == capacity) { // double the capacity
        ChangeSize1D(heap, capacity, 2*capacity);
        capacity *= 2;
    }
    int currentNode = ++heapSize;
    while (currentNode != 1 && heap[currentNode/2] < e) 
    { // bubble up
        heap[currentNode] = heap[currentNode/2];
        currentNode /=2;
    }
    heap[currentNode] = e;
}
```
> **算法分析：**
> + 一个有n个节点的完整二叉树的高度为$\lceil log_2(n+1)\rceil$, 因此循环迭代O(logn)次
> + 每次循环时间复杂度为O(1)
> + ==总时间复杂度为O(log n)==

### 6.3	从最大堆中删除元素
> 最大元素将从节点1中删除。  
> 我们假设节点(heapSize)中的元素在节点1中，而`heapSize——`。  
> 然后我们把它的键和它较大的孩子的键进行比较。  
> 一直往下去，直到它不小于两个孩子或到达叶子。  

具体实现：
```cpp
template <class T>
void MaxHeap<T>::Pop() 
{ // 删除最大元素 
    if (IsEmpty()) 
        throw "Heap is empty. Cannot delete.";
    heap[1].~T(); // 删除最大元素
    // 将最后一个元素heap[heapSize]移到heap[1]
    T lastE = heap[heapSize--];
    // trickle down
    int currentNode = 1; // root
    int child = 2; // left child of currentNode
    while (child <= heapSize) 
    {
        // 将child设置为两个孩子中较大的那个
        if (child < heapSize && heap[child] < heap[child+1]) 
            child++;
        // can we put lastE in currentNode?
        if (lastE >= heap[child]) break; // yes
            // no
        heap[currentNode] = heap[child]; // move child up
        currentNode = child; child *= 2; // move down a level
    }
    heap[currentNode] = lastE;
}
```
> **算法分析：**
> + 一个有n个节点的完整二叉树的高度为$\lceil log_2(n+1)\rceil$, 因此循环迭代O(logn)次
> + 每次循环时间复杂度为O(1)
> + ==总时间复杂度为O(log n)==



## 7	二叉查找树

**关于键值对——字典：**
字典是一个对的集合，每对都有一个键key和一个关联的元素element。没有两个不同的对具有相同的key
```cpp
template <class K, class E>
struct pair
{
    K first;
    E second;
};
```
### 7.1	定义：
当要搜索或删除任意元素时，堆是不适合的，二叉查找树具有更好的性能。  
**二叉查找树**，如果不是空的，则满足以下属性：
1. 根目录上有一个键
2. 左侧子树中节点的键（如果有的话）要小于根节点的键
3. 右侧子树中节点的键（如果有的话）要大于根节点的键
4. 左右两个子树也是二叉查找树  
(暗示：这些属性意味着这些键必须是不同的。)

### 7.2	二叉查找树的查询：
#### 7.2.1	查询键值为k的元素
查询原理：
+ If k == the key in root, 成功;  
+ If x < the key in root, 查找左子树;  
+ If x > the key in root, 查找右子树

递归方法：
```cpp
template <class K, class E> // Driver
pair<K, E>* BST<K, E>::Get(const K& k)
{ // Search *this for a pair with key k.
    return Get(root, k);
}

template <class K, class E> // Workhorse
pair<K, E>* BST<K, E>::Get(treeNode<pair<K, E>>* p, const K& k)
{
    if (!p) return 0;
    if (k < p->data.first) return Get(p->leftChild, k);
    if (k > p->data.first) return Get(p->rightChild, k); 
    return &p->data;
}
```
迭代方法：
```cpp
template <class K, class E> // Iterative version
pair<K, E>* BST<K, E>::Get(const K& k)
{
    TreeNode<pair<K, E>>* currentNode = root;
    while (currentNode)
        if (k < currentNode->data.first) 
            currentNode = currentNode->leftChild;
        else if (k > currentNode->data.first) 
            currentNode = currentNode->rightChild;
        else return &currentNode->data;
    //no matching pairs
    return 0;
}
```
对一棵高度为h的二叉查找树，==时间复杂度：O(h)==

#### 7.2.2	按排名查询一个二叉查找树
如：找到第r个最小的元素  
新增字段：`leftSize` = 1 + 节点左侧子树中的元素数量
```cpp
template <class K, class E> //search by rank
pair<K, E>* BST<K, E>::RankGet(int r)
{
    TreeNode<pair<K, E>>* currentNode = root;
    while (currentNode)
        if (r < currentNode->leftSize) 
            currentNode = currentNode->leftChild;
        else if (r > currentNode->leftSize) 
        {
            r-=currentNode->leftSize;
            currentNode = currentNode->rightChild;
        }
        else return &currentNode->data;
    return 0;
}
```

### 7.3	二叉查找树的插入
要插入新元素，将执行搜索，如果不成功，则在搜索结束的点插入该元素。  
当字典已经包含具有键k的键值对时，我们只需将与此键关联的元素更新为e。
```cpp
template <class K, class E>
void BST<K, E>::Insert(const pair<K, E>& thePair)
{ // Insert thePair into the binary search tree
    // search for thePair.first, pp is parent of p
    TreeNode<pair<K, E>> *p = root, *pp = 0;
    while (p) {
        pp = p;
        if (thePair.first < p->data.first)
            p=p->leftChild;
        else if (thePair.first > p->data.first) 
            p=p->rightChild;
        else // k存在，更新element
        {p->data.second = thePair.second; return;}
    }
    // perform insertion
    p = new TreeNode<pair<K, E>>(thePair, 0, 0);
    if (root) // tree not empty
        if (thePair.first < pp->data.first) 
            pp->leftChild = p;
        else pp->rightChild = p;
    else root = p;
}
```
==时间复杂度：O(h)==

### 7.4	从二叉查找树中删除元素
1. 删除叶节点：
   > 将其父节点的对应子字段设置为0，并析构该节点。
2. 删除只有一个孩子的节点：
   > 用这个孩子取代该节点的位置，并将该节点析构
3. 删除有两个孩子的节点：
   > 元素被替换为左子树中最大的元素或右子树中最小的元素。  
   > 然后在子树中删除最多有一个子节点的该节点。
4. 注：”该节点“均指用于替换的节点

网上具体实现：
```cpp
TreeNode* successor(TreeNode* root){
    root = root->right;
    while (root&&root->left) {              //如果root->right为空,返回NULL,否则返回他的后继节点
        root = root->left;
    }
    return root;
}

TreeNode* predecessor(TreeNode* root) {     //如果root->left为空...
    root = root->left;
    while (root && root->right) {
        root = root->right;
    }
    return root;
}

TreeNode* deleteNode(TreeNode *root, int key) {
    if (!root)   return NULL;
    else if (root->val > key) deleteNode(root->left, key);
    else if (root->val < key) deleteNode(root->right, key);
    else {
        if (!root->left && !root->right)   delete root;
        else if (!root->left && root->right) {          //左为空,右不为空
            TreeNode* temp;
            temp=successor(root);  //其实就是右孩子
            root->val = temp->val;
            delete temp;
        }
        else if (!root->right && root->left) {          //左不为空,右为空
            TreeNode* temp;
            temp = predecessor(root); //其实就是左孩子
            root->val = temp->val;
            delete temp;
        }
        else if(root->left&&root->right){              //左不为空,由不为空,也是找后继节点
            TreeNode* temp;
            temp = successor(root);
            root->val = temp->val;
            delete temp;
        }
    }
    return root;
}
```


## 8	选择树

### 8.1	简介：
为了合并k个有序序列，称为runs，我们需要从k个可能性中找到最小的，输出它，并用相应runs中的下一个记录替换它，然后找到下一个最小的，以此类推  
最直接的方法是进行k-1的比较。对于k > 2，如果我们利用从上次比较中获得的结果，就可以减少下一次比较的比较数量  
**改进：选择树 包括胜者树和败者树。**
### 8.2	胜者树
赢家树是一个完全二叉树，其中每个节点代表其子节点中较小的值（即赢家）。根表示最小的值。 
> 叶节点：对应各个runs中的第一条记录  
> 非叶节点：包含一个对上一轮的获胜者的索引（即孩子节点中较小的）  

<img src="C:\Users\DELL\Desktop\数据结构笔记\Tree\5.jpg" alt="5" style="zoom:67%;" />

1. 实际上，叶节点可以作为记录`buffer[0]-buffer[k-1]`。树中的`buffer[i]`的节点数为k + i。
2. 现在输出根指向的记录（key== 6），`buffer[3]`为空，run 3中的下一个记录（key==15）被输入到`buffer[3]`。
3. 为了重建树，必须沿着从节点11到根的路径进行比赛。  

  <img src="C:\Users\DELL\Desktop\数据结构笔记\Tree\6.jpg" alt="6" style="zoom:67%;" />
比赛在兄弟节点之间进行，结果（较小的)被放到父节点中。利用2.3.1可以有效地计算兄弟节点和父节点的地址。

> **算法分析：**
> + k个runs, 树高 log~2~k
> + 第一次构建树: O(k)
> + 每次归并（重构树）时间复杂度：O（log~2~k）
> + 归并k个顺串共n条记录的==总时间复杂度为O(nlog~2~k)==

### 8.3	败者树
为了简化重组，我们可以使用败者树。  
**败者树：每个非叶节点保留一个指向失败者的指针的选择树被称为失败者树。**

+ 节点0代表总冠军。

<img src="C:\Users\DELL\Desktop\数据结构笔记\Tree\7.jpg" alt="7" style="zoom: 67%;" />

在输出record[3]（node 11，key 6）之后，通过从run3读取下一个记录并沿着从节点11到节点1的路径进行比赛
<img src="C:\Users\DELL\Desktop\数据结构笔记\Tree\8.jpg" alt="8" style="zoom:67%;" />



## 9	森林

**定义：森林是一组n（>=0)个不相交的树**

### 9.1	将森林转换为二叉树
定义：如果T~1~，...，T~n~ 是一个森林，则该森林对应的二叉树，用B（T~1~，...，T~n~）表示，
1. 如果n=0，则为空；
2. 根等于根（T~1~）；
3. 左子树等于B（T~11~，...，T~1m~），其中T~11~，...，T~1m~为根（T~1~）的子树；
4. 右子树B（T~2~，...，T~n~）（按照左孩子右兄弟的思路，所有根节点都是兄弟）。

### 9.2	森林的遍历
_注意：此处每个树不一定为二叉树，在进行遍历时需按照左兄弟右孩子转化为二叉树遍历_  
森林先序和中序遍历结果与森林对应二叉树遍历结果相同，层次和后序不一定相同  

**设T为森林F对应的二叉树。前序遍历森林F的节点定义为：**

1. 如果F是空的，则返回。
2. 访问F的第一棵树的根。
3. 按先序遍历第一棵树的子树
4. 按森林先序遍历F中的剩余树木。

**设T为森林F对应的二叉树。中序遍历森林F的节点定义为：**
1. 如果F是空的，则返回。
2. 中序遍历森林中第一棵树的子树。
3. 访问F的第一棵树的根。
4. 依次遍历森林中F的剩余树木。 

**设T为森林F对应的二叉树。后序遍历森林F的节点定义为：**
1. 如果F为空，则返回。
2. 按森林后序遍历第一棵树的子树。
3. 在森林顺序历F的剩余树。
4. 访问F的第一棵树的根。

**设T为森林F对应的二叉树。层次遍历森林F的节点定义为：**
1. 如果F为空，则返回。
2. 分别对每棵树层次遍历



## 10	离散集合表示

### 10.1	简介：
+ 集合中的元素是数字0、1、2、...、n-1（可以被认为是索引）。
+ 对于任意两个组，S~i~，S~j~，i!=j，S~i~∩ S~j~ =null.
+ 操作:
  + 合并S~i~∪S~j~。
  + Find(i)，找到包含i的集合。
+ 这些节点从子节点 linked to 父节点。
### 10.2	操作：
#### 10.2.1	算法设计
 **要做S~1~∪S~2~，只需将其中一棵树作为另一棵树的子树：**

要从集合的名称中找到集合的根，我们可以保留一个指向具有每个集合名的根的指针。

  <img src="C:\Users\DELL\Desktop\数据结构笔记\Tree\9.jpg" alt="9" style="zoom:67%;" />

这里我们忽略了实际的集合名，只是通过它们的根来识别集合。
由于集合元素的编号为0,1，...，n-1，所以我们使用一个数组`parent[n]`来表示树的节点。`parent[i]`包含节点i（以及元素i)的父指针。

+ 根节点：-1
+ 上图对应：-1, 4, -1, 2, -1, 2, 0, 0, 0, 4、

#### 10.2.2	算法实现
```cpp
class Sets { 
public:
   // Set operations
   // ...
private:
   int *parent;
   int n; // number of set elements
};
Sets::Sets (int numberOfElements)
{
    if (numberOfElements < 2) 
        throw "Must have at least 2 elements.";
    n = numberOfElements;
    parent = new int[n];
    fill(parent, parent + n, -1);
}
void Sets::SimpleUnion (int i, int j)
{ // Replace the disjoint sets with roots i and j, i!=j with their union
    parent[i] = j; 
}
int Sets::SimpleFind (int i)
{ //find the root of the tree containing element i.
    while (parent[i] >= 0) 
        i = parent[i];
    return i;
}
```
#### 10.2.3	算法分析：
Union(0,1), Union(1,2), …, Union(n-2,n-1), Find(0), Find(1), …, Find(n-1)
   1. ==n-1 unions 时间复杂度： O(n)==
   2. ==n finds 时间复杂度： O(n^2^)==
   3. 我们可以通过避免创建退化树来提高性能。

#### 10.2.4	算法改进：
**定义[ `Union(i，j)`的加权规则 ]：**    
如果根为i的树中的节点数小于根为j的树中的节点数，则使j为i的父节点；否则使i为j的父节点。  
我们需要一个`count`字段来知道每个树中有多少个节点，**并且它可以在根的父字段中作为一个负数进行维护**。

```cpp
void Sets::WeightedUnion (int i, int j)
{ // Union sets with roots i and j, i!=j, using the weighting rule
    // parent[i] = - count[i] and parent[j] = - count[j]
    //作为根节点，parent[]里存当前节点数，其他节点的parent[]指向父节点
    int temp = parent[i] + parent[j];
    if (parent[i] > parent[j]) { // i has fewer nodes
        parent[i] = j;
        parent[j] = temp; 
    }
    else { // j has fewer nodes or
        // i and j have the same number of nodes
        parent[j] = i; 
        parent[i] = temp; 
    }
}
```
#### 10.2.5	改进算法分析：
1. ==合并操作时间复杂度：O(1)==
2. ==find操作时间复杂度：O(logn)==
> 引理：假设我们从一片树林开始，每个树都有一个节点。设T是一个有m个节点的树是一系列加权并集的结果。
> T的高度不超过$\lfloor log_2m\rfloor$+1。(证明：中文书p 221)
3. 如果要处理一个u-1次合并和f次find运算的混合序列，则==时间复杂度为O(u+f*logu)==
4. 初始化包含n棵树的森林，==时间复杂度为O(n)==

#### 10.2.6	折叠法则：
```cpp
int Sets::CollapsingFind (int i)
{ // Find the root of tree containing element i. Use the 
// collapsing rule to collapse all nodes from i to the root.
   for (int r = i; parent[r] >= 0;r = parent[r]); // find the  root 
   while ( i != r ) {
       int s = parent[i];
       parent[i] = r;
       i = s; 
   }
   return r;
}
```
### 10.3	等价类的应用
等价类 <=> 不相交集

<img src="C:\Users\DELL\Desktop\数据结构笔记\Tree\10.jpg" alt="10" style="zoom: 67%;" />

> 例子：书 p 223



## 11	二叉树计数

n个节点可以对应多少种不同的二叉树？
结论：不同的二叉树的数量等于从具有先序排列的二叉树1,2，...，n，中得到的不同的中序排列的数量。

> 设b~n~为有n个节点的不同二叉树的个数 - (先序排列为(1、2、...，n))
> 一个根和两个子树：一个有i个节点；另一个有n-i-1个节点，0<=i<n。
> 因此

$$b_n = \sum_{i=0}^{n-1}b_ib_{n-i-1} ， n\geq1， b_0=1$$

