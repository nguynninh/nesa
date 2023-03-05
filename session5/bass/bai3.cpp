#include <iostream>

using namespace std;

int tong_cac_vi_tri_le(int *array){
    return array[0] + array[2] + array[4];
}

int main() {
    int array[5];

    cout << "Nhap gia tri cua phan tu thu 1 la : " ;cin >> array[0];
    cout << "Nhap gia tri cua phan tu thu 2 la : " ;cin >> array[1];
    cout << "Nhap gia tri cua phan tu thu 3 la : " ;cin >> array[2];
    cout << "Nhap gia tri cua phan tu thu 4 la : " ;cin >> array[3];
    cout << "Nhap gia tri cua phan tu thu 5 la : " ;cin >> array[4];

    tong_cac_vi_tri_le(array);
    return 0;
}