#include <iostream>

int main() {
    int a = 3;
    /**
     * 참조자
     * 포인터 타입의 참조자: int*&
     * another_a는 a의 또 다른 이름이라고 컴파일러에게 알려주는 것.
     * another_a에 어떠한 작업을 수행하든 이는 사실상 a에 그 작업을 하는 것과
     * 마찬가지이다.
     *
     * 레퍼런스는 반드시 선언과 동시에 초기화되어야 한다.
     * 레퍼런스는 한 번 초기화되면 그 이후에는 더 이상 다른 변수를 가리킬 수
     * 없다.
     *
     * 레퍼런스는 메모리 상에 존재하지 않을 수 도 있다.
     */
    int& another_a = a;

    another_a = 5;
    std::cout << "a : " << a << std::endl;
    std::cout << "another_a : " << another_a << std::endl;

    return 0;
}