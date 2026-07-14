#include<iostream>
using namespace std;

int main(){
    int  a = 10;
    double pi = 3.14;
    int *ptr = &a;
    double *ptr2 = &pi; 
    cout << ptr2 << " = " << ptr << endl;
    cout << &pi << " = " << ptr2 << endl;
    cout << sizeof(ptr2);
    return 0;
}