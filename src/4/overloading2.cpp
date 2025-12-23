#include <iostream>

void print(int x) { std::cout << "int : " << x << std::endl; }
// void print(char x) { std::cout << "char : " << x << std::endl; }
void print(double x) { std::cout << "double : " << x << std::endl; }

int main() {
    int a = 1;
    // char에 일치하는 인자를 가지는 함수가 없어서 "자신과 최대로 근접한 함수"를
    // 찾는다.
    char b = 'c';
    double c = 3.2f;

    print(a);
    print(b);
    print(c);
}