#include<iostream>
using namespace std;

//  Pass by Value
void changeA(int a){
   a = 20; // here making an copy of a.
   cout << a << endl;
}

// Pass by refrence
 void changeA(int *ptr){
   *(ptr) = 20; // here changing original a.
 }

int main(){
    int a =10;
    changeA(&a);
    cout << a << endl;
    return 0;
}