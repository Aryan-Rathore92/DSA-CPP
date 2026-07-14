#include<iostream>
using namespace std;

int main() {
    int num, result=0;
   cout<< "Enter a number have digit :";
   cin>>num;
   while(num >=1){
    int rem = num%10;
        result = result*10 + rem;
        num = num/10;
   }
   cout << result;
   return 0;
}