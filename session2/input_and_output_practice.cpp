#include <iostream>

using namespace std;

int main() {
    int value1;
    cout << "Nhap gia tri thu nhat : ";
    cin >> value1;cin.ignore();
    double value2;
    cout << "Nhap gia tri thu hai : ";
    cin >> value2;cin.ignore();
    long value3;
    cout << "Nhap gia tri thu ba : ";
    cin >> value3;

    cout << "Gia tri thu nhat duoc nhap kieu int : " << value1 << endl;
    cout << "Gia tri thu nhat duoc nhap kieu double : " << value1 << endl;
    cout << "Gia tri thu nhat duoc nhap kieu long : " << value1 << endl;
}