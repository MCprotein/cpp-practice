// 참조자를 반환하는데 그 참조자의 원본이 함수가 끝나면 사라짐
// 이것처럼 레퍼런스는 있는데 원래 참조하던것이 사라진 레퍼런스를 댕글링
// 레퍼런스라고 한다.
int& function() {
    int a = 2;
    return a;
}

int main() {
    int b = function();
    b = 3;
    return 0;
}