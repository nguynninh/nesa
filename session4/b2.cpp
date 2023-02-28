#include <iostream>

using namespace std;

void doi_cho_a_va_b(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a, b;
    cout << " Nhap so nguyen 1 la : ";
    cin >> a;
    cout << "Nhap so nguyen b la : ";
    cin >> b;
    cout << "\n";
    cout << "So nguyen thu 1 khi nhap la : " << a << endl;
    cout << "So nguyen thu 2 khi nhap la : " << b << endl;
    cout << "\n";
    doi_cho_a_va_b(&a, &b);
    cout << "So nguyen thu 1 sau khi nhap la : " << a << endl;
    cout << "So nguyen thu 2 sau khi nhap la : " << b << endl;
    return 0;
}
