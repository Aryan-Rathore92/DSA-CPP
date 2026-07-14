#include<iostream>
using namespace std;

int main() {
    // First Experiment
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int *ptr = &arr[0];
    cout << arr << endl;
    cout << ptr << endl;
    // ptr++; // add 4 Byte in integer ptr
    ptr--; // remove 4 Byte from integer ptr
    cout << ptr << endl;

    // Second Experiment
    int a = 10;
    int *iptr = &a;
    cout << iptr << endl; // 0x61fee0
    iptr++;
    cout << iptr << endl; // 0x61fee4
    iptr--;
    cout << iptr << endl; // 0x61fee0

    return 0;
}