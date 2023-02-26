#include <iostream>

using namespace std;

int main(){
    int num1;
    cout << "Nhap so thu nhat : ";
    cin >> num1;cin.ignore();
    int num2;
    cout << "Nhap so thu nhat : ";
    cin >> num2;cin.ignore();
    int num3;
    cout << "Nhap so thu nhat : ";
    cin >> num3;cin.ignore();
    int num4;
    cout << "Nhap so thu nhat : ";
    cin >> num4;cin.ignore();
    int max = num1;
    int min = num1;
    
    if (max < num2){
        max = num2;
    }
    if (min > num2){
        min = num2;
    }

    if (max < num3){
        max = num3;
    }
    if (min > num3){
        min = num3;
    }

    if (max < num3){
        max = num3;
    }
    if (min > num3){
        min = num3;
    }

    if (max < num4){
        max = num4;
    }
    if (min > num4){
        min = num4;
    }

    cout << "Max : " << max << endl;
    cout << "Min : " << min << endl;
    cout << "Trung binh : " << (num1 + num2 + num3 + num4) / 4 << endl;
    return 0;
}