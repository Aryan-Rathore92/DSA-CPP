#include<iostream>
#include<climits>
using namespace std;

void trappingRainWater(int *height, int n){
    int leftMax[20000], rightMax[20000];
    int totalTrapped = 0;
    leftMax[0] = INT_MIN;
    rightMax[n-1] = INT_MIN;

    for(int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], height[i-1]);
    }

    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], height[i+1]);
    }

    for(int i=0; i<n; i++){
        int waterTrap = min(leftMax[i], rightMax[i]) - height[i];
        totalTrapped += waterTrap;
    }
    cout << totalTrapped;
}

int main(){
    int height[7] = {4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(int);
    trappingRainWater(height,n);
    return 0;
}