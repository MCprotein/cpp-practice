#include <string.h>

class string {
    char* str;
    int len;

   public:
    string(char c, int n);  // 문자 c 가 n 개 있는 문자열로 정의
    string(const char* s);
    string(const string& s);
    ~string();

    void add_string(const string& s);   // str 뒤에 s 를 붙인다.
    void copy_string(const string& s);  // str 에 s 를 복사한다.
    int strlen();                       // 문자열 길이 리턴
};

string::string(char c, int n) {
    len = n;

    str = new char[len + 1];
    for (int i = 0; i < len; i++) {
        str[i] = c;
    }
}

string::string(const char* s) {

    len = ::strlen(s) + 1;
    str = new char[len];
    ::strcpy(str, s);
}

string::string(const string& s) {
    len = s.len;
    str = new char[len];
    ::strcpy(str, s.str);
}

string::~string() {
    if (str) delete[] str;
}

void string::add_string(const string& s) {
    len = len + s.len - 1;
    char* new_str = new char[len];
    ::strcpy(new_str, str);
    ::strcat(new_str, s.str);
    delete[] str;
    str = new_str;
}

void string::copy_string(const string& s) {
    len = s.len;
    char* new_str = new char[len];
    ::strcpy(new_str, s.str);
    delete[] str;
    str = new_str;
}

int string::strlen() { return ::strlen(str); }