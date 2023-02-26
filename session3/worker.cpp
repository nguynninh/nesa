#include <iostream>

using namespace std;

int main() {
    string name;
    cout << "Nhap ho va ten cua cong nhan : ";
    getline(cin,name);
    cout << "Nhap so ngay cong ho lam trong 1 thang : ";
    int worday;
    cin >> workday;cin.ignore();
    cout << "Nhap luong cua moi ngay cong : ";
    int salary;
    cin >> salary;cin.ignore();
    cout << "Nhap so tien da ung trong thang : ";
    int advance_salary;
    cin >> advance_salary;
    cout << "So tien duoc nhan con lai trong thang la :" << (worday*salary-advance_salary) << endl;
    return 0;
}
