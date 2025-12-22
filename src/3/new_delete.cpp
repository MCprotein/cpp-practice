#include <iostream>

int main() {
    int* p = new int;
    *p = 10;

    // 스택 메모리에서는 주소 &p에 힙 메모리 주소 p값이 저장되어있고,
    // 힙 메모리에서는 주소 p에 10이 저장되어있다.

    // 포인터 변수 (주소를 담고 있음) -> 힙 메모리 주소
    std::cout << p << std::endl;
    // p가 가리키는 곳의 값 (역참조) -> 값
    std::cout << *p << std::endl;
    // 포인터 변수 p 자체의 주소 -> 스택 메모리 주소
    std::cout << &p << std::endl;

    delete p;
    return 0;
}