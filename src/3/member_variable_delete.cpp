#include <iostream>

/**
 * ./run.sh -c 3 -f member_variable_delete
컴파일: g++ src/3/member_variable_delete.cpp -o dist/member_variable_delete
실행: dist/member_variable_delete
---
member_variable_delete(91349,0x1f1346080) malloc: *** error for object
0x16f15ea68: pointer being freed was not allocated
member_variable_delete(91349,0x1f1346080) malloc: *** set a breakpoint in
malloc_error_break to debug
./run.sh: line 30: 91349 Abort trap: 6           ./dist/$FILENAME
 */

int main() {
    int a = 5;

    delete &a;
    return 0;
}