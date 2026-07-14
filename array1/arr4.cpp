#include<iostream>
using namespace std;

// void func(int arr[]){ // passing array as refrence
//     arr[2] = 1000;
// }

// void func2(int *ptr){ // This function is also same like func, Here passing address to the pointer
//     ptr[0] = 2000;
// }

void printArr(int nums[], int arrSize){
// cout << "Size of present pointer here: " << sizeof(nums) << endl; // 4

for(int i=0; i<arrSize; i++){
    cout<< nums[i] << endl;
}

}

int main() {
    int arr[] = {1,2,3,4,5};
    // cout << "Size of array is present here: " << sizeof(arr) << endl; // 20
    int n = sizeof(arr)/sizeof(int);
    printArr(arr,n);
    //  func2(arr); // passing array name is equivalent to passing the pointer
     
    return 0;
}