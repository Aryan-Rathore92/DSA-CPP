#include<iostream>
using namespace std;

// Book Allocation
int arr[10] = {10,20,30,40,50,60,70,80,90,100};
bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
              return false;
            } 
            pageSum = arr[i];
        }
    }
    return true;
}
int findPages(int arr[], int n, int m) {
    int sum = 0;
    int s = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    if(m > n) return -1;
    return ans;
}
int main(){
  cout << findPages(arr, 10,5);
}