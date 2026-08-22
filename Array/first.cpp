#include<iostream>
using namespace std;

int nums[10];
int main(){
    
    // std::fill(name, name+1000000, 5); // This will fill entire array with a number is 5
    // cout << name[5]<< endl;
    // cout << name[1]<< endl;
    // cout << name[10]<< endl;
    std::fill(nums, nums+10, 5);
    for(int i=0; i<10; i++){
        cout << nums[i] << " ";
    }
}