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

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin>>n;
    if(isPrime(n)){
        cout << "Number is prime : " << n << endl;
    }else{
        cout << "Number is Not prime : " << n << endl;
    }
    }