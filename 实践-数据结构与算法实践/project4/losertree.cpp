#include<iostream>
using namespace std;

class LoserTree {
	//losetree是败者胜者的下标数组
	int* losetree; //tree[0]是最终输出
	int* wintree;
	int* tree_item;
	int tree_size;
	int cnt = 0; //当前已经输入的数据数目
	bool finish_init = false;
	bool* tags;
	void init() {
		for (int i = 0; i < tree_size; i += 2) {
			if (tree_item[i] < tree_item[i + 1]) {
				losetree[(tree_size + i) / 2] = i + 1; //父节点是败者（较大的）
				wintree[(tree_size + i) / 2] = i;
			}
			else {
				losetree[(tree_size + i) / 2] = i;
				wintree[(tree_size + i) / 2] = i + 1;
			}
		}
		for (int i = tree_size / 2 - 1; i >= 1; i--) {
			int c1 = wintree[2 * i]; //tree_item中的索引
			int c2 = wintree[2 * i + 1];

			if (tree_item[c1] < tree_item[c2]) {
				losetree[i] = c2;
				wintree[i] = c1;
			}
			else {
				losetree[i] = c1;
				wintree[i] = c2;
			}
		}
		losetree[0] = wintree[1];
	}
public:
	LoserTree(int size) {
		tree_size = size;
		losetree = new int[size];
		wintree = new int[size];
		tree_item = new int[size];
		tags = new bool[size];
		cnt = 0;
	}
	int getloseindex() {
		return losetree[0];
	}
	void reInit() {
		for (int i = 0; i < tree_size; i++) tags[i] = false;
		init();
	}
	int getlose() {
		return tree_item[losetree[0]];
	}
	bool initInput(int t) {
		if (finish_init) return true;
		tree_item[cnt++] = t;
		if (cnt == tree_size) {
			init();
			finish_init = true;
			return true;
		}
		else if (cnt > tree_size) return true;
		else return false;
	}
	bool input(int t) {
		int idx = losetree[0]; // 要替换的tree_item的下标
		bool finish_run = false;
		if (t < tree_item[idx]) {
			//对应的idx应该被禁用，在loser_tree更新时认为它是必输的
			tags[idx] = true;
			--cnt;
			if (cnt == 0) {
				cnt = tree_size;
				for (int i = 0; i < tree_size; ++i) tags[i] = false;
				finish_run = true;
				tree_item[idx] = t;
				init(); //需要重新初始化一遍
				return true;
			}
		}
		tree_item[idx] = t;
		//从idx开始，重新调整树
		int tree_idx = tree_size + idx;
		while (tree_idx > 1) {
			//一方面如果idx本身有tag，说明肯定败了，另一方面如果父亲的idx对应的tag是false才有资格比较，如果是true直接就说明父亲输了
			if (tags[idx] || (tags[losetree[tree_idx / 2]] == false && tree_item[idx] > tree_item[losetree[tree_idx / 2]])) { //当更新后的idx输了(变大了),替换原来的败者，胜者换成原来的败者
				int tmp = idx;
				idx = losetree[tree_idx / 2];
				losetree[tree_idx / 2] = tmp;
			}//否则不用动
			tree_idx /= 2;
		}
		losetree[0] = idx;
		return finish_run;
	}
};
