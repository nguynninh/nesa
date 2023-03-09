#include <iostream>

using namespace std;

void chuyen_doi(int number) {
    string text[11] = {"nought", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    cout << "Chu do trong tieng anh la " << text[number] << endl;
}

int main() {
    cout << "Hay nhap mot so nguyen : ";
    int number;
    cin >> number;
    chuyen_doi(number);
}
