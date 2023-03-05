#include <iostream>

using namespace std;

int main() {
    unsigned int i = 1;
    char* c = reinterpret_cast<char*>(&i);
    if (*c == 1) {
        cout << "Little endian" << endl;
    } else {
        cout << "Big endian" << endl;
    }
    return 0;
}
