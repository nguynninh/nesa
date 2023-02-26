#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, delta, x1, x2;

    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        cout << "Phuong trinh vo nghiem." << endl;
    } else if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        cout << "Phuong trinh co nghiem kep x1 = x2 = " << x1 << endl;
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Phuong trinh co hai nghiem phan biet x1 = " << x1 << " va x2 = " << x2 << endl;
    }

    return 0;
}
