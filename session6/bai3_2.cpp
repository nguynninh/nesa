#include <iostream>

using namespace std;

void input_array(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Nhap phan tu thu " << i + 1 << " la : ";
        cin >> array[i];
    }
}

void sap_xep(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size; ++j) {
            if (array[i] > array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int tan_suat_xuat_hien(int *array, int size) {
    int count = 1;
    for (int i = 0; i < size; ++i) {
        if (array[i] == array[i + 1]) {
            count++;
        } else {
            cout << "Tan so xuat hien cua so " << array[i] << " la " << count << endl;
            count = 1;
        }
    }
}

int main() {
    cout << "Nhap bo nho cua mang : ";
    int size;
    cin >> size;
    int array[size];
    input_array(array, size);

    sap_xep(array, size);

    tan_suat_xuat_hien(array, size);
}
