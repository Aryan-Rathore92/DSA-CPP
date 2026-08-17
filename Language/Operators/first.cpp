#include<iostream>
using namespace std;

int main() {
   
   // Operator that works on bits
   // int a =4;
   // int b=6;
//    cout << "a&b is: " << (a&b) << endl; // 4
//    cout << "a|b is: " << (a|b) << endl; // 6
//    cout << "~a and ~b is: " << (~a) << endl; // -5
//    cout << "a^b is: " << (a^b) << endl; // 2

   // Left shift operator
//    int c = 3, result,d=2;
//    result = c<<2; // 12
//    cout << result<< endl;
//    cout<< (d)<<4;

   // Right shift operator
      // int right = 17;
      // cout << (right>>1) << endl; // 8
      // cout << (right>>2) << endl; // 4

      // Question--01
      // int a,b=1;
      // a=10;
      // if(++a){
      //    cout << b << endl; //Output-- 1
      // } else{
      //    cout << ++b << endl;
      // }

      // Question--02
         // int a=1,b=2;
         // if(a-- > 0 && ++b > 2){
         //    cout<< "Stage1-insideIf"<<endl;
         // } else{                           // Output--Stage1-insideIf, 0 3
         //    cout<<"Stage2-insideElse"<<endl;
         // }
         // cout<< a << " " << b << endl;

      // Question--03
         // int a=1,b=2;
         // if(a-- > 0 || ++b > 2){ // If the first statement is true with OR operator then it will not check second one;
         //    cout<< "Stage1-insideIf"<<endl;
         // } else{                           // Output--Stage1-insideIf, 0 2
         //    cout<<"Stage2-insideElse"<<endl;
         // }
         // cout<< a << " " << b << endl;

      // Question--04
         int number = 3;
         cout << (25 * (++number))<< endl; // 100

      // Question--05
         int a = 1;
         int b = a++;
         int c = ++a;
         cout << b << endl; // 1
         cout << c << endl; // 3
}