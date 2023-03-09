#include <iostream>

using namespace std;

void chuyen_doi(int number) {
    if (number >= 2 && number <= 7) {
        cout << "Thu " << number << endl;
    } else if (number == 8) {
        cout << "Chu nhat" << endl;
    } else {
        cout << "Khong co thu nao tuong ung vs so ban vua nhap" << endl;
    }
}

int main() {
    cout << "Hay nhap mot so nguyen : ";
    int number;
    cin >> number;
    chuyen_doi(number);
}
