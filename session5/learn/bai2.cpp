#include <iostream>

using namespace std;

void min_max(int *array) {
    int *p = array;
    int min = *p;
    int max = *p;

    p++;
    if (max < *p) {
        max = array[1];
    }

    if (min > *p) {
        min = array[1];
    }

    p++;
    if (max < *p) {
        max = array[2];
    }

    if (min > *p) {
        min = array[2];
    }

    p++;
    if (max < *p) {
        max = array[3];
    }

    if (min > *p) {
        min = array[3];
    }

    p++;
    if (max < *p) {
        max = array[4];
    }

    if (min > *p) {
        min = array[4];
    }

    cout << "Max cua mang la : " << max << endl;
    cout << "Min cua mang la : " << min << endl;
}

void max_mix(int *array) {

    int n = sizeof(array) - sizeof(array[0]);
    int *p = array;
    int min = *p;
    int max = *p;

    for (int i = 1; i < n + 1; ++i) {
        p++;
        if (max < *p) {
            max = array[i];
        }

        if (min > *p) {
            min = array[i];
        }
    }
    cout << "Max cua mang la : " << max << endl;
    cout << "Min cua mang la : " << min << endl;
}

int* input_array(){
    int *array = new int[5];
    cout << "Nhap lanb luot 5 phan tu cua mang cach nhau boi 1 dau cach : " << endl;
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4];cin.ignore();
    return array;
}

int* input_array(int n) {
    int *array = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    return array;
}

int main() {
    int *array = input_array();
//    int *array = input_array(10);
    min_max(array);
    delete array;
    return 0;
}
