#include <iostream>

using namespace std;

void input_array(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Nhap phan tu thu " << i + 1 << " la : ";
        cin >> array[i];
    }
}

bool mang_tang_dan(int *array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (array[i] > array[i + 1]) {
            return 0;
        }
    }
    return 1;
}

void print_mang_tang_dan(int *array, int size) {
    if (mang_tang_dan(array, size) == 1) {
        cout << "Co" << endl;
    } else {
        cout << "Khong" << endl;
    }
}

int main() {
    cout << "Nhap bo nho cua mang : ";
    int size;
    cin >> size;
    int array[size];
    input_array(array, size);

    print_mang_tang_dan(array, size);
}