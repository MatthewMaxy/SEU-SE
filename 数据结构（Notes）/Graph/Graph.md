# 图
## 1 图：抽象数据类型
### 1.1 简介
图形已广泛应用于广泛的应用。
### 1.2 定义
> graph G = (V, E)  
> vertices V(G) != null  
> edges E(G)
> 无向图: (u, v) = (v, u)
> 有向图: <u, v>, u---尾, v---头,<u, v> ！=<v, u>

限制：
+ （v，v）或<v，v>是不合法的，这样的边被称为自边。
+ 不允许多次出现同一边。如果允许的话，我们会得到一个多重图。

> 名称定义：
> 1. 任意n顶点，无向图的最大边数是n（n-1）/2，有向图的边数是n（n-1）
> 2. 一个具有n（n-1）/2条边的n顶点无向图认为是完备的
> 3. 如果存在（u，v），我们说u和v是**相邻的**，并且边（u，v）是在顶点u和v上发生的。
> 4. 如果<u，v>是一条有向边，vertex u is adjacent to v, and v is adjacent from u.
> 5. G的一个子图是一个图G'，使V(G')属于V(G)和E(G)属于E(G)。
> 6. 路径的长度是这条路上的边数
> 7. 简单路径是指除了第一个和最后一个顶点之外的所有顶点都是不同的路径
> 8. 循环是一个第一个和最后一个顶点相同的简单路径。
> 9. 在无向图G中，u和v是连接的当且仅当G中有一条路径从u到v（也从v到u）
> 10. 一个连通分量是一个最大连通子图。
> 11. 树是一个连通的无环图。
> 12. 一个有向图G是强连通的，当且仅当对于V（G）中的每一对不同的u和v，存在一个从u到v以及从v到u的有向路径。
> 13. 强连通分量是一个强连通的极大子图
> 14. 顶点的度是与之相关的边的数量。
> 15. 对于有向图G, 入度：作为头的边和；出度：作为尾的边和
> 16. $e=(\Sigma_{i=0}^{n-1}d_i)/2$

### 1.3 图表示
三种最常用的表示方式：
1. 邻接矩阵
2. 邻接列表
3. 邻接多重表
#### 1.3.1 邻接矩阵
```c++
class graph {
private:
	int v;//vertex
	int e;//edge
	int** matrix;
	void createM(int v)
	{
		matrix = new int*[v];
		for (int i = 0; i < v; i++)
			matrix[i] = new int[v];
		for (int i = 0; i < v; i++)
			for (int j = 0; j < v; j++)
				if (j == i)
					matrix[i][j] = 1;
				else
					matrix[i][j] = 0;
	}
public:
	graph(int ver)
	{
			v = ver;
			e = 0;
			createM(ver);
	}
	void InsertEdge(int u,int v)
	{
		if(matrix[v][u])
		{
			cout << "edge exist!"; return;
		}
		matrix[u][v] = matrix[v][u] = 1;
        e++;
	}
	void DeleteEdge(int u, int v)
	{
		if (!matrix[u][v])
		{
			cout << "edge not exist!"; return;
		}
		matrix[u][v] = matrix[v][u] = 0;
		e--;
	}
	void PrintM()
	{
		for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < v; j++)
				cout << matrix[i][j] << " ";
			cout << endl;
		}
		cout << endl;
	}
};
```
==确定所有边数时间复杂度:O(n^2^)==

#### 1.3.2 邻接列表
1. 将邻接矩阵的行表示为n个链。
2. 链i中的节点表示与i相邻的顶点。
3. 数组adjLists用于O (1)时间访问任何链。
```c++
class graph {
private:
	int v;//vertex
	int e;//edge
	Chain* adjust;
	bool* visited;
public:
	graph(int ver)
	{
			v = ver;
			e = 0;
			createM(ver);
			adjust = new Chain[v];
	}
	void InsertEdge(int u,int v)
	{
		if(matrix[v][u])
		{
			cout << "edge exist!"; return;
		}
		matrix[u][v] = matrix[v][u] = 1;
		adjust[u].InsertBack(v);
		adjust[v].InsertBack(u);
		e++;
	}
	void DeleteEdge(int u, int v)
	{
		if (!matrix[u][v])
		{
			cout << "edge not exist!"; return;
		}
		matrix[u][v] = matrix[v][u] = 0;
		adjust[u].Delete(v);
		adjust[v].Delete(u);
		e--;
	}
	void PrintL()
	{
		for (int i = 0;i < v;i++)
		{
			cout << i << ":  ";
			adjust[i].Print();
			cout << endl;
		}
	}
};
```
==确定边总数时间复杂度:O(e+n)==
我们使用顺序列表，邻接列表可以被打包到一个整数数组node[n+2e+1]。  

**逆邻接列表：**  
每个顶点有一个列表，若存在边<1,2>,则2节点指向1  

将邻接列表和逆邻接列表的节点结合起来，形成一个正交的列表节点：
|  tail  |  head  |  column link  |  row link  | 

0-->1 1-->0  1-->2

<img src="C:\Users\DELL\Desktop\数据结构笔记\Graph\1.jpg" alt="1" style="zoom:67%;" />

#### 1.3.3 邻接多重表 

在一个无向图的邻接列表中，每个（u，v）由2个条目表示，在某些情况下，必须能够确定一个特定边的第二个条目，并将该边标记为已被检查过  
所以我们需要多节点：每条边都只有一个节点，但它在两个列表中
| m | vertex1 | vertex2 | path1 | path2|
注意，可以从路径1或路径2中标记一条边。m是布尔标记字段：是否已经检查了该边。

```c++
class MGraph;
class MGraphEdge {
    friend MGraph;
private:
    bool m;
    int vertex1, vertex2;
    MGraphEdge *path1, *path2;
};
typedef MGraphEdge* EdgePtr ;
class MGraph {
public:
    MGraph(const int); 
private:
    EdgePtr *adjMultiLists;
    int n;
    int e;
};
MGraph::MGraph(const int vertices) : e(0)
{
    if (vertices < 1) 
        throw "Number of vertices must be > 0";
    n = vertices;
    adjMultiLists = new EdgePtr[n];
    fill(adjMultiLists, adjMultiLists + n, 0);
}
```
插入一条边：
```c++
void MGraph::InsertEdge(int u, int v)
{
    MGraphEdge *p = new MGraphEdge;
    p.m = false; p.vertex1 = u; p.vertex2 = v;
    p.path1 = adjMultiLists[u]; 
    p.path2 = adjMultiLists[v];
    adjMultiLists[u] = adjMultiLists[v] = p;
}
```
4顶点完全图

<img src="C:\Users\DELL\Desktop\数据结构笔记\Graph\4.jpg" alt="4" style="zoom:67%;" />

#### 1.3.4 加权边

边可能有权重。
+ 在邻接矩阵的情况下，`A[i][j]`可能会保留这些信息。
+ 在邻接列表的情况下，我们需要在列表节点中添加一个权重字段。
## 2 基本图运算
给定G =（V，E）和V（G）中的v，我们希望访问G中可以从v中到达的所有顶点。  
在下面的方法中，我们假设这些图是无向的，尽管它们也适用于有向的方法。  
使用数组visited[n]

```c++
void visit(int k)
{
        visited[k] = true;
        cout << k << "is visited!" << endl;
}
```
### 2.1 深度优先搜索
```c++
void DFS()
{//public启动器
    cout << "DFS:" << endl;
    visited = new bool[v];
    fill(visited, visited + v, false);
    DFS(0);
    delete[] visited;
}
void DFS(int k)
{//private
    if (!visited[k])
        visit(k);
    for (int i = 0;i < v;i++)
        if (matrix[k][i]&&!visited[i])
            DFS(i);  
}
```
> DFS分析：
> 1. 初始化visited[n]:O(n)
> 2. 若用==邻接表时间复杂度：O(n+e)==
> 3. 若用==邻接矩阵时间复杂度：O(n^2^)==

### 2.2 广度优先搜索

```c++
void BFS()
{
    cout << "BFS:" << endl;
    visited = new bool[v];
    fill(visited, visited + v, false);
    queue<int> q;
    q.push(0);
    visited[0] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v << "is visited!" << endl;
        ChainNode* tem = adjust[v].first;
        while (tem != 0)
        {
            if (!visited[tem->data])
            {
                q.push(tem->data);
                visited[tem->data] = true;
            }
            tem = tem->link;
        }
    }
}
```
> BFS分析：
> 1. 若用==邻接表时间复杂度：O(n+e)==
> 2. 若用==邻接矩阵时间复杂度：O(n^2^)==

###  2.3 连通分支
为了获得无向图的所有连通分量，我们可以对未访问的v重复调用DFS（v）或BFS（v）。
```c++
void Component()
{
    visited = new bool[v];
    fill(visited, visited + v, false);
    for (int i = 0;i < v;i++)
        if (!visited[i]){
            cout << "------------Component"<<i+1<<"------------" << endl;
            DFS(i);
        }
    delete[]visited;
}
```
> 连通分支分析：
> 1. 若用==邻接表时间复杂度：O(n+e)==
> 2. 若用==邻接矩阵时间复杂度：O(n^2^)==

### 2.4 生成树
任何一个只由G中的边组成并包含G中的所有顶点的树都被称为生成树
+ 深度优先生成树：由深度优先搜索产生的生成树
+ 广度优先生成树：由宽度优先搜索生成的生成树

## 3 最小代价生成树
加权无向图的生成树的代价是生成树中边的代价（权重）的和。  
最小代价生成树是指成本最小的生成树。利用贪心法的设计策略可以得到最小代价生成树。

> 为了构造最小代价生成树，我们使用了一个最小代价准则，其约束条件为：
> + 必须只使用G内的边。
> + 必须完全使用n-1条边
> + 不使用会产生循环的边
### 3.1 Kruskal 算法
1. 最小代价生成树T是通过每次向T中添加一条边而建立的。
2. 边按其成本的非递减顺序被选择为包含在T中。
3. 如果一条边没有在T中形成一个循环，则将该边添加到T中。
4. 恰好有n-1条边将被选择为T。
```c++
TV = {0};
while ((T contains less than n-1 edges) && (E not Empty)) {
    choose an edge (v, w) from E of lowest cost;//a
    delete (v, w) from E;
    if ((v, w) does not create a cycle in T) 
        add (v, w) to T;//b
    else discard (v, w);
}
if (T contains fewer than n-1 edges) 
    cout << "no spanning tree" << endl;
```
算法分析：
1. a处选出最小，讲E组织成最小堆，在O(log e)内选择和删除下一条边，堆的初始化O(e)
2. ==总时间复杂度：O(e*loge)==

### 3.2 Prim 算法
Prim算法逐边构造最小代价生成树。在算法过程中，所选边的集合都会形成一个树
1. 该算法从一个包含单个顶点的树T开始
2. 然后我们在T上加上一个代价最小的边（u，v），这样T U {（u，v）}也是一个树
3. 重复这个边加法步骤，直到T包含n-1条边
```c++
TV = {0};
for {T is empty; T contains fewer than n-1 edges; add (u, v) to T) 
{
    Let (u, v) be a least-cost edge such that u in TV and v not in  TV;
    if (there is no such edge) 
        break;
    add v to TV; 
}
if (T contains fewer than n-1 edges) 
    cout<<"no spanning tree"<<endl;
```
```c++
// 实现7顶点最小代价生成树
bool isEdge(Edge e) {
    if (e.weight > 0 && e.to >= 0 && e.from >= 0) {
        return true;
    }
    return false;
}
void setEdge(int from, int to, int weight)
{
    matrix[from][to] = weight;
}

//以下两行类似迭代器功能，遍历边；
Edge firstEdge(int v) {
    Edge edge;
    edge.from = v;
    for (int i = 0; i < 7; i++) {
        if (matrix[v][i] != 0)
        {
            edge.to = i;
            edge.weight = matrix[v][i];
            break;
        }
    }
    return edge;
}
Edge next(Edge e) {
    Edge edge;
    edge.from = e.from;
    for (int i = e.to + 1; i < 7; i++) {
        if (matrix[e.from][i] != 0)
        {
            edge.to = i;
            edge.weight = matrix[e.from][i];
            break;
        }
    }
    return edge;
}
void Prime(Graph& G, int s)
{
    Edge* Tree = new Edge[6];
    Dist* D = new Dist[7];
    for (int i = 0; i < 7; i++)		//所有初始化
    {
        Check[i] = false;
        D[i].index = i;
        D[i].pre = s;
        D[i].length = 999999;
    }
    D[s].length = 0;
    G.Check[s] = true;
    int v = s;
    for (int i = 0; i < 6; i++) {											//一棵树共有n-1条边
        for (Edge e = G.firstEdge(v); G.isEdge(e); e = G.next(e))
            if (G.Check[e.to] == false && (D[e.to].length > e.weight)) {	//若存在边，且比当前d小，则更新
                D[e.to].length = e.weight;
                D[e.to].pre = v;
            }	
        for (int j = 0; j < 7; j++)
            if (G.Check[j] == false)	//一个未访问顶点
            {
                v = j;
                break;
            }
        for (int j = 0; j < 7; j++)
            if (G.Check[j] == false && (D[j].length < D[v].length))	// 若该顶点未访问过且距离更短
                v = j;
        G.Check[v] = true;
        Edge m(D[v].pre, D[v].index, D[v].length);					//边
        Tree[i] = m;
        cout << Tree[i].from << "->" << Tree[i].to << endl;			
    }
}
```
## 4 最短路径
1. 有向加权图。 路径长度是路径上的边的权重之和
2. 路径开始处的顶点是源顶点。路径结束处的顶点是目标顶点。
### 4.1 单个来源/所有目的地：边权重非负
给定一个有向图G=（V，E），一个长度函数length（i，j）>=0，
和一个源顶点v，以确定从v到G的所有剩余顶点的最短路径。  

> 证明算法：
> 1. 如果下一条最短路径是到u，那么它从v开始，到u结束，只经过s中的顶点。
>    + 为了证明，假设该路径上的w不在S中，那么v到u路径包含一条从v到w的路径.
>    + 由于长度（w，u）>=0，length（v-w）必须小于length（v-u），否则我们不需要通过w。
>    + 根据假设，已生成了较短的路径（v-w）。因此，没有不在S中的中间顶点。
> 2. 所生成的下一个路径的目的地必须是u，这样有：
>    + $dist[u]=min(dist[v])${v not in S}
> 3. 在(2)中选择一个顶点u后，u成为S的成员。现在dist[w]，w not in S可能会改变。如果改变了，那一定是由于从v到u，然后到w的路径更短。
>    + v到u路径必须是最短的v到u路径，而u到w路径只是边<u，w>。所以如果dist[w]要减少，这是因为当前的dist[u]> dist[u] +length（u，w）。
> 4. 注意，u到w路径中任何中间顶点x（属于S）不能影响dist[w]。因为
>    + length（v - u - x）> dist[x]
>    + length(v-u-x-w) > length(v-x-w)>=dist[w]

算法实现：
```c++
class MatrixWDigraph {
private:
    double length[NMAX][NMAX]; // NMAX is a constant
    double *dist;
    bool *s;
public:
    void ShortestPath(const int, const int);
    int choose(const int);
};
void MatrixDigraph::ShortestPath(const int n, const int v)
{
    //dist[j],0<=j<n, is set to the length of the shortest path(v-j)
    //in a digraph G with n vertices and edge lengths in length[i][j]
    for (int i=0;i<n;i++) {//a
        s[i]=false; 
        dist[i]=length[v][i];
    }
    s[v]=true;
    dist[v]=0;
    for (i=0;i<n-2;i++) { //determine n-1 paths from v //b
        int u=choose(n); //choose returns a value u such that//c
    //dist[u]=minimum dist[w], where s[w]=false
        s[u]= true;
        for (int w=0;w<n;w++)//d
            if (!s[w] && dist[u] + length[u][w]<dist[w])
                dist[w] = dist[u] + length[u][w];
    }
}
```
算法分析：
1. a处循环时间复杂度O(n)
2. b处循环重复n-2次，c处选择最短边时间O(n),d处时间O(n),==总时间复杂度O(n^2^)==
3. 如果用邻接链表，d处时间复杂度降为O(e),==总时间复杂度仍为O(n^2^)==

！！注意，当某些边的长度可能为负时，该算法不起作用！！

### 4.2 所有对最短的路径
**问题：找到所有顶点对u和v之间的最短路径，u!=v。**
> 方案一：  
> 对于G中的每个顶点，将其作为源应用shortest路径，共n次，时间复杂度O(n^3^)  

利用动态规划方法，我们可以得到一个概念上更简单的算法，它的复杂度为O（n^3^），对G有负长度的边，只要G没有负长度的循环，也可以工作。
>1. A^k^`[i][j]` 从i到j的最短路径长度，没有经过索引大于k的中间顶点的最短路径长度 
>2. A^n-1^`[i][j]`G中最短的i-j路径的长度。
>3. A^-1^`[i][j]`:` length[i][j]`。

该算法的基本思想是：
当给一个A^k-1^时，我们能计算出对所有顶点的A^k^, 此时A^k^[i][j]有两种可能
+ A^k^`[i][j]`=A^k-1^`[i][j]`
+ A^k^`[i][j]`!=A^k-1^`[i][j]`,那么说明最短路径经过了k，所以A^k^`[i][j]`=A^k-1^`[i][k]`+A^k-1^`[k][j]`
+ A^k^`[i][j]`=min{A^k-1^`[i][j]`, A^k-1^`[i][k]`+ A^k-1^`[k][j]`}, k>=0.
```c++
void MatrixDigraph::AllLengths (const int n)
{ //length[n][n] is the adjacency matrix of G with n vertices.
//a[i][j] is the length of shortest path from i to j
    for (int i=0;i<n;i++) 
        for (int j=0;j<n;j++)
            a[i][j] = length[i][j]; // copy length into a
    for (int k=0;k<n;k++) // for a path with highest index k
        for (i=0;i<n;i++) // for all pairs
            for (j=0;j<n;j++)
                if (a[i][k]+a[k][j]<a[i][j])
                    a[i][j]=a[i][k]+a[k][j];
}
```
==时间复杂度：O(n^3^)==

## 5 活动网络
```c++
struct Pair
{
    int vertex;
    int dur; //activity duration
};
class LInkedGraph {
private:
    Chain<Pair>
    *adjLists;
    int *count, *t, *ee, *le;
    int n;
public:
    LinkedGraph (const int vertices) : {
        if (vertices < 1) 
            throw "Number of vertices must be > 0";
        n = vertices;
        adjLists = new Chain<Pair>[n];
        count = new int[n]; t = new int[n]; 
        ee = new int[n]; le = new int[n];
    };
    void TopologicalOrder(); 
    void EarliestEventTime(); 
    void LatestEventTime(); 
    void CriticalActivities();
};
```
### 5.1顶点活动网络（AOV）
**定义：有向图G中的顶点表示任务或活动，边表示任务之间的优先级关系，这是一个顶点上的活动网络或AOV网络**
> 1. AOV网络G中的顶点i是j的前驱，当且仅当有一个从i到j的有向路径。
>      + 如果<i，j>是G中的一条边，那么i是j的直接前驱，j是i的直接后继
> 2. 传递性、非自反——偏序
> 3. 一个没有循环的有向图是一个无环图

### 5.2 拓扑顺序：
**定义：拓扑顺序是一个图的顶点的线性顺序，对于任意两个顶点i和j，如果i是网络中j的前驱，那么i在线性顺序中先于j**
拓扑排序算法：
> 列出一个没有前驱的顶点，然后将这个顶点与从网络中引出它的所有边一起删除。
> 重复以上操作，直到列出所有顶点或所有剩余的顶点都有前驱。
```c++
Input the AOV network, let n be the number of vertices;
for (int i=0; i<n; i++) // output the vertices
{
    if (every vertex has a predecessor) return;
    // network has a cycle and is infeasible.
    pick a vertex v that has no predecessors;
    cout << v;
    delete v and all edges leading out of v from the network;
}
```
> 1. int *count被定义为数据成员，其空间在构造函数中分配
>
>      + count[i]，0<=i < n，已初始化为顶点i的入度。当输入<i，j>时，j的计数增加1
>      + 计数为0的顶点列表被维护为通过计数字段链接的自定义堆栈，因为在计数变为0之后它没有用处
> 2. int* t被定义为一个数据成员，它的空间在构造函数中被分配。顶点以拓扑顺序存储在t中，以备将来使用。
```c++
void LinkedGraph::TopologicalOrder()
{ //The n vertices of a network are listed in topological order
    int top = -1, pos = 0; 
    for (int i=0;i<n;i++) //create a linked stack of vertices with
        if (count[i]==0) { count[i]=top; top=i;} //no predecessors //a
    for (i=0; i<n; i++){                                           
        if (top==-1) throw "network has a cycle.";                  //b
            int j =top; top=count[top]; //unstack a vertex
            t[pos++] = j; // store vertex j in topological order
        Chain<int>::ChainIterator ji=adjLists[j].begin();           //c
        while (ji != adjLists[j].end()) { // decrease the count of 
            count[*ji]--; // the successor vertices of j
            if (count[*ji]==0){
                count[*ji]=top; 
                top=*ji;
            } //add to stack                                      
            ji++; // next successor
        }                                                          //d
    }
}
```
算法分析：
1. a: O(n)
2. b-c: O(n)
3. c-d:访问了每个节点和他的出度（和为总边数）：O(n+e)
4. ==总时间复杂度：O(n+e)==

### 5.3 活动边缘网络（AOE）
> + 有向边 —— 要执行的任务  
> + 顶点 —— 事件，表示某些活动的完成   
> + 在一个顶点处的事件发生之前，不能启动由离开该顶点的边所表示的活动
> + 只有当所有进入该事件的活动都已完成后，才会发生该事件。

1. 由于AOE网络中的活动可以并行进行，因此**完成项目的最小时间**是从**开始到结束的最长路径的长度**
2. 最长的路径被称为关键路径。
3. e(i)，活动a~i~最早的开始时间。
4. l(i)——不增加项目持续时间情况下活动a~i~的最迟开始时间。
5. 如果e(i) = l(i)，则a~i~被称为关键活动。l(i)-e(i)是a~i~重要性的度量

**加速某一关键活动不一定能减少项目长度，除非它在所有关键路径上。**
#### 5.3.1 计算事件最早发生时间
+ ee[j]——事件j最早的时间。
+ le[j]——事件j最迟的时间。
+ 如果a~i~是边<k，l>，那么
  + e(i)=ee[k]
  + l(i)=le[l]-活动a~i~的持续时间

由前向后计算：
+ ee[0]=0
+ ee[j]=max{ee[i]+<i,j>持续时间}，i是所有i->j

```c++
void LinkedGraph::EarliestEventTime()
{   // assume a topological order has already been in t, 
    // compute ee[j] according to t
    fill(ee, ee+n, 0); // initialize ee
    for (i=0; i<n; i++) {
        int j=t[i]; 
        Chain<Pair>::ChainIterator ji=adjLists[j].begin();
        while (ji!=adjLists[j].end()) {
            int k=ji->vertex; //k is successor of j
            if (ee[k]<ee[j]+ji->dur) 
                ee[k]=ee[j]+ji->dur; 
            ji++;
        }
    }
}
```
==总时间复杂度：O(n+e)==

#### 5.3.2 计算事件最迟发生事件
由后向前计算：
+ le[n-1]=ee[n-1]
+ le[j]=min{le[i]-<i,j>持续时间}，i是所有j->i

如果已经完成了前向阶段,并有一个拓扑顺序，那么le[i]，0<=i<n，可以如此直接计算，通过执行反向拓扑顺序的计算
```c++
void LinkedGraph::LatestEventTime()
{ // assume a topological order has already been in t, ee has 
// been computed, compute le[j] in the reverse order of t
    fill(le, le+n, ee[n-1]); // initialize le
    for (i = n-2; i >= 0; i--) {
        int j=t[i]; 
        Chain<Pair>::ChainIterator ji=adjLists[j].begin();
        while (ji!=adjLists[j].end()) {
            int k = ji->vertex; //k is successor of j
            if (le[k]-ji->dur < le[j]) 
                le[j]=le[k]-ji->dur; 
            ji++;
        }
    }
}
```
#### 5.3.3 输出关键事件
```c++
void LinkedGraph::CriticalActivities()
{ // compute e[i] and l[i], output critical activities
    int i=1; // the numbering counter for activities
    int u, v, e, l; // e, l are the earliest, latest start time of <u, v>
    for (u=0; u<n; u++) { // scan the adjacency lists.
        Chain<Pair>::ChainIterator ui=adjLists[u].begin();
        while (ui!=adjLists[u].end()) {
            int v=ui->vertex; // <u, v> is an edge numbered i
            e=ee[u]; l=le[v]-ui->dur;
            if (l==e) 
                cout <<"a"<<i<<"<"<<u<<","<<v<<">" <<"is a critical activity"<<endl; 
        ui++; i++;
        }
    }
}
```
假设顶点0是开始，因为所有的活动时间都假定为>0，如果最后ee[i]=0（i!=0），那么我们可以确定无法从起点0到达顶点i。



