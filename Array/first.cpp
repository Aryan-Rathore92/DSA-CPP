#include<iostream>
using namespace std;

int arr[5] = {1,2,3,4,5};
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    
    // std::fill(name, name+1000000, 5); // This will fill entire array with a number is 5
    // cout << name[5]<< endl;

    // fill complete array with same element
    // std::fill(nums, nums+10, 5);
    // for(int i=0; i<10; i++){
    //     cout << nums[i] << " ";
    // }

    // Calculate size of array
    // int size = sizeof(nums)/sizeof(int);
    // cout << size << endl;

    int size = sizeof(arr)/sizeof(int);
    printArray(arr,size); // 1 2 3 4 5 

    double firstdouble[5];
    float firstFloat[5];
    bool firstBool[5];

}