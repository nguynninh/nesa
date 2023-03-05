#include <iostream>

using namespace std;

void max_min(int *p) {
    int max = *p;
    int min = *p;

    p++;
    if (max < *p) {
        max = *p;
    }
    if (min > *p) {
        min = *p;
    }

    p++;
    if (max < *p) {
        max = *p;
    }
    if (min > *p) {
        min = *p;
    }

    p++;
    if (max < *p) {
        max = *p;
    }
    if (min > *p) {
        min = *p;
    }

    p++;
    if (max < *p) {
        max = *p;
    }
    if (min > *p) {
        min = *p;
    }

    cout << "Max cua mang la : " << max << endl;
    cout << "Min cua mang la : " << min << endl;
}

void min_max(int *p) {
    int max = *p;
    int min = *p;

    if (max < *(p + 1)) {
        max = *(p + 1);
    }
    if (min > *(p + 1)) {
        min = *(p + 1);
    }

    if (max < *(p + 2)) {
        max = *(p + 2);
    }
    if (min > *(p + 2)) {
        min = *(p + 2);
    }

    if (max < *(p + 3)) {
        max = *(p + 3);
    }
    if (min > *(p + 3)) {
        min = *(p + 3);
    }

    if (max < *(p + 4)) {
        max = *(p + 4);
    }

    if (min > *(p + 4)) {
        min = *(p + 4);
    }

    cout << "Max cua mang la : " << max << endl;
    cout << "Min cua mang la : " << min << endl;
}

void max_min2(int *p) {
    int max = *p;
    int min = *p;

    max = (max > *(++p)) ? max : *p;
    min = (min < *p) ? min : *p;
    max = (max > *(++p)) ? max : *p;
    min = (min < *p) ? min : *p;
    max = (max > *(++p)) ? max : *p;
    min = (min < *p) ? min : *p;
    max = (max > *(++p)) ? max : *p;
    min = (min < *p) ? min : *p;

    cout << "Max cua mang la : " << max << endl;
    cout << "Min cua mang la : " << min << endl;
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

    max_min(array);
    min_max(array);
    max_min2(array);
    return 0;
}