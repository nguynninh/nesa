#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang : ";
    cin >> n;cin.ignore();
    int array[5];
    for (int i = 0; i < n; ++i) {
        cout << "Nhap phan tu thu " << i+1 << " cua mang : ";
        cin >> array[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << "Gia tri cua pham tu thu " << i+1 << " la : " << array[i] << endl;
        cout << "Dia chi cua pham tu thu " << i+1 << " la : " << &array[i] << endl;
    }
    return 0;
}
