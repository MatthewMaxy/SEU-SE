#include "Matrix.cpp"


int main() {
    Matrix x(4, "test1.bin");
    Matrix y(4, "test2.bin");
    Matrix *z = x.mul_ijk(y) ;
    // Matrix *z = x.mul_ikj(y);
    x.print_result();
    y.print_result();
    z->print_result();
    return 0;
}