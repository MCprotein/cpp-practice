#include <iostream>

int& test(int& a) {
    a += 1;

    return a;
}

int main() {
    int a = 1;
    int& b = test(a);
    int c = test(a);
    int d = test(a);
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    return 0;
}