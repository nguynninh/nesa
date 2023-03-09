#include <iostream>

using namespace std;

int dem_so_luong_chu_so(int number) {
    int count = 0;
    while (number != 0) {
        count++;
        number /= 10;
    }
    return count;
}

int main() {
    cout << "Hay nhap mot so nguyen duong : ";
    int number;
    cin >> number;

    cout << "So luong chu so vua nhap la : " << dem_so_luong_chu_so(number) << endl;
}
