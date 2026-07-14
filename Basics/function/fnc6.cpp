#include<iostream>
using namespace std;

int sum(int a, int b, int c){
    cout << (a+b+c) << endl;
    return a+b+c;
}
/* Function Overloading concept*/
double sum(double a, double b){
     cout << (a+b) << endl;
     return a+b;
}

int main(){
   sum(1.5, 2.5, 1.5);
   sum(1.5, 2.5); // Implicit conversion (float convert in integer)
    return 0;
}