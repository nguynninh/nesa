#include <iostream>

using namespace std;

void doicho(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 9;
    int b = 10;
    doicho(&a,&b);
    cout << "a=" << a << ", b= " << b;

//    int a = 10;
//    cout << "*a=" << a << endl;
//    cout << "&a=" << &a << endl;
//    int *p;
//    p = &a;
//    *p=2;
//    cout << "*p=" << p << endl;
//    cout << "&p=" << &p << endl;
//    cout << "*a=" << a << endl;
//    int **s = &p;
//    cout << "*s" << *s << endl;
//    cout << "**s=" << **s << endl;
//    cout << "**&s=" << **&s << endl;
    return 0;
}

