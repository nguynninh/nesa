#include <iostream>

using namespace std;

int main() {
    double a,b;
    cout << "Nhap chieu day cua hinh chu nhat : ";
    cin >> a;cin.ignore();
    cout << "Nhap chieu rong cua hinh chu nhat : ";
    cin >> b;

    cout << "Dien tich cua hinh chu nhat la " << (a*b) << endl;
    return 0;
}