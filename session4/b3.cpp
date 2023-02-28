//Khai báo 2 con trỏ, và 1 biến thường.
// Sau đó viết 1 hàm truyền vào 2 con trỏ đó và trả về con trỏ nào có giá trị lớn hơn.
// Con trỏ có giá trị lớn hơn này tham chiếu tới biến thường phía trên rồi thay đổi
// giá trị của nó thành một giá trị, giá trị được thay đổi này sẽ được nhập từ phía người dùng.
#include <iostream>

using namespace std;

bool so_sanh(int &x, int &y) {
    return &x > &y;
}

int main() {
    int *x;
    int *y;
    int z = 10;
    cout << "Gia tri cua bien truoc khi thay doi la " << z << endl;
    if (so_sanh(*x,*y)){
        x = &z;
        cout << "Nhap gia tri can thay doi qua bien 1 la : " ;
        cin >> *x;
    }else {
        y = &z;
        cout << "Nhap gia tri can thay doi qua bien 2 la : " ;
        cin >> *y;
    }
    cout << "\n";
    cout << "Gia tri sau khi thay doi la : " << z <<endl;
    return 0;
}