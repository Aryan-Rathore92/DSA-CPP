#include<iostream>
using namespace std;

int printArr(int *ptr, int n){
  for(int i=0; i<n; i++){
    cout << ptr[i] << ",";
  }
  cout << endl;
}


int main() {
    int arr[]= {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    int start = 0, end = n-1;

    while(start < end){
      // swap(arr[start], arr[end]);

        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }

    printArr(arr,n);
    return 0;
}