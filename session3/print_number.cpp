#include <iostream>

using namespace std;

bool is_prime(int number){
    if (number < 2) {
        return 0;
    }
    for (int i = 0; i < sqrt(number); i++) {
        if (number % i == 0){
            return 0;
        }
    }
    return 1;
    
}
int main() {
    int n;
    cout << "Nhap so n : ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if(is_prime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}