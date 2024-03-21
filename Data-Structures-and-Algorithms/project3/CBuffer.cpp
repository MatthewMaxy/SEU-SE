#include<vector>
using namespace std;

class CBuffer {
	vector<int> buffer;
	int size;
	int curnum;
public:
	CBuffer(int size) {
		if (size > 0) {
			this->size = size;
		}
		curnum = 0;
	}
	bool isFull() {
		if (buffer.size() >= size) {
			return true;
		}
		return false;
	}

	void push(int num) {
		if (!isFull()) {
			buffer.push_back(num);
		}
	}

	bool isEmpty() {
		return buffer.size() == 0;
	}
	 
	void clear() {
		this->buffer.clear();
		this->curnum = 0;
	}

	int get() {
		if (this->curnum < this->size) {
			return this->buffer[this->curnum++];
		}
		return -1;
	}
	int getlast() {
		if (this->curnum < this->size) {
			return this->buffer[this->curnum];
		}
		return -1;
	}
};