#include <iostream>

using namespace std;

void input_array(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Nhap phan tu thu " << i + 1 << " la : ";
        cin >> array[i];
    }
}

int max(int *array, int size) {
    int max = array[0];
    for (int i = 0; i < size; ++i) {
        if (max<array[i]) {
            max = array[i];
        }
    }
    return max;
}

int min(int *array, int size) {
    int min = array[0];
    for (int i = 0; i < size; ++i) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    cout << "Nhap bo nho cua mang : ";
    int size;
    cin >> size;
    int array[size];
    input_array(array, size);
    cout << "================================" << endl;
    cout << "Max cua mang tren la : " << max(array, size) << endl;
    cout << "Min cua mang tren la : " << min(array, size) << endl;
}