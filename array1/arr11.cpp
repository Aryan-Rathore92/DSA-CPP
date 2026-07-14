#include<iostream>
using namespace std;

int printArr(int *ptr, int n){
    for(int i=0; i<n; i++){
        cout << (*ptr + i) << ", "; // 1, 2, 3, 4, 5,
        // ptr = ptr + 1; 
    }
}

int main() {
    // First Experiment
    int a = 20;
    int *ptr = &a;
    cout << ptr << endl; // 0x61ff08
    ptr = ptr - 2; // remove 8 byte, because it is integer
    cout << ptr << endl; // 0x61ff00

    // Second Experiment
    int b = 25;
    int *ptr2 = &b;
    cout << ptr2 << endl; // 0x61ff08
    ptr2 += 1; // add 4 byte, because it is integer
    cout << ptr2 << endl; // 0x61ff0c

    // Third Experiment
    int arr1[] = {1,2,3,4,5};
    cout << arr1 << endl; // 0x61fef8
    int *ptr3 = arr1;
    cout << *ptr3 << endl; // 1
    ptr3 = ptr3+1;
    cout << *ptr3 << endl; // 2

    // Fourth Experiment
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printArr(arr,n);
    return 0;
}