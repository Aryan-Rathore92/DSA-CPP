#include<iostream>
using namespace std;

// method-01
// char isPrime(int num){
//     if(num%2 == 0){
//         cout << "Number " << num << " is an co-prime no.";
//     } else if(num == 1){
//        cout << "Number " << num << " is an co-prime no.";
//     }
//     else{
//         cout << "Number " << num << " is an prime no.";
//     }
// }

// method-02

// bool checkPrime(int n){
//     if(n==1){
//         return false;
//     }

//     for(int i=2; i<=(n-1); i++){
//         if(n%i==0){ // co-prime
//             return false;
//         }
//     }
//     return true;
// }

// method-03

bool isPrime(int n){
    if(n==1){
        return false;
    }

    for(int i=2; i*i<=n; i++){
        if(n%i==0){ // co-prime
            return false;
        }
    }
    return true;
}

int main(){
    int a;
    cout << "Enter the number : ";
    cin >> a;
    cout << isPrime(a);
    return 0;
}