#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i]; // Input array
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << endl; // Output array
    }
    
    return 0;
}