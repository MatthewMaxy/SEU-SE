# 排序

## 1 原因
在数据结构中，数据元素之间的顺序是一个重要的关系，排序成为最常见的计算任务
+ 列表 —— 一个记录的集合，每个记录都有一个或多个字段。
+ 键 ——— 用来区分不同记录的字段。

排序的两个重要用途：
1. 二分查找O(logn)包含n个记录的排序列表，比O(n)未排序列表要好得多。
2. 比较两个n个和m个记录的列表，它们包含的数据基本相同，但来自不同的来源。如果排序，我们可以用O(n+m)来做，否则我们需要O(nm)时间。

> 稳定排序(满足以下）：
>   + $K_{\sigma s(i)} \leq K_{\sigma s(i+1)}$
>   + 如果i<j且K~i~=K~j~,那么在排序结果中R~i~在R~j~前

排序分类：
+ 内部排序：插入排序，快速排序，归并排序，堆排序，基数排序
+ 外部排序：m-路合并生成

![1](C:\Users\DELL\Desktop\sorting\1.jpg)

## 2 插入排序
### 2.1 算法实现
**思想：将e插入到i条记录的排序序列中，这样大小为i+1的结果序列也被排序。**  
1. 使用a[0]来简化循环测试。
```c++
void Insert(const int& e, int* a, int i)
{   //insert e into the ordered sequence a[1:i] such that the
    // resulting sequence a[1:i+1] is also ordered. The array a
    // must have space for at least i+2 elements
	a[0] = e;
	while (e < a[i])//i为第一个比较的位置
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = e;
}
```
2. 从有序序列a[1]开始，然后依次在序列中插入a[2]，a[3]，...，a[n]
```c++
void InsertSort(int* a, const int n)
{
	for (int j = 2; j <= n; j++)//第一次应该是2和1比较
	{
		int tem = a[j];
		Insert(tem, a, j - 1);//初始比较位置即为前一位
	}
}
```
### 2.2 算法分析
**最坏情况：**  
1. 最坏的情况下，插入(e，a，i)在插入之前进行i + 1次比较 —— O(i)  
2. ==最坏时间复杂度为：O(n^2^)==

**平均情况**  
1. k条无序状态记录，计算时间为O((k+1)n)=O(kn)
2. ==平均时间复杂度为：O(n^2^)==

**插入排序是稳定的**  

**额外空间**
1. 只需要一条记录的附加空间
2. ==空间复杂度：O(1)==

**算法改进**
1. 折半插入排序。（比较的次数减少）
2. 链表插入排序。（记录移动的次数变为零）

## 3 快速排序
在我们将要研究的排序方法中，快速排序具有最好的平均表现
### 3.1 算法实现
思想：给定一个列表（R~left~，R~left+1~，...，R~right~），从R~i~（left<=i<=right）中选择一个轴记录，
把轴放在正确的点（轴），这样在定位之后，
+ R~j~<=R~s(pivot)~ for j < s(i) 
+ R~j~>=R~s(pivot)~ for j > s(i)

原始列表可分为2个子列表：(R~left~, …, R~s(pivot)-1)~ and (R~s(pivot)+1~, …, R~right~)  
接着对他们分别排序
```c++
//以a[left]为pivot
void FastSorting(int* a, int left, int right)
{
	if (left < right){
		int i = left, j = right+1,
			pivot = a[left];
		do {
			do i++; while (a[i] < pivot);
			do j--; while (a[j] > pivot);
			if (i < j)
				swap(a[i], a[j]);
		} while (i < j);
		swap(a[left], a[j]); 
		FastSorting(a, left, j - 1);
		FastSorting(a, j+1, right);
	}
}
```
### 3.2 算法分析
**最坏情况：**
1. 每次分成的两个子表大小为n-1和1（原本就有序）
2. ==时间复杂度：O(n^2^)==

**最好情况：**
1. 每次分成的两个子表大小相等，大约为n/2
2. ==时间复杂度：O(nlogn)==

**平均情况：**
1. 证明：中文书p282
2. ==时间复杂度：O(nlogn)==

**额外空间**
1. 若平均分割，递归深度logn，所需栈空间O(logn)
2. 最坏情况递归深度n，所需栈空间O(n)，通过首先处理较小子表的方法可以逐渐减少所需栈空间，这样所需栈空间不超过O(logn)
3. ==空间复杂度：O(logn)==

**快速排序是不稳定的**

**算法改进**
1. 取前中后3个关键字的中值作为枢轴
2. pivot = median{K~left~,K~(left+right)/2~,K~right~}

## 4 归并排序
### 4.1 合并两个有序列表
#### 4.1.1 算法实现：
```c++
void merge(int* initList,int* mergedList, const int l, const int m, const int n)
{
    //  列表1[l：m]和列表2[m+1:n]被合并成列表[l:n]
	int i1 = l, i2 = m + 1, iResult = l;
	for (;i1 <= m && i2 <= n;iResult++)
		if (initList[i1] <= initList[i2]){
			mergedList[iResult] = initList[i1];
			i1++;
		}
		else{
			mergedList[iResult] = initList[i2];
			i2++;
		}
	copy(initList + i1, initList + m + 1, mergedList + iResult);
	copy(initList + i2, initList + n + 1, mergedList + iResult);
}
```
#### 4.1.2 算法分析：
1. 在for循环的每次迭代中，无论是i1++还是i2++，for循环最多迭代n-l+1次。
2. 最多可复制n-l+1记录。总时间复杂度：O(n-l+1)
3. 如果每个记录的大小为s，则总时间为O(s(n - l+1))
4. 当s > 1，使用链表，只需要n-l+1链接的空间，合并时间变成O(n-l+1)，并独立于s。

### 4.2 迭代归并
#### 4.2.1 算法实现：
1. 在一开始，将输入分解为n个已排序的子列表，每个子列表的大小为1。
2. 这些列表被成对合并得到n/2个列表，每个列表的长度为2（如果n为奇数，则有一个列表的长度为1）。
3. 然后将这些n/2个列表成对合并，以此类推，直到只有一个列表。

<img src="C:\Users\DELL\Desktop\sorting\2.jpg" alt="2" style="zoom:67%;" />

```c++
void Merge(int* initList, int* resultList, const int n,const int s)
{
	int i = 0;
	for (;i <= n - 2*s + 1;i+=2*s)
		merge(initList, resultList, i, i + s - 1, i + 2 * s - 1);
    // 剩下长度小于2s的链表
	if ((i + s - 1 )< n)
		merge(initList, resultList, i, i + s - 1, n);
	else
		copy(initList + i, initList + n + 1, resultList + i);
}
```
现在可以通过重复调用合并通过来完成排序。
```c++
void MergeSorting(int* initList,int n)
{
	int* tem = new int[n+1];
	for (int i = 1;i < n;i *= 2){
		Merge(initList, tem, n,i);
		i *= 2;
		Merge(tem, initList, n, i);//最后一次可能仅复制回a
	}
	delete[]tem;
}
```
#### 4.2.2 算法分析：
1. 一共会进行$\lceil log_2n \rceil$次归并
2. 每次Merge时间为O(n)
3. ==总时间复杂度为O(nlogn)==
4. ==总空间复杂度为O(n)==
5. **归并排序是稳定的**

## 5 堆排序
堆排序需要O(1)个额外的空间，并且也有其最差的平均计算时间O(nlogn),使用了最大堆.
1. 为了有效地创建和重新创建一个堆，我们需要一个函数Adjust，它从一个二叉树开始，其左右子树都是最大堆，并将整个二叉树调整为最大堆
```c++
void adjust(int* a, const int root, const int n)
{
	int e = a[root];
	int i = 2 * root;
	for (;i <= n;i *= 2){
		if (i<n && a[i] < a[i + 1])
			i++;    //a[i]为更大的孩子
		if (e >= a[i])
			break;
		a[i / 2] = a[i];
	}
	a[i/2] = e;
}
```
算法分析：
+ 如果树的深度为d，则最多在d次内执行for循环。因此，计算时间为O(d)

2. 进行n-1传递。在每次传递中，交换堆中的第一个（最大）和最后一个记录，输出最大并减少堆的大小（-1）并Adjust堆
```c++
void heapSorting(int* a, const int n)
{
	for (int i = n / 2;i >= 1;i--)
		adjust(a, i, n);
	for (int i = n - 1;i >= 1;i--){
		swap(a[1], a[i + 1]);
		adjust(a, 1, i);
	}
}
```
算法分析：
1. 证明略，heapSorting时间复杂度为O(n)
2. 树高最多$\lceil log_2n \rceil$
3. 因此，==总时间复杂度为O(nlogn)==
4. ==空间复杂度：O(1)==
5. **堆排序是不稳定的**

## 6 多关键词排序——基数排序
**LSD（最小数字）排序：**
一般来说，对于一个基数-r排序，需要r个箱子。

1. 记录R1、R2、...，Rn及其键的用r进行分解，每个键的位数d在[0,r-1]范围内。
2. 记录中带有一个链接字段。
3. 对于每个箱子i，0<i< r。
```c++
template <class T>
int RadixSort(T*a, const int d, const int r, const int n)
{   // Sort a[1:n] using a d-digit radix-r sort. digit(e, i, r) returns
    // the ith radix-r digit (from the left, the first is the 0th digit) 
    // of e’s key. Each digit is in the range of [0, r).
    int e[r],f[r]; // queue end and front pointers
    // create initial chain of records starting at first
    int first=1;
    for (int i=1;i<n;i++)
        link[i]=i+1; // linked into a chain
    link[n]=0;
    for (i=d-1;i>=0;i--){ // sort on digit i
        fill(f, f+r, 0); // initialize bins to empty queues
    for (int current=first; current; current=link[current]) 
    { // put records into queues
        int k=digit(a[current], i, r);
        if (f[k]==0) 
            f[k]=current;
        else link[e[k]]=current;
            e[k]=current; 
    }
    for (int j=0; !f[j]; j++); // find first nonempty queue
    first=f[j];
    int last=e[j];
    for (int k=j+1; k<r; k++){ // concatenate remaining queues
        if (f[k]) {
            link[last]=f[k]; last=e[k];
        }
        link[last]=0;
    }
    return first;
}
```
**算法分析：**

1. 单趟时间复杂度：O(n+r)
2. d个关键词，共需d趟
3. ==总时间复杂度O(d(n+r))==

例子：对3位数进行基数排序(书p294)

## 7 外部排序
### 7.1 k-路归并
1. 对于具有m次运行的2-路合并，总共需要$\lceil log_2n \rceil$次传递数据（不包括用于生成运行的通道）
2. 一般来说，m运行时的k路合并最多需要$\lceil log_km \rceil$传递数据。因此，可以减少I/O时间。

**时间复杂度：**

1. 对于较大的k（比如k>=6），要从k个可能性中选择最小的一个，我们可以使用带有k个叶子的失败者树。
2. 每个级别的归并树所需的总时间是O（nlog2k）。
3. 归并树深log~k~m
4. ==总时间复杂度为：O(n log~2~k log~2~m) = O(nlog~2~m)==

### 7.2 生成run
> r[i], 0<=i<k --- 败者树中的k条记录  
> l[i], 1<=i<k --- 败者树中节点i处的败者  
> l[0], q --- 败者树的冠军  
> rn[i], 0<=i<k --- r[i]属于的run的序号  
> rc --- 当前run的序号  
> rq --- r[q]的run的序号  
> rmax --- run的序号最大值  
> lastRec --- 最后一个输出记录  

```c++
template <class T>
void Runs (T*r){
    r = new T[k];
    int *rn=new int[k], *l=new int[k];
    for (int i = 0; i < k; i++ ) { //input records
        ReadRecord(r[i]); rn[i] = 1;
    }
    InitializeLoserTree();
    int q = l[0]; // tournament winner
    int rq=1, rc=1, rmax=1; T LastRec; 
    while (1) { // output runs
        if (rq != rc) { // end of run
            output end of run marker; 
        if (rq > rmax) 
            break; //meet virtual record, to line 35
        else rc = rq;
    }
    WriteRecord(r[q]); LastRec=r[q];
    //input new record into tree
    if (end of input) 
        rn[q]=rmax+1; //generate virtual record
    else {
        ReadRecord(r[q]);
        if (r[q]<LastRec) //new record belongs to next run
            rn[q] = rmax = rq+1;
        else 
            rn[q] = rc;
    }
    rq=rn[q]; 
    // reconstruct the tree of losers
    for (int t=(k+q)/2;t; t/=2) // t is initialized to be parent of q
        if (rn[l[t]]<rq || rn[l[t]]==rq && r[l[t]]<r[q])
        { // t is the winner
            swap(q, l[t]);
            rq = rn[q];
        }
    } // end of while
    delete [ ] r; delete [ ] rn; delete [ ] l; 
}
```
**算法分析：**

1. 当对输入列表已经排序，只生成一个run。平均run大小为2k。
2. 为n个记录列表生成所有run所需的时间为==O(nlogk)==

### 7.3 运行的最佳合并
当run的大小不同时，完成传递所有run的合并策略不会产生最小的运行时间  
1. 给定n次运行，在合并树中有n个外部节点。
2. 设编号为1到n的外部节点，q~i~是run（外部节点）i表示的大小
3. d~i~是从根到外部节点i的距离，1<=i<=n。
4. 合并总时间为：$E_w=\Sigma_{1<=i<=n}q_id_i$
5. E~w~被称为加权的外部路径长度。
#### 哈夫曼树
1. 从n个单节点树的最小堆开始，这是一个外部节点，其权重是qi的权重之一
2. 从最小堆中重复提取2个最小权重a和b，将它们合并成一个二叉树c，并将c插入到最小堆中
3. 在n-1轮之后，最小堆将只剩下一个二叉树，这是我们所需要的
```c++
template <class T>
void Huffman(MinHeap<TreeNode<T> *> heap, int n)
{ // heap is initially a min heap of n single-node binary trees.
    for (int i=0; i<n-1; i++) {//loop n-1 times to combine n nodes
        TreeNode<T> *a=heap.Top(); 
        heap.Pop();
        TreeNode<T> *b=heap.Top(); 
        heap.Pop();
        TreeNode<T> *c=new TreeNode(a->data + b->data, a, b); 
        // refer section 5.2.3.2
        heap.Push(c);
    }
}
```
算法分析：
1. 主循环，n-1次
2. 每次调用Top为O (1)调用Pop和Push为O（log n）
3. ==总时间复杂度O(nlogn)==