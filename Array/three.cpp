#include<iostream>
#include <array>
using namespace std;

// int arr[6] = {10,20,30,40,50,60};
// int alternateSwap(int arr[], int size){ // Swap alternate Question
//     for(int i=0; i<size; i = i+2){
//         if(i+1 < size){
//         //   swap(arr[i], arr[i+1]);
//         int temp = arr[i+1];
//         arr[i+1] = arr[0];
//         arr[0] = temp;
//         }
//     }
// }
// void printArray(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout << arr[i] << " ";
//     }
// }

// Find Unique Element of Array
  // int arr[8] = {1,2,3,4,3,2,1,2};
  //  int unique(int arr[], int size){
  //   int ans = 0;
  //   for(int i=0; i<size; i++){
  //       ans = ans^arr[i];
  //   }
  //   return ans;
  //  }

  // Leetcode--- 1207. Unique Number of Occurrences
  // Leetcode-287. Find duplicate elem in array
  // int arr[5] = {1,3,4,1,2};
  // int duplicate(int arr[], int size){
  //   for(int i=0; i<size; i++){
  //     for(int j=i+1; j<size; j++){
  //       if(arr[i]==arr[j]){
  //         cout << arr[i];
  //         break;
  //       }
  //     }
  //   }
  // }

  // Leetcode-442. Find all duplicate elem in array
  int arr[9] = {1,2,2,3,3,4,7,8,8};
  int allDuplicate(int arr[], int size){
      int newArr[10];
      int j = 0;
      for(int i=0; i<(size-1); i++){
        if(arr[i] == arr[i+1]){
          newArr[j] = arr[i];
          j++;
        }
      }
      for(int i=0; i<j; i++){
        cout << newArr[i] << endl;
      }
  }
     
int main(){
  //   alternateSwap(arr,6);
  //    printArray(arr,6);

  // int ans = unique(arr,8);
  // cout << ans;

  // duplicate(arr,5);

  allDuplicate(arr,9);
 }