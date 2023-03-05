#include <iostream>

using namespace std;

void in_ra_mang(int *array) {
    cout << "[ " << array[0] << ", " << array[1] << ", " << array[2] << ", " << array[3] << ", " << array[4] << " ]"<< endl;
}

void sap_xep_tang_dan(int *p) {
    if (*p > *(p + 1)) {
        int tmp = *p;
        *p = *(p + 1);
        *(p + 1) = tmp;
    }
    if (*(p + 1) > *(p + 2)) {
        int tmp = *(p + 1);
        *(p + 1) = *(p + 2);
        *(p + 2) = tmp;
    }
    if (*(p + 2) > *(p + 3)) {
        int tmp = *(p + 2);
        *(p + 2) = *(p + 3);
        *(p + 3) = tmp;
    }

    if (*(p + 3) > *(p + 4)) {
        int tmp = *(p + 3);
        *(p + 3) = *(p + 4);
        *(p + 4) = tmp;
    }
    if (*p > *(p + 1)) {
        int tmp = *p;
        *p = *(p + 1);
        *(p + 1) = tmp;
    }
    if (*(p + 1) > *(p + 2)) {
        int tmp = *(p + 1);
        *(p + 1) = *(p + 2);
        *(p + 2) = tmp;
    }
    if (*(p + 2) > *(p + 3)) {
        int tmp = *(p + 2);
        *(p + 2) = *(p + 3);
        *(p + 3) = tmp;
    }
    if (*p > *(p + 1)) {
        int tmp = *p;
        *p = *(p + 1);
        *(p + 1) = tmp;
    }
    if (*(p + 1) > *(p + 2)) {
        int tmp = *(p + 1);
        *(p + 1) = *(p + 2);
        *(p + 2) = tmp;
    }
    if (*p > *(p + 1)) {
        int tmp = *p;
        *p = *(p + 1);
        *(p + 1) = tmp;
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

    cout << "truoc khi sap xep tang dan " << endl;
    in_ra_mang(array);

    cout << "Sau khi sap xep tang dan " << endl;
    sap_xep_tang_dan(array);
    in_ra_mang(array);
    return 0;
}