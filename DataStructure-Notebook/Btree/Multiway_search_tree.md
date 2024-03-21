# 多路查找树
## 1 m-Way查找树
### 1.1 定义
m路查找树，或为空，或满足以下属性：
1. 根最多有m个子树，其结构如下：
    > n, A~0~, (E~1~, A~1~), (E~2~, A~2~), …, (E~n~, A~n~)

   其中，A~i~，0<=i<n<m，是指向子树的指针，而E~i~，1<=i<=n < m，是元素。每个E~i~都有一个关键字E~i~.K
2. E~i~.K < E~i+1~.K, 1<=i<n.
3. E~0~.K = 负无穷， E~n+1~.K = 正无穷. 子树A~i~中所有关键字值大于E~i~.K,小于E~i+1~.K
4. 子树A~i~，0<=i<=n，也是m查找树。

节点总数：(度数m高度为h)
$\Sigma_{0<=i<=h-1}m^i=(m^h-1)/(m-1)$

对于给定数量的元素n，要达到接近最佳m路搜索树的性能，搜索树必须保持平衡
### 1.2 查找
```c++
E0.K = -MAXKEY; 
for ( *p = root; p; p = Ai)
{ 
   Let node p have the format n, A0, (E1, A1), ..., (En, An);
   E（n+1）.K = MAXKEY;
   Determine i such that Ei.K<=x<Ei+1.K;
   if (x == Ei.K) 
       return Ei;
}
   // x is not in the tree
   return NULL;
```
## 2 B树
1. 一个特殊的平衡m路搜索树是b树。要定义它，需要在我们有空指针的地方添加一个外部（或失败）节点。
2. 查找到达外部顶点的情况：待查找元素不在树中
### 2.1 定义
一个m阶的B树是一个空树，或满足以下属性的m路查找树：
1. 该根节点至少有两个孩子
2. 除根节点和外部节点外，所有节点都至少有$\lceil m/2 \rceil$子节点
3. 所有的外部节点都在同一级别上

> 1. 当m = 3时，所有内部节点的度都为2或3,3阶的b树称为2-3树。
> 2. 2阶的B树是满二叉树。
> 3. 对于任意n>=0和m>2，有一个包含n个元素m阶B树

### 2.2 B树中的元素数量
设T是一个m阶的B树，其中所有的外部节点都在l+1级，并设N是T中的键数。
1. N<=m^l^-1
2. N>=2$\lceil m/2 \rceil^{l-1}-1$

### 2.3 B树的插入
#### 2.3.1 算法思想与实现
m阶B树插入算法的基本思想：
1. 执行搜索以确定要插入新键的叶节点p
2. 如果插入导致p有m个键，则节点p将被分割。否则，新的p将被写入磁盘，插入也就完成了
> + 原节点：m, A~0~, (E~1~, A~1~), …, (E~m~, A~m~)
> + 分裂：
>   + p: $\lceil m/2\rceil -1, A_0,(E_1,A_1),...,(E_{\lceil m/2\rceil-1}, A_{\lceil m/2\rceil-1})$
>   + q: $m_{\lceil m/2\rceil},A_{\lceil m/2\rceil},(E_{\lceil m/2\rceil+1},A_{\lceil m/2\rceil+1},...,(E_m,A_m))$

3. 插入到父节点中可能需要我们将父节点拆分，而拆分过程可以一直传播到根节点
4. 当根拆分时，将创建一个具有单个键的新根，
5. 请注意，当m=2时，$\lceil m/2\rceil$-1=0，这意味着上述方法不适用于m=2
```c++
// Insert element x into a disk resident B-tree.
Search the B-tree for an element E with key x.K;
if such an E is found, replace E with x and return;
    else let p be the leaf into which x is to be inserted;
q = NULL;
for (e=x; p;p=p->parent()) // the parent of root is NULL 
{ // (e, q) is to be inserted into p
   Insert (e, q) into appropriate position in node p;
   Let the resulting node have the form:
            n, A0, (E1, A1), ..., (En, An);
   if (n<=m-1) { // the resulting node is not too big
       write node p to disk; return;
   }
    //node p has to be split
    e=E(大于m/2最大整数);
    write nodes p and q to the disk; 
} 
// a new root is to be created
Create a new node r with format: 1, root, (e, q);
// when the tree is empty, root=p=0
root=r;
write root to disk;
```
#### 2.3.2 示例

#### <img src="C:\Users\DELL\Desktop\Btree\sss.jpg" alt="sss" style="zoom: 67%;" />

#### 2.3.3 算法分析
1. 总磁盘访问次数最多为：h(向下过程的一次操作)+2（h-1）(非根分列）+3(根节点分裂)=3h+1
2. 对于较大的m，平均磁盘访问次数h+1（证明：p420）

### 2.4 B树的删除
#### 2.4.1 算法分析与实现、
从一个叶节点中删除的4种情况：
1. p是根，如果p还有至少1个键，p被写入磁盘，完成。否则，删除后的b树为空。在其余的情况下，p不是根

2. 删除后，p至少有$\lceil m/2 \rceil -1$个keys。修改后的p被写入磁盘，删除完成。

3. p有$\lceil m/2 \rceil -2$个keys，而它最近的兄弟姐妹，q，至少有$\lceil m/2 \rceil $个key。旋转：

   <img src="C:\Users\DELL\Desktop\Btree\4C962FD95B76FF1AF21A7F3F5D9F86F5.jpg" alt="4C962FD95B76FF1AF21A7F3F5D9F86F5" style="zoom: 25%;" />

4. p有$\lceil m/2 \rceil -2$个key，y有$\lceil m/2 \rceil -1$个key。组合：

   <img src="C:\Users\DELL\Desktop\Btree\0CC42C3C9C9DBAA5AD6E2F911241A42E.jpg" alt="0CC42C3C9C9DBAA5AD6E2F911241A42E" style="zoom:25%;" />

**代码见p423**

#### 2.4.2 示例：

#### <img src="C:\Users\DELL\Desktop\Btree\sxsa.jpg" alt="sxsa" style="zoom:67%;" />

#### 2.4.3 算法分析：
1. h+1磁盘访问以查找要删除键的节点，并将删除转换为叶中的节点
2. 在最坏的情况下，在根到叶路径上的最后一个h-2节点上都发生了合并，并且在该路径上的第2个节点发生了旋转。
3. 组合需要：h-2磁盘访问兄弟，h-2写入。旋转需要1兄弟，3写出。
4. 总次数：3h+1

## 3 B+树见书427
