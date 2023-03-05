#include <iostream>
#include <cstdio>
using namespace std;
void print_number(int n){
    switch (n) {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
    }
}
int main() {
    // Complete the code.
    int n;
    cin >> n;cin.ignore();
    int n2;
    cin >> n2;cin.ignore();
    if (n >= 1 || n <= 9){
        for (int i = n; i <= n2; i++) {
            print_number(i);
        }
    }else if(n % 2 == 0){
        cout << "even";
    }else {
        cout << "odd";
    }
    return 0;
}