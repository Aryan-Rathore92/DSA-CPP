#include<iostream>
using namespace std;

int search(int arr[], int n){
   int elem;
   cout << "Enter the value of element: ";
   cin >> elem;

   for(int i=0; i<n; i++){
     if(arr[i] == elem){
          cout << "Element is present and value is " << elem << "and index is "<< i << endl;
          break;
     }
   }
   cout << "Element is not present";
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    search(arr, n);
    return 0;
}