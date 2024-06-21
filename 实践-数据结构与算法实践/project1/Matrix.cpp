#include<fstream>
#include<iostream>
#include"Cache.cpp"
#define INT_SIZE 4

class Matrix{
private:
    int rowSize;
    int colSize;
    long miss;
    long count;
    int pos;
    std::fstream file;
    Cache cache;
    int offset;
public:
    Matrix(int s, const char *f) 
        : cache(s), miss(0), count(0) {
        file.open(f);
        int r, c;
        file.read((char *) &r, INT_SIZE);
        file.read((char *) &c, INT_SIZE);
        rowSize = r;
        colSize = c;
        offset = 2;
    }
    Matrix(int row, int col, int s) 
        : cache(s), miss(0), count(0) {
        offset = 2;
        rowSize = row;
        colSize = col;
    }

    int get(int row, int col) {
        int index = row * colSize + col;
        count++;
        if (index >= pos && index < pos + cache.size && pos != -1)
            return cache.get(index - pos);
        else {
            miss++;
            read(index);
            return cache.get(0);
        }
    }

    void set(int row, int col, int value) {
        int index = row * colSize + col;
        if (pos <= index && index < pos + cache.size)
            cache.set(index - pos, value);
        else {
            miss++;
            read(index);
            cache.set(0, value);
        }
    }
    void write() {
        file.seekp(pos * INT_SIZE + offset * INT_SIZE, std::ios::beg);
       for (int i = 0; i < cache.size; ++i)
           file.write((char *) &cache.get(i), INT_SIZE);
        cache.setdirty(false);
    }

    void read(int start) {
        if (cache.getdirty())write();
        file.seekg(start * INT_SIZE + offset * INT_SIZE, std::ios::beg);
        cache.size = 0;
        for (int i = 0; i < cache.getcapacity() && start + i < rowSize * colSize; ++i) {
            int value;
            file.read((char *) &value, INT_SIZE);
            cache.size++;
            cache.set(i, value);

        }
        pos = start;
    }
     Matrix* mul_ijk(Matrix &right) {
        Matrix *t = new Matrix(rowSize, right.colSize, right.cache.getcapacity());
        t->pos = 0;
        t->cache.allZero();
        for (int i = 0; i < rowSize; ++i) {
            for (int j = 0; j < right.colSize; ++j) {
                for (int k = 0; k < right.rowSize; ++k) {
                    t->set(i, j, t->get(i, j) + get(i, k) * right.get(k, j));
                }
            }
        }
        t->miss++;
        t->write();
        return t;
    }

    Matrix *mul_ikj(Matrix&right){
        Matrix *t = new Matrix(rowSize, right.colSize, right.cache.getcapacity());
        t->pos = 0;
        t->cache.allZero();
        for (int i = 0; i < rowSize; ++i) {
            for (int k = 0; k < right.colSize; ++k) {
                for (int j = 0; j < right.colSize; ++j) {
                    t->set(i, j, t->get(i, j) + get(i, k) * right.get(k, j));
                }
            }
        }
        t->miss++;
        t->write();
        return t;
    }

    void print() {
        std::cout << "row:" << rowSize << " col:" << colSize << std::endl;
        for (int i = 0; i < rowSize; ++i) {
            for (int j = 0; j < colSize; ++j) {
                std::cout << get(i, j) << " ";
            }
            std::cout << std::endl;
        }
    }
    void print_result(){
        std::cout<<"---------------------------"<<std::endl;
        std::cout<<"Count Number is:"<<count<<std::endl;
        std::cout<<"Miss Number is:"<<miss<<std::endl;
    }

};
