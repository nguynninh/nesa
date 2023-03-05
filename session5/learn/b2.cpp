#include <iostream>

using namespace std;

void min(int *p){
    int min = *p; //min= 1
    if (min >= *(p++)){
        min = *p;
    }
}
int main() {
    int arr[5] = {1,2,3,4,5};
    min(arr);
}
