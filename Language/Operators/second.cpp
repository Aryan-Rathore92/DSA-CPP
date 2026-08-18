#include<iostream>
using namespace std;

int main() {

    // int n;
    // cin>>n;
    // for(int i=1; n>=i; i++){
    //     cout << i << endl;
    // }

    // Question---01
    //    int n,sum=0;
    //    cin>>n;
    //    for(int i=1; n>=i; i++){
    //     sum += i;
    //    }
    //    cout << "Sum of "<< n << " numbers is: " << sum << endl;

    // Question--02 (Fibbonaci series)
    //   int n;
    //   int a = 0;
    //   int b = 1;
    //   cout << "Enter the limit of fibbonaci series: ";
    //   cin>>n;

    //   for(int i=1; n>=i; i++){
    //     int nextTerm = a + b;
    //     cout << nextTerm << " ";
    //     a=b;
    //     b= nextTerm;
    //   }

    // Question---03 (Check number is prime or not)
    //   int n;
    //   bool isPrime = 1;
    //   cout << "Enter the value of n: ";
    //   cin>>n; 
    //   for(int i=2; i<n; i++){
    //     if(n%i==0){
    //       isPrime = 0;
    //       break;
    //     }
    //   }

    //   if(isPrime == 0){
    //     cout <<n<< " Not a prime number" << endl;
    //   }else{
    //     cout <<n<< " is a prime number" << endl;
    //   }

    // Question---04
    //    for(int i=0; i<=5; i++){
    //     cout << i << " "; // 0 2 4 
    //     i++;
    //    }

    // Question---05
    //    for(int i=0; i<=5; i--){
    //     cout << i << " "; // Infinite loop
    //     i++;
    //    }
    
    // Question---06
    //    for(int i=0; i<=15; i += 2){
    //     cout << i << " "; // 0 3 5 7 9 11 13 15 
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    //    }

    // Question---07
    //    for(int i=0; i<5; i++){
    //     for(int j=1; j<=5; j++){
    //         cout << i << " " << j << endl;
    //     }
    //    }

    // Question---08
      for(int i=0; i<5; i++){
        for(int j=1; j<=5; j++){
            if(i+j == 10){
                break;
            }
            cout << i << " " << j << endl;
        }
       }
    
    
    

}