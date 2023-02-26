#include <iostream>

using namespace std;

int main() {
    cout << "Nhap gia tri cua i la : ";
    int i;cin >> i;
    cout << "Gia tri cua i la " << i << endl;
    int i1 = i;
    cout << "Gia tri cua i++ la " << i1++ << endl;
    int i2 = i;
    cout << "Gia tri cua ++i la " << ++i2 << endl;
    int i3 = i;
    cout << "Gia tri cua i-- la " << i3-- << endl;
    int i4 = i;
    cout << "Gia tri cua --i la " << --i4 << endl;
    return 0;
}