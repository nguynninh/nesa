#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "Ax + B = 0" << endl;
    cout << "Nhap he so a cua phuong trinh : ";
    cin >> a;cin.ignore();
    cout << "Nhap he so b cua phuong trinh : ";
    cin >> b;

    if (a==0) {
        if (b==0) {
            cout << "Phuong trinh vo so nghiem ";
        }else {
            cout << "Phuong trinh vo nghiem";
        }
    }else {
        cout << "Phuong trinh co nghiem la : " << (double) -b/a;
    }
    return 0;
}