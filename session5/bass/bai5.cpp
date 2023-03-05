#include <iostream>

using namespace std;

void tim_vi_tri_cua_so_10(int *array) {
    if (*array == 10 || *(array + 1) == 10 || *(array + 2) == 10 || *(array + 3) == 10 || *(array + 4) == 10) {
        if (*array == 10) {
            cout << " so 1";
        }
        if (*(array + 1) == 10) {
            cout << " so 2";
        }
        if (*(array + 2) == 10) {
            cout << " so 3";
        }
        if (*(array + 3) == 10) {
            cout << " so 4";
        }
        if (*(array + 3) == 10) {
            cout << " so 5";
        }
    } else {
        cout << "Khong co so 10 nao trong mang " << endl;
    }
}

int main() {
    int array[5];

    cout << "Nhap gia tri cua phan tu thu 1 la : ";
    cin >> array[0];
    cout << "Nhap gia tri cua phan tu thu 2 la : ";
    cin >> array[1];
    cout << "Nhap gia tri cua phan tu thu 3 la : ";
    cin >> array[2];
    cout << "Nhap gia tri cua phan tu thu 4 la : ";
    cin >> array[3];
    cout << "Nhap gia tri cua phan tu thu 5 la : ";
    cin >> array[4];

    tim_vi_tri_cua_so_10(array);
}