#include<iostream>
using namespace std;

// int check[100];
// int getMax(int arr[], int size){
//     int maxValue = INT8_MIN;
//     for(int i=0; i<size; i++){

//         maxValue = max(maxValue, arr[i]); // In-built function max
//     //    if(max < arr[i]){
//     //       max = arr[i];
//     //    }
//    }
//    return maxValue;
// }
// int getMin(int arr[], int size){
//     int minValue = INT8_MAX;
//     for(int i=0; i<size; i++){

//         minValue = min(minValue, arr[i]); // In-built function min
//     //    if(min > arr[i]){
//     //       min = arr[i];
//     //    }
//    }
//    return minValue;
// }

// Array's Scope
//    int arr[100];
//    int update(int arr[], int size){
//     cout << "Enter in function" << endl;
//     arr[0] = 100;
//      for(int i=0; i<size; i++){
//         cout << arr[i] << " "; // 100 2 3 4 5
//      }
//      cout << endl;
//      cout << "Going to main function" << endl;
//    }

// Question--- Sum of elements of array
    //  int arr[100];
    //  int sumOfArrayElements(int arr[], int size){
    //     int sum = 0;
    //     for(int i=0; i<size; i++){
    //         sum += arr[i];
    //     }
    //     return sum;
    //  }

// Question--- Linear Saerch
    // int arr[100];
    // int linearSearch(int arr[], int size){
    //     int elem;
    //     cout << "Enter the searching element";
    //     cin>>elem;
    //     for(int i=0; i<size; i++){
    //         if(elem == arr[i]){
    //             cout << "true" << endl;
    //             exit(0);
    //         }
    //     }
    //     cout << "False" << endl;
    // }

    // Reverse an Array
    // int arr[100] = {1,2,3,4,5};
    // method---01
    //   int reverseArray(int arr[], int size){
    //     int reverse[100];
    //     int j = 0;
    //     for(int i = (size-1); i>=0; i--){
    //         reverse[i] = arr[j];
    //         j++;
    //     }
    //     for(int i=0; i<size; i++){
    //         cout << reverse[i] << " ";
    //     }
    //   }

    // method---02
       int arr[100] = {1,2,3,4,5};
       int reverseArray(int arr[], int size){
        int start = 0;
        int end = size-1;
        while(start <= end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
       }
       void printArray(int arr[], int size){
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
       }

int main(){
    // int size;
    // cout << "Enter the size of array, that should be leass than 100 ";
    // cin>>size;

    // for(int i=0; i<size; i++){
    //     cin>>check[i];
    // }
    // cout<< "Maximum is : " << getMax(check,size) << endl;
    // cout<< "Minimum is : " << getMin(check,size) << endl;

    // int size;
    // cin>>size;
    // for(int i=0; i<size; i++){
    //     cin>>arr[i];
    // }
    // update(arr,size);

    // for(int i=0; i<size; i++){
    //     cout << arr[i] << " "; // 100 2 3 4 5
    // }

    // int size;
    // cin>>size;

    // for(int i=0; i<size; i++){
    //     cin>>arr[i];
    // }
    // cout << "Sum of array elements is: " << sumOfArrayElements(arr,size) << endl;
    

    // int size;
    // cin>>size;

    // for(int i=0; i<size; i++){
    //     cin>>arr[i];
    // }
    // linearSearch(arr,size);

    reverseArray(arr,5);
    printArray(arr,5);
}