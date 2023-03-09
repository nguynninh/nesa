#include <iostream>

using namespace std;

void chuyen_doi(int number) {
    switch (number) {
        case 0:
            cout << "nought" << endl;
            break;
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            break;
        case 9:
            cout << "nine" << endl;
            break;
        case 10:
            cout << "ten" << endl;
    }
}

int main() {
    cout << "Hay nhap mot so nguyen : ";
    int number;
    cin >> number;
    cout << "Chu do trong tieng anh la ";
    chuyen_doi(number);
}
