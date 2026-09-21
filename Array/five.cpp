#include<iostream>
using namespace std;

// int arr[10] = {10, 40, 50, 60, 70, 90, 100, 120, 200, 300};
// int binarySearch(int arr[], int n, int key){
//     int start = 0;
//     int end = n-1;
//     int mid = (start+end)/2;
//     while(start <= end){
//         if(arr[mid] == key) return mid;

//         if(key > arr[mid]){
//             start = mid+1; // for the right part of array
//         }else{
//             end = mid-1; // (arr[mid] > key) // for the left part of array
//         }

//         mid = (start+end)/2;
//     }
//     return -1;
// }

// Leetcode ----- 724
// int arr[5] = {3,8,10,17,1};
// int getPovet(int arr[], int n){
//      int s = 0;
//      int e = n-1;
//      int m = s + (e-s)/2;
//      while(s < e){
//         if(arr[m] >= arr[0]){
//             s = m+1;
//         }else{
//             e = m;
//         }
//         m = s + (e-s)/2;
//      }
//      cout << s << endl;
// }

// SquareRoot of a number
   long long int sqaureRoot(int n){
      int s = 0;
      int e = n;
      long long int m = s + (e-s)/2;
      long long int ans = -1;
      while(s <= e){
        long long int square = m*m;
        if(square == n){
            return m;
        }else if(square < n){
            ans = m;
            s = m+1;
        }else if(square > n){
            e = m-1;
        }
        m = s + (e-s)/2;
      }
      return ans;
    }

double morePrecision(int n, int precison, int tempSol){ // calculate digit after decimal link -- 0.1, 0.01, 0.001
   double factor = 1;
   double ans = tempSol;

   for(int i=0; i<precison; i++){
        factor = factor/10;

        for(double j=ans; j*j < n; j = j+factor){
            ans = j;
        }
   }
   return ans;
}

int main(){
    // int res = binarySearch(arr, 10, 3);
    // cout << "Index of the result is : " << res << endl;

    // getPovet(arr,5);

    int n;
    cout << "Enter the number : ";
    cin>>n;

    int tempSol = sqaureRoot(n);
    cout << "Answer is : " << morePrecision(n, 3, tempSol) << endl;


}