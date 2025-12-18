// 변수의 정의
#include <iostream>

int main() {
    int i;
    char c;
    double d;
    float f;

    int arr[10];
    int* parr = arr;
    int j;
    int* pj = &j;
    std::cout << arr << " " << parr << std::endl
              << j << " " << &j << " " << pj << std::endl;

    return 0;
}