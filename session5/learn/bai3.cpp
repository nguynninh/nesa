#include <iostream>

using namespace std;

int tong_cac_vi_tri_le(int *array){
    return array[0] + array[2] + array[4];
}

int* input_array(int array,int n){
    int max_min[2];
    for (int i = 0; i < n; ++i) {

    }
}

int main () {
    int array[5];
    cout << "nhap cac phan tu cua mang cach nhau 1 phim cach " << endl;
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4];
    cout << tong_cac_vi_tri_le(array);
    return  0;
}
