#include<iostream>
using namespace std;

int main() {
    int arr[10] = {5,4,3,9,22,6,7,1,13,32};
    int large = 0;
    int small = arr[0];
    int length = sizeof(arr)/sizeof(int);

    for(int i=0; i < length; i++){
      if(arr[i] > large){
        large = arr[i];
      }
    }
    for(int i=0; i < length; i++){
      if(small > arr[i]){
        small = arr[i];
      }
    }
    cout <<"Max elem is: " << large << endl;
    cout <<"Small elem is: " <<  small;
    return 0;
}