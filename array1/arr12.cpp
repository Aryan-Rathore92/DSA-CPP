#include<iostream>
using namespace std;


int main() {
    int arr[5] = {1,2,3,4,5};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;
    cout << ptr2 << endl; // 0x61ff00
    cout << ptr1 << endl; // 0x61fef4
    cout << ptr2 - ptr1; // 3 [12 bytes]
    return 0;
}