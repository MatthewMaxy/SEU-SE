#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

// 生成一个随机整数矩阵
void generateRandomMatrix(std::vector<std::vector<int> >& matrix, int rows, int cols) {
    matrix.resize(rows, std::vector<int>(cols));
    std::srand(std::time(nullptr)); // 使用当前时间作为随机数种子

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = std::rand() % 100; // 生成范围在 0 到 99 之间的随机整数
        }
    }
}

// 将矩阵以二进制形式写入文本文件，包括行数和列数
void writeMatrixToBinaryFile(const std::vector<std::vector<int> >& matrix, const std::string& filename) {
    std::ofstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "无法打开文件" << std::endl;
        return;
    }

    int rows = matrix.size();
    int cols = matrix[0].size();

    // 先写入矩阵的行数和列数
    file.write(reinterpret_cast<const char*>(&rows), sizeof(int));
    file.write(reinterpret_cast<const char*>(&cols), sizeof(int));

    // 然后写入矩阵的数据
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            file.write(reinterpret_cast<const char*>(&matrix[i][j]), sizeof(int));
        }
    }

    file.close();
}

int main() {
    int rows1 = 16;
    int cols1 = 16;
    std::vector<std::vector<int> > matrix1;
    generateRandomMatrix(matrix1, rows1, cols1);
    int rows2 = 16;
    int cols2 = 16;
    std::vector<std::vector<int> > matrix2;
    generateRandomMatrix(matrix2, rows2, cols2);

    writeMatrixToBinaryFile(matrix1, "test1.bin");
    writeMatrixToBinaryFile(matrix2, "test2.bin");
    
    std::cout << "随机矩阵已写入文件" << std::endl;

    return 0;
}
