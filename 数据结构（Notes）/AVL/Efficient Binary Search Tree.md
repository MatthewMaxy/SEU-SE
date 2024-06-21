# 高效二叉查找树
## 1 AVL树
AVL树是一个二叉查找树，它的子树的高度相平衡。
### 1.1 定义
1. 一棵空的树是平衡的。
2. 如果T是以T~L~和T~R~分别为左右子树的非空二叉树，则T平衡当且仅当：
   1. T~L~和T~R~是平衡的
   2. |h~L~-h~R~|<=1，其中h~L~和h~R~分别为T~L~和T~R~的高度。
3. 二叉树中节点T的平衡因子BF(T):
   + BF(T) = h~L-h~R~。对于AVL树中的任何节点T，BF(T)=-1、0或1。
```c++
template <class K, class E> class AVL;
template <class K, class E>
class AvlNode {
friend class AVL<K, E>;
public:
   AvlNode(const K& k, const E& e) 
   {
       key=k; element=e; bf=0; leftChild=rightChild=0;
   }
private:
   K key;
   E element;
   int bf;
   AvlNode<K, E> *leftChild, *rightChild; 
};
template <class K, class E>
class AVL {
public:
   AVL(): root(0) { };
   E& Search(const K&) const;
   void Insert(const K&, const E&);
   void Delete(const K&);
private:
   AvlNode<K, E> *root;
};
```
### 1.2 再平衡过程：LL,RR,LR,RL
旋转的特征发生在：插入节点Y最近的祖先A，其BF为±2
+ LL：Y被插入到A的左子树的左子树中
+ LR：Y被插入到A的左子树的右子树中
+ RR：Y被插入到A的右子树的右子树中  
+ RL：Y被插入到A的右子树的左子树中
#### 1.2.1 LL(RR对称）

<img src="C:\Users\DELL\Desktop\AVL\LL.jpg" alt="LL" style="zoom:80%;" />

#### 1.2.2 LR:(RL对称)

<img src="C:\Users\DELL\Desktop\AVL\LR1.jpg" alt="LR1" style="zoom: 67%;" />

<img src="C:\Users\DELL\Desktop\AVL\LR2.jpg" alt="LR2" style="zoom: 67%;" />

<img src="C:\Users\DELL\Desktop\AVL\LR3.jpg" alt="LR3" style="zoom:67%;" />

#### 1.2.3 算法实现：
```c++
template <class K, class E>
void AVL<K, E>::Insert(const K& k, const E& e)
{
   if (!root) { // empty tree
      root=new AvlNode<K, E>(k, e);
      return;
   } 
    
   // phase 1: 定位插入位置. 
   AvlNode<K, E> *a=root, // most recent node with BF=±1
                    *pa, // parent of a
                    *p=root, // p move through the tree
                    *pp=0; // parent of p
   while (p) { // search for insertion point for x
      if (p->bf) {
          a=p; pa=pp;
      }
      if (k<p->key)
         {pp=p; p=p->eftChild;}
      else if (k>p->key) 
         {pp=p; p=p->rightChild;}
      else 
         {p->element=e; return;} // k already in the tree
   } // end of while
   
   // phase 2: 插入和平衡调整. k is not in the tree and 
   // may be inserted as the appropriate child of pp.
   AvlNode<K, E> *y=new AvlNode<K, E>(k, e);
   if (k<pp->key)
       pp->leftChild=y; // as left child
   else pp->rightChild=y; // as right child
   	// 调整a到pp路径上节点的BF值. 若k插入在a左子树d=1，右子树d=-1
	// The BF of a will be changed later.
   int d;
   AvlNode<k, E> *b, // child of a
                 *c; // child of b
   if (k>a->key) 
      { b=p=a->rightChild; d=-1;}
   else 
      { b=p=a->leftChild; d=1;}
   while (p!=y)
      if (k>p->key) { // height of right increases by 1
          p->bf= -1; p=p->rightChild;
      }
      else { // height of left increases by 1
          p->bf= 1; p=p->leftChild;
      }
    
   // 对树平衡进行调整
   if (!(a->bf) || !(a->bf+d)) { // tree still balanced  a=0或者a=-1+左子树/a=1+右子树
      a->bf+=d; return;
   }
   //tree unbalanced, determine rotation type 
   if (d==1) { // left imbalance
      if (b->bf==1) { // type LL
          a->leftChild=b->rightChild;
          b->rightChild=a; a->bf=0; b->bf=0;
      }
      else { // type LR
         c=b->rightChild;
         b->rightChild=c->leftChild;
         a->leftChild=c->rightChild;
         c->leftChild=b;
         c->rightChild=a;
         switch (c->bf) {
            case 1: // LR(b)
               a->bf=-1; b->bf=0;
               break;
         case -1: // LR(c)
            b->bf=1; a->bf=0;
            break;
         case 0: // LR(a)
            b->bf=0; a->bf=0;
            break;
         }
           c->bf=0; b=c; // b is the new root
      } // end of LR
   } // end of left imbalance
    
   else { //RR 和 RL与上面对应，略过
   }
   // Subtree with root b has been rebalanced.
   if (!pa) 
       root=b; // A has no parent and a is the root
   else if (a==pa->leftChild)
       pa->leftChild=b;
   else 
       pa->rightChild=b;
   return;
} 
```
==时间复杂度：O(logn)==

> 证明见书p397

### 1.3 AVL树和连续表、链表之间的比较
+ 双向链表且位置k已知
+ 插入位置已知

<img src="C:\Users\DELL\Desktop\AVL\1.jpg" alt="1" style="zoom:80%;" />
