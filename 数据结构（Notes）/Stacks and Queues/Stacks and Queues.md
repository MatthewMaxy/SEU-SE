# 栈和队列
## 1.	 堆栈抽象数据类型

### 1.1 	简介：（LIFO）
1. 线性列表
2. 其中一端叫做顶部。另一端被称为底部。
3. 仅从顶部进行添加和删除
### 1.2	实现：(实际实现应用模板T)
```cpp
class Stack{
private:
	int* stack;
	int top;
	int capacity;
public:
	Stack(int capcity = 10)
	{
		if (capcity < 1)
			cout << "capacity should >0";
		stack = new int[capcity];
		capacity = capcity;
		top = -1;
	}
	bool isEmpty()
	{
		return(top == -1);
	}
	int Top(){
		return stack[top];
	}
	void Push(int a)
	{
		if (top == capacity - 1)
		{
			capacity *= 2;
			int* tem = new int[capacity];
			for (int i = 0; i <= top; i++)
				tem[i] = stack[i];
			delete[]stack;
			stack = tem;
		}
		stack[++top] = a;	
	}
	int Pop()
	{
		if (isEmpty())
			cout << "error!";
		int tem=stack[top];
		stack[top] = NULL;
		top--;
		return tem;
	}
};
```
## 2.	队列抽象数据类型
### 2.1	简介：（FIFO）
1. 线性列表
2. 其中一端叫做前端，另一端被称为后面。
3. 添加的操作只在后面完成，只从前面移出。
### 2.2	实现循环队列：(实际实现应用模板T)
```cpp
class Queue {
private:
	int capacity, front, rear;
    // front 为空，后一位开始有数据
    // rear 为最后一位数据位置
	int* queue;
public:
	Queue(int capacity = 10)
	{
		if (capacity < 1)
			cout << "error";
		this->capacity = capacity;
		queue = new int[capacity];
		fill(queue, queue + capacity, 0);
		front = rear = 0;
	}
	bool isEmpty()
	{
		return (front == rear);
	}
	void Push(int a)
	{
		if ((rear + 1) % capacity == front)
		{
			int* tem = new int[capacity * 2];
			fill(tem, tem + 2 * capacity, 0);
			int start = (front + 1) % capacity;
            // 考虑数据在数组内的情况，即是否有循环情况（'1', '2', '%', '%', '7', '3', '5')
            // 不存在循环情况：
            // 空的为空间(若为0~7）中最后一个（7%8=7）或第一个（0%8=0），对应start<2
			if (start < 2)
			{
				for (int i = start,j=0;i <= rear;j++,i++)
					tem[j] = queue[i];
			}
            //若存在回环：
            // 1. 创建一个容量为两倍的新阵列新队列
            // 2. 将第二个线段复制到新队列中从0开始的位置。
            // 3. 将第一个段复制到新的队列中的位置。
			else
			{	
				int j = 0;
				for (int i = start;i < capacity;i++,j++)
					tem[j] = queue[i];
				for (int i = 0;i <= rear;i++,j++)
					tem[j] = queue[i];
			}
			front = 2 * capacity - 1;rear = capacity - 2;capacity *= 2;
			delete[]queue;
			queue = tem;
		}
		rear = (rear + 1) % capacity;
		queue[rear] = a;
	}
	int Pop()
	{
		if (isEmpty())
			cout << "error!";
		front = (front + 1) % capacity;
		int tem = queue[front];
		queue[front] = 0;
		return tem;
	}
};
```
## 3.	具体问题：
### 3.1	迷宫问题（栈实现）
#### 3.1.1	问题：
​	找到一条从迷宫的入口到出口的路径
#### 3.1.2	表示：
> 1. `maze[i][j]`，1<=i<=m，1<=j<=p
> 2. 1-可行 0-堵塞
> 3. 起点`maze[0][0]`|||终点`maze[m][p]`
> 4. 当前位置：`[i][j]`
> 5. 1的边界，所以一个`maze[m+2][p+2]`
> 6. 8个可能的移动方向：N、NE、E、SE、S、SW、W和NW。
#### 3.1.3	思路：
1. 给定当前的位置`[i][j]`和8个方向，我们选择一个方向d，得到新的位置`[g][h]`。
2. 如果`[g][h]`是目标，那就是成功。
3. 如果`[g][h]`是一个合法的位置，则将`[i][j]`和d+1保存在一个堆栈中，以防我们采取一个错误的路径，需要尝试另一个方向，然后`[g][h]`成为新的当前位置。
4. 重复直到成功或每一种可能性都被尝试过。
5. 为了防止我们沿着同一路径前进两次：使用另一个数组，标记`[m+2][p+2]`空间均为0。一旦访问该位置，标记`[i][j]`将设置为1
#### 3.1.4	实现:
1. 初始化8个方向及迷宫
```cpp
struct offsets
{
    int a, b;
};
enum directions {N, NE, E, SE, S, SW, W, NW}; 
offsets move[8];
```
<img src="C:\Users\DELL\Desktop\数据结构笔记\Stacks and Queues\1.jpg" alt="1" style="zoom: 67%;" />

2. 初始位置为坐上，初始方向向东获得路径：
```cpp
void Path(const int m, const int p)
{
    // start at (1,1)
    mark[1][1]=1;
    Stack<Items> stack(m*p);
    Items temp(1, 1, E);
    stack.Push(temp);
    while (!stack.IsEmpty())
    {
        temp = stack.Top();
        stack.Pop();
        int i = temp.x; int j = temp.y; int d = temp.dir;
        while ( d < 8)
        {
            int g = i + move[d].a; int h = j + move[d].b;
            if ((g == m) && (h == p)) { // reached exit
                // output path
                cout << stack;
                cout << i << " " << j << " " << d << endl; 
                cout << m<< " "<< p << endl; // last two points
                return;
            }
            if ((!maze[g][h]) && (!mark[g][h])) { //new position 
                mark[g][h]=1;
                temp.x = i; temp.y = j; temp.dir = d+1;
                stack.Push(temp);
                i = g ; j = h ; d = N; // move to (g, h)
            }
            else d++; // try next direction
        }
    }
    cout << "No path in maze."<< endl;
}
```
3. 需要储存当前坐标和方向的栈
```cpp
struct Items {
    int x, y, dir;
};
// 此外，为了避免在堆栈推送过程中使阵列容量加倍，我们可以将堆栈的大小设置为m*p
```
4. 关于<<的重载
```cpp
template <class T>
ostream& operator << (ostream& os, Stack<T>& s)
{
    os << "top = "<<s.top<< endl;
    for (int i = 0; i <= s.top; i++);
        os << i << ":"<< s.stack[i] << endl;
    return os;
}
```
#### 3.1.5	时间复杂度：
​	由于没有位置被访问两次，==最坏情况下的计算时间是O(m$\times$p)==。

### 3.2	线路铺设（队列实现）
#### 3.2.1	基本思路与实现：
```cpp
Queue Q;
Q.Push (startPin);
while(!Q.isEmpty())
{
    Pin p = Q.Front();
    Q.Pop();
    for 访问p所有可以访问的相邻点pi{
        Visit(pi)
        Q.Push (pi);
    }
}
```

### 3.3	算术运算式
#### 3.3.1	简介：
1. 表达式包括三种实体
   1. 运算符：（+，-，/、*）。
   2. 操作数：（a、b、c、d、e、f、g、h、3.25、（a + b）、（c + d）等）。
   3. 分隔符：（（，））。
2. 操作符度数：操作符需要的操作数数。
   1. 二元运算符需要两个操作数。a + b  c / d  e - f
   2. 一元运算符需要一个操作数。+ g - h

#### 3.3.2	中缀表达形式
1. 编写表达式的正常方式。二元运算符位于它们的左右操作数之间
2. 操作符优先级：  
      priority(*) = priority(/) > priority(+) = priority(-)
3. 分隔符内的子表达式被视为单个操作数，独立于表达式的其余部分。
4. 中缀表达式很难解析

#### 3.3.3	前缀表达形式：
##### 3.3.3.1	简介：
1. 操作数的相对顺序在中缀和后缀形式中是相同的
2. 操作符在其操作数的后缀形式之后立即出现。
   > Infix =  `(a + b) * (c – d) / (e + f)`   
   > Postfix = `ab +c d - * e f +/`
3. 一元运算符
   >  `+ a => a @`  
   >  `+ a + b => a @ b +`  
   >  `- a => a ?`  
   >  `- a-b => a ? b -`
4. 优点：
   1. 不需要括号
   2. 操作符的优先级不再相关
##### 3.3.3.2	前缀计算
<img src="C:\Users\DELL\AppData\Roaming\Typora\typora-user-images\image-20230205223618403.png" alt="image-20230205223618403" style="zoom: 33%;" />

#### 3.3.4	中缀转前缀
##### 3.3.4.1	原理
<img src="C:\Users\DELL\Desktop\数据结构笔记\Stacks and Queues\3.jpg" alt="3" style="zoom:33%;" />

##### 3.3.4.2	实现(方法与教材不同)：
```cpp
int priority(char op)
{
	int priority = 0;
	if (op == '*' || op == '/') priority = 2;
	if (op == '+' || op == '-') priority = 1;
	if (op == '(')priority = 0;
	return priority;
}
void InfixtoPostfix(string& s1)
{
	stack<char>s;
	int j = 0;
	for (char i : s1)
	{
		if (i >= '0' && i <= '9' || i >= 'a' && i <= 'z')
		{
			cout << i;
		}
		else {
			if (s.empty())
				s.push(i);
			else if (i == '(')
				s.push(i);
			else if (i == ')')
			{
				while (s.top() != '(')
				{
					cout << s.top();
					s.pop();
				}
				s.pop();
			}
			else
			{
				while (priority(i) <= priority(s.top()))
				{
					cout << s.top();
					s.pop();
					if (s.empty()) break;
				}
				s.push(i);
			}
		}
	}
	while (!s.empty())
		{
			cout << s.top();
			s.pop();
		}
}
```
**分析：**
时间复杂度：==一个有n个token的表达式：O (n)==
占用空间： 栈大小<= 表达式中操作数个数==(e) + 1==('#')(书中以'#'作为结束符)

