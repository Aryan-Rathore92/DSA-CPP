#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
       if(n%i==0){
        return false; // co-prime
       }
       return true;
    }
}
int allPrime(int n){
    for(int i=2; i<=n; i++){
       if(isPrime(i)){
        cout << i << endl;
       }
    }
}

int main(){
    allPrime(10);
    return 0;
}