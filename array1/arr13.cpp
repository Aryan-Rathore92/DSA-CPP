#include<iostream>
using namespace std;


int main() {
    int arr[]= {1,2,3,4,5};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;
    // cout << (ptr2 > ptr1) << endl; // 1
    // cout << (ptr2 < ptr1) << endl; // 0
    // cout << (ptr1 == arr) << endl; // 1
    return 0;
}