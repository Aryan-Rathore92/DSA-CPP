#include<iostream>
using namespace std;

int main() {
   int n =4;
    for(int i=1; i<=n; i++){ // upper-half
       for(int j=1; i>=j; j++){
         cout << "*";
       }
       for(int j=1; 2*(n-i) >=j; j++){
          cout << " ";
       }
       for(int j=1; i>=j; j++){
         cout << "*";
       }
       cout << endl;
    }   

   for(int i=n; i>=1; i--){ // lower-half
      for(int j=1; i>=j; j++){
         cout << "*";
      }
      for(int j=1; 2*(n-i)>=j; j++){
         cout << " ";
      }
      for(int j=1; i>=j; j++){
         cout << "*";
      }
      cout << endl;
   }
   return 0;
      
}