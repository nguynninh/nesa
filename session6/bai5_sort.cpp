#include <iostream>

using namespace std;

void input_array(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Nhap phan tu thu " << i + 1 << " la : ";
        cin >> array[i];
    }
}

void sap_xep_tang(int *array, int size) {
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

void sap_xep_giam(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size; ++j) {
            if (array[i] < array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}


void print_array(int *array, int size) {
    cout << "[" << array[0] << ",";
    for (int i = 1; i < size - 1; ++i) {
        cout << " " << array[i] << ",";
    }
    cout << " " << array[size - 1] << "]";
    cout << endl;
}

int main() {
    cout << "Nhap bo nho cua mang : ";
    int size;
    cin >> size;
    int array[size];
    input_array(array, size);
    print_array(array, size);

    sap_xep_tang(array, size);
//    sap_xep_giam(array,size);

    print_array(array, size);
}
