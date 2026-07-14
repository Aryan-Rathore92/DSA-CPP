#include<iostream>
using namespace std;

int main() {
    int arr1[5];
    int arr2[] = {1,2,3,4,5};
    int arr3[10] = {1,2,3,4,5}; // garbage value
    
    cout << arr1[1] << endl; // 1986759709
    cout << arr2[1] << endl; // 2
    cout << arr3[1] << endl; // 2
    return 0;
}