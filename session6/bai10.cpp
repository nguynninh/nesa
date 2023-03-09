#include <iostream>

using namespace std;

void input_array(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Nhap phan tu thu " << i + 1 << " la : ";
        cin >> array[i];
    }
}

void doi_cho(int *array, int left, int right) {
    int tmp = array[left - 1];
    array[left - 1] = array[right - 1];
    array[right - 1] = tmp;
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

    cout << "Doi cho 2 pha tu trong mang " << endl;
    cout << "Vi tri cua phan tu thu nhat : ";
    int left;
    cin >> left;
    cout << "Vi tri cua phan tu thu hai : ";
    int right;
    cin >> right;
    doi_cho(array, left, right);
    print_array(array, size);
}