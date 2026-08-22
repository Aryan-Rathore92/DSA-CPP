#include<iostream>
using namespace std;

// int power(int a,int b){ // Calculate power
//      int ans = 1;
//      for(int i=1; i<=b; i++){
//         ans *= a;
//      }
//      return ans;
// }

// bool isEven(int n){
//     if(n&1){
//         return 0; // check even and odd
//     }
//     return 1;
// }

// int factorial(int n){
//    int ans = 1;
//    for(int i=1; i<=n; i++){
//     ans *= i;
//    }
//    return ans;
// } //                        Calculate nCr(combination)
// int nCr(int n, int r){
//     int numerator  = factorial(n);
//     int denominator  = factorial(r)*factorial(n-r);
//     return numerator/denominator;
// }

// 1-> prime
// 0 -> not prime
// bool isPrime(int n){
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }

// Question--01
//    int calculateAP(int n){
//     int ans = (3*n)+7;
//     return ans;
//    }

// Question--02
   int calculateSetBits(int a, int b,int count){
       int ans = a&b;
    while(true){
        if(ans == 0) break;
        int answer = ans&1;
        if(answer){
            count++;
        }
        ans = ans>>1;
    }
    return count;
   }

int main() {
    int a,b,count=0;
    cout<< "Enter the value of a: ";
    cin>>a;
    cout<< "Enter the value of b: ";
    cin>>b;
    int answer = calculateSetBits(a,b,count);
    cout << answer << endl;
}