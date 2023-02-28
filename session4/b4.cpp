#include <iostream>

using namespace std;

int main() {
    //khai bao bien int va float
    int a = 10;
    float b = 3.14;

    //Khai bao con tro int float void
    int *p_a = &a;
    float *p_b = &b;
    void *p_void;

    cout << "Gia tri bien a: " << a << endl;
    cout << "Gia tri bien b: " << b << endl;

    //tro con tro den bien int va float
    *p_a = 20;
    *p_b = 1.41;

    cout << "Gia tri bien a sau khi qua con cho cua no : " << a << endl;
    cout << "Gia tri bien b sau khi qua con cho cua no : " << b << endl;

    //tro con tro void den int va float
    p_void = &a;
    *static_cast<int*>(p_void) = 30;
    p_void = &b;
    *static_cast<float*>(p_void) = 9.9;

    cout << "Gia tri bien a sau khi thay doi qua con tro void: " << a << endl;
    cout << "Gia tri bien b sau khi thay doi qua con tro void: " << b << endl;
    return 0;
}
