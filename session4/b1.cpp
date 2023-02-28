#include <iostream>

using namespace std;

int main() {
    char a = 'A';
    cout << "Dia chi bien char vua khai bao la : " << &a << endl;
    cout << "Gia tri bien char vua khai bao la : " << a << endl;
    char *p = &a;
    *p = 66;
    cout << "A sau khi doi thanh 66 la : " << a << endl;
    return 0;
}
