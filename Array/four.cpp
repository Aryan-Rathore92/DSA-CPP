#include<iostream>
#include <array>
using namespace std;

// Two Sum
// int arr[9] = {1,2,3,4,5,6,7,8,9};
// int twoSum(int arr[], int size){
//    for(int i=0; i<size; i++){
//       for(int j=i+1; j<size; j++){
//         if(arr[i]+arr[j] == 9){
//             cout << "Index of i is : "<< i << endl;
//             cout << "Index of j is : "<< j << endl;
//             exit(0);
//         }
//       }
//    }
// }

// Sort 0 & 1 Question
int arr[8] = {1,1,1,1,0,0,0,0};
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
int sort0and1(int arr[], int n){
    int left = 0, right = n-1;
    while(left < right){
        while(arr[left] == 0 && left < right) left++;
        while(arr[right] == 1 && left < right) right--;
        if(left < right){
            swap(arr[left], arr[right]);
        }

    }
}

int main() {
    // twoSum(arr, 9);
    sort0and1(arr, 8);
    printArray(arr,8);
}