#include <iostream>

using namespace std;

int main() {
    int array[5];

    cout << "Nhap gia tri cua phan tu thu 1 la : " ;cin >> array[0];
    cout << "Nhap gia tri cua phan tu thu 2 la : " ;cin >> array[1];
    cout << "Nhap gia tri cua phan tu thu 3 la : " ;cin >> array[2];
    cout << "Nhap gia tri cua phan tu thu 4 la : " ;cin >> array[3];
    cout << "Nhap gia tri cua phan tu thu 5 la : " ;cin >> array[4];

    cout << "Gia tri cua pham tu thu 1 la : " << array[0] << endl;
    cout << "Dia chi cua pham tu thu 1 la : " << &array[0] << endl;
    cout << "Gia tri cua pham tu thu 1 la : " << array[1] << endl;
    cout << "Dia chi cua pham tu thu 1 la : " << &array[1] << endl;
    cout << "Gia tri cua pham tu thu 1 la : " << array[2] << endl;
    cout << "Dia chi cua pham tu thu 1 la : " << &array[2] << endl;
    cout << "Gia tri cua pham tu thu 1 la : " << array[3] << endl;
    cout << "Dia chi cua pham tu thu 1 la : " << &array[3] << endl;
    cout << "Gia tri cua pham tu thu 1 la : " << array[4] << endl;
    cout << "Dia chi cua pham tu thu 1 la : " << &array[4] << endl;

    return 0;
}
