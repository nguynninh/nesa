#include <iostream>

using namespace std;

void input_array(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Nhap phan tu thu " << i + 1 << " la : ";
        cin >> array[i];
    }
}

int tong_array(int *array, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}

int tich_array(int *array, int size) {
    int tich = 1;
    for (int i = 0; i < size; ++i) {
        tich *= array[i];
    }
    return tich;
}

int trung_binh_array(int *array, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / (double) size;
}

int main() {
    cout << "Nhap bo nho cua mang : ";
    int size;
    cin >> size;
    int array[size];
    input_array(array, size);
    cout << "================================" << endl;
    int tong = tong_array(array, size);
    int tich = tich_array(array, size);
    double trung_binh = trung_binh_array(array, size);
    cout << "tong cua mang tren la : " << tong << endl;
    cout << "tich cua mang tren la : " << tich << endl;
    cout << "trung binh cua mang tren la : " << trung_binh << endl;
}