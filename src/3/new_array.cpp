// new로 배열 할당하기
#include <iostream>

int main() {
    int arr_size;

    std::cout << "array size : ";
    std::cin >> arr_size;

    int* list = new int[arr_size];

    for (int i = 0; i < arr_size; i++) {
        std::cin >> list[i];
    }

    for (int i = 0; i < arr_size; i++) {
        std::cout << i << "th element of list : " << list[i] << std::endl;
    }

    // int가 4바이트라서 4씩 차이나는 연속된 메모리 주소
    // 0x94d000960
    // 0x94d000960
    // 0x94d000964
    // 0x94d000968
    // 0x94d00096c
    std::cout << list << std::endl;
    std::cout << &list[0] << std::endl;
    std::cout << &list[1] << std::endl;
    std::cout << &list[2] << std::endl;
    std::cout << &list[3] << std::endl;

    delete[] list;
    return 0;
}