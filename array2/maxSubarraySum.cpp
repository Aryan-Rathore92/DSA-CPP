#include<iostream>
#include<climits>
using namespace std;

void maxSubArraySum(int *arr, int n){
    // int maxSum = 0; // This is not good beacuse negative value can be maximum sum, then it will be fail;
    int maxSum = INT_MIN;
    for(int start=0; start < n; start++){
        for(int end=start; end<n; end++){
            int currSum = 0;
            for(int i=start; i<=end; i++){
                 currSum += arr[i];
            }
            // if(currSum > maxSum){
            //     maxSum = currSum;
            // }
            maxSum = max(maxSum, currSum);
        }
    }
    cout << maxSum;
}

int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubArraySum(arr,n);
    return 0;
}