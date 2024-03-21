/*
    设置三个vector input1，input2，output 分别模拟缓冲区，将初始的 N 个归并串经由内
    部排序生成有序顺串，再不断提取归并段并且减去，最后将归并结果在从尾部放入队列，直
    至只有一个归并串时，将这个归并串写磁盘。   
*/
#include<iostream>
#include<fstream>
#include<ctime>
#include<queue>
int TOTALNUM = 1000;
int N = 10;
int n = 0; // 总操作数
int INPUTSIZE = 20;
int OUTPUTSIZE = 20;
using namespace std;

queue<vector<int> > Runs;//模拟外存，存放归并段

// 生成随机序列文件
void initialFile(const char* initialPath){
    fstream file(initialPath, ios::out | ios:: binary);
    file.seekp(0, ios::beg);
    int temNum = 0;
    srand(time(0));
    for(int i=0;i < TOTALNUM; i++){
        temNum = rand()%1000;
        file << temNum;
        if(i!=TOTALNUM-1)
            file<<" ";
    }
    file.close();
}

void Merge(vector<int>& arr, int start, int mid, int end)
{
    int i = start;//起始位置
    int j = mid + 1;//第二数组起始位置
    int k = 0;
    // 创建新数组用于排序
    vector<int> temp = vector<int>(end - start + 1);
    while (i <= mid && j <= end){
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= end)
        temp[k++] = arr[j++];

    //复制回原数组
    for (int i = 0; i < end - start + 1; i++)
        arr[start + i] = temp[i];
}
void InternalMergeSort(vector<int>& arr, int start, int end)
{
    if (start < end){
        int mid = (start + end) / 2;
        InternalMergeSort(arr, start, mid);
        InternalMergeSort(arr, mid + 1, end);
        Merge(arr, start, mid, end);
    }
}

void buffill(vector<int>& v1, vector<int>& buf, int size)
{
    int k = (int)v1.size();
    int index = 0;
    while (buf.size() < size && index < k)
        buf.push_back(v1[index++]);
    v1.erase(v1.begin(), v1.begin() + index);
}

void fill(vector<int>& nums, vector<int>& file)
{
    for (int i = 0; i < nums.size(); i++){
        int it = nums[i];
        file.push_back(it);
    }
    nums.clear();
}

void sortSequece(vector<int>& input1, vector<int>& input2, vector<int>& output, vector<int>& outfile)
{
    int m = (int)input1.size();
    int _n = (int)input2.size();

    int i = 0, j = 0;
    while (i < m && j < _n){
        if (output.size() == OUTPUTSIZE){
            for (int i = 0; i < output.size(); i++){
                int it = output[i];
                outfile.push_back(it);
            }
            output.clear();
        }
        if (input1[i] < input2[j])
            output.push_back(input1[i++]);
        else
            output.push_back(input2[j++]);
    }
    input1.erase(input1.begin(), input1.begin() + i);
    input2.erase(input2.begin(), input2.begin() + j);
}

vector<int> merge(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> input1;
    vector<int> input2;
    vector<int> output;

    //外部临时存储文件
    vector<int> outfile;

    while (!nums1.empty() && !nums2.empty()){
        n++;
        buffill(nums1, input1, INPUTSIZE);
        n++;
        buffill(nums2, input2, INPUTSIZE);
        sortSequece(input1, input2, output, outfile);
    }
    n++;
    fill(output, outfile);
    n++;
    fill(input1, outfile);
    n++;
    fill(input2, outfile);
    n++;
    return outfile;
}



void mergeStart(const char* input, const char* output){
    fstream file(input, ios::out | ios::in | ios::binary);
    file.seekg(0, ios::beg);

    int tem = 0;
    // 生成N个顺串
    while(!file.eof()){
        vector<int> temp;
        for (int i = 0; i < TOTALNUM / N; i++)
        {
            file >> tem;
            temp.push_back(tem);
            // cout<<i;
        }
        InternalMergeSort(temp, 0, temp.size() - 1);
        n++;
        Runs.push(temp);
    }
    file.close();
    //不断提取归并段并且减去，最后将归并结果在从尾部放入队列
    while (Runs.size() > 1)
    {
        vector<int> run1 = Runs.front();
        Runs.pop();
        vector<int> run2 = Runs.front();
        Runs.pop();
        vector<int> temp = merge(run1, run2);
        Runs.push(temp);
    }
    //只剩下1个归并段也就是最终结果了，写入这个文件 
    vector<int> result = Runs.front();
    Runs.pop();

    fstream file0(output, ios::out | ios::binary);
    file0.seekp(0, ios::beg);
    file0.tellp();
    for (int i = 0; i < result.size(); i++)
    {
        int it = result[i];
        file0 << it << " ";
    }
    file0.close();

}


int main() {
    char initialPath[] = "init.txt";
    char resultPath[] = "result.txt";
    initialFile(initialPath);
    mergeStart(initialPath, resultPath);
    cout << "磁盘操作数：" << n << endl;
    return 0;
}