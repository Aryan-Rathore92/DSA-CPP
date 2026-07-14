#include<iostream>
using namespace std;

int main() {
    int arr[5];
    int x =5;
    cout << arr << endl; // 0x61fef8
    // arr = &x; // Not possible [expression must be a modifiable lvalue]
    return 0;
}