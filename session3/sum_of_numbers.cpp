#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    // cout << "Tong cac chu so trong chuoi la : " << sum1(number) << endl;
    cout << "Tong cac chu so trong chuoi la : " << sum2(number) << endl;
    return 0;
}

int sum1(int number){
    int sum = 0;
    while (n!=0) {
        sum += n/10;
        n /= 10;
    }
    return sum;
}

int sum2(int number){
    int a = number / 100000;
    int b = (number / 10000) % 10;
    int c = (number / 1000) % 10;
    int d = (number / 100) % 10;
    int e = (number / 10) % 10;
    int f = number % 10;
    return a+b+c+d+e+f;
}