﻿/*
    三个线程：
    1. 将文件中的数据读入输入缓冲区；
    2. 将输入缓冲区的数据读入败者树，将败者树排好序的数据写入输出缓冲区；
    3. 将输出缓冲区的数据按照段，写回文件
*/
#include <cstdio>
#include<queue>
#include<thread>
#include<unistd.h>
#include <mutex>
#include <iostream>
#include <vector>
#include"losertree.cpp"
#include"CBuffer.cpp"
using namespace std;

#define N 1000   // 文件中含有的记录的数量
#define TreeN 32 // 败者树长度
mutex input_mutex[2];
mutex output_mutex[2];

vector<vector<int> >strs;
LoserTree losertree(TreeN);
CBuffer input1(5);
CBuffer input2(5);
CBuffer output1(5);
CBuffer output2(5);

//判断现在中间线程正在读取、写入的input号数
int input_thread_number = 1;
int output_thread_number = 1;

//现在输入输出线程正在占用的input号数
int to_thread_number = 1;
int from_thread_number = 1;

//记录读出的总数
int output_sum = 0;
//记录排序的总数
int sort_sum = 0;
//当前读出段数
int cur_num = 0;


bool MakeData(char* path, int filesize)
{
    FILE* fw = fopen(path, "wb");

    if (fw == NULL)
        return false;
    srand(time(0));
    for (int i = 0; i < filesize; i++){
        int x = rand()%1000;
        fwrite(&x, sizeof(int), 1, fw);
    }
    fclose(fw);
    return true;
}

bool ReadData(char* path, int filesize)
{
    FILE* fr = fopen(path, "rb");
    if (fr == NULL)
        return false;
    int* data = (int*)malloc(sizeof(int) * filesize);

    assert(data != NULL);
    int num = 0;

    while ((num = fread(data, sizeof(int), filesize, fr))){
        int i = 0;
        while (i < num){
            printf("%5d   ", *(data + i));
            i++;
            if (i % 10 == 0)
                printf("\n");
        }
    }
    free(data);
    return true;
}

void ReadFromFile(FILE* fi) {
    int input_num;
    while (1) {
        if (feof(fi)) 
            break;
        if (to_thread_number == 1) {
            while (input1.isFull()) {}
            input_mutex[0].lock();
            for (int i = 1; i <= 5; i++) {
                fread(&input_num, sizeof(int), 1, fi);
                input1.push(input_num);
            }
			to_thread_number = 2;
            input_mutex[0].unlock();

        }
        else {
            while (input2.isFull()) {}
            input_mutex[1].lock();
            for (int i = 1; i <= 5; i++) {
                fread(&input_num, sizeof(int), 1, fi);
                input2.push(input_num);
            }
            to_thread_number = 1;
            input_mutex[1].unlock();
        }
    }
}
void ReadFromOutput() {
    vector<int> temp;
    int lastnum = 100000000;
    while (output_sum!=N) {
        if (from_thread_number == 1) {
            while (output1.isEmpty()) {}
            output_mutex[0].lock();
            for (int i = 1; i <= 5; i++) {
                if (output1.getlast() < lastnum) {
                    cout << endl;
                    cur_num++;
                    cout << "当前排序总数：" << output_sum << endl;
                    cout << "当前段数：" << cur_num << endl;

                    if (cur_num != 1) {
                        strs.push_back(temp);
                        temp.clear();
                    }
                }

                lastnum = output1.get();
                cout << lastnum << " ";
                temp.push_back(lastnum);
            }

            output1.clear();
            from_thread_number = 2;
            output_mutex[0].unlock();
        }
        else {
            while (output2.isEmpty()) {}
            output_mutex[1].lock();

            for (int i = 1; i <= 5; i++) {
                if (output2.getlast() < lastnum) {
                    cout << endl;
                    cur_num++;
                    cout << "当前排序总数：" << output_sum << endl;
                    cout << "当前段数：" << cur_num << endl;
                    if (cur_num != 1) {
                        strs.push_back(temp);
                        temp.clear();
                    }
                }

                lastnum = output2.get();
                cout << lastnum << " ";
                temp.push_back(lastnum);
            }
            output2.clear();
            from_thread_number = 1;
            output_mutex[1].unlock();
        }
        output_sum += 5;
        if (output_sum % 10 == 0)
            cout << endl;
    }
    strs.push_back(temp);
}
void CenterThread() {
    bool reinit = false;
    while (1) {
        //还没初始化败者树
        if (sort_sum < TreeN) {
            if (input_thread_number == 1) {
                while (input1.isEmpty()) { }
                input_mutex[0].lock();
                for (int i = 1; i <= 5; i++) {
                    losertree.initInput(input1.get());
                    sort_sum++;
                    if (sort_sum == TreeN)
                        losertree.reInit();
                }
                input1.clear();
                input_thread_number = 2;
                input_mutex[0].unlock();
            }
            else {
                while (input2.isEmpty()) {}
                input_mutex[1].lock();

                for (int i = 1; i <= 5; i++) {
                    losertree.initInput(input2.get());
                    sort_sum++;
                    if (sort_sum == TreeN)
                        losertree.reInit();
                }
                input2.clear();
                input_thread_number = 1;
                input_mutex[1].unlock();
            }
        }
        //已经初始化好败者树
        else if(sort_sum <= N) {
            if (input_thread_number == 1) {
                while (input1.isEmpty()) { }
                input_mutex[0].lock();
                if (output_thread_number == 1) {
                    while (output1.isFull()) {}
                    output_mutex[0].lock();
                    
                    for (int i = 1; i <= 5; i++) {
                        output1.push(losertree.getlose());
                        if (losertree.input(input1.get())) {
                            losertree.reInit();
                        }
                    }
                    output_thread_number = 2;
                    output_mutex[0].unlock();
                }
                else {
                    while (output2.isFull()) {}
                    output_mutex[1].lock();
                    for (int i = 1; i <= 5; i++) {
                        output2.push(losertree.getlose());
                        if (losertree.input(input1.get())) {
                            losertree.reInit();
                        }
                    }
                    output_thread_number = 1;
                    output_mutex[1].unlock();
                }

                input1.clear();
                input_thread_number = 2;
                input_mutex[0].unlock();
            }
            else{
                while (input2.isEmpty()) { }
                input_mutex[1].lock();
                if (output_thread_number == 1) {
                    while (output1.isFull()) {}
                    output_mutex[0].lock();

                    for (int i = 1; i <= 5; i++) {
                        output1.push(losertree.getlose());
                        if (losertree.input(input2.get())) {
                            losertree.reInit();
                        }
                    }
                    output_thread_number = 2;
                    output_mutex[0].unlock();
                }
                else {
                    while (output2.isFull()) {}
                    output_mutex[1].lock();

                    for (int i = 1; i <= 5; i++) {
                        output2.push(losertree.getlose());
                        if (losertree.input(input2.get())) {
                            losertree.reInit();
                        }
                    }
                    output_thread_number = 1;
                    output_mutex[1].unlock();
                }

                input2.clear();
                input_thread_number = 1;
                input_mutex[1].unlock();
            }


            sort_sum += 5;
        }
        else {
        if (!reinit) {
            losertree.reInit();
            reinit = true;
        }
		if (output_thread_number == 1) {
			while (output1.isFull()) {}
			output_mutex[0].lock();

            if (losertree.getlose() == INT_MAX) {
                output_mutex[0].unlock();
                break;
            }
			for (int i = 1; i <= 5; i++) {
				output1.push(losertree.getlose());
                losertree.input(INT_MAX);

			}
			output_thread_number = 2;
			output_mutex[0].unlock();
		}
		else {
			while (output2.isFull()) {}
			output_mutex[1].lock();

            if (losertree.getlose() == INT_MAX) {
                output_mutex[1].unlock();
                break;
            }
			for (int i = 1; i <= 5; i++) {
				output2.push(losertree.getlose());
                losertree.input(INT_MAX);
			}
			output_thread_number = 1;
			output_mutex[1].unlock();
		}
        }
    }

}
void showstrs() {
    cout << endl;
    cout <<"-------------------------------归并结果段--------------------------------"<< endl;
    for (int i = 0; i < strs.size(); i++) {
        cout << "第" << i+1 << "段: ";
        for (int j = 0; j < strs[i].size(); j++) {
            if (j % 10 == 0) 
                cout << endl;
            cout << strs[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    char pathA[] = "a.txt";
    MakeData(pathA, N);
    ReadData(pathA, N);

    FILE* fi;
    fi = fopen(pathA, "rb");
    sleep(1);

    thread t1(ReadFromFile, fi);
    sleep(1);
    thread t2(CenterThread);
    sleep(1);
    thread t3(ReadFromOutput);

    t1.join();
    t2.join();
    t3.join();
    showstrs();
}