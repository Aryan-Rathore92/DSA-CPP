#include<iostream>
using namespace std;

int main(){

    int a = 123;
    char b = 'b';
    bool c = true;
    float d = 1.2;
    double e = 1.23;

    int sizeA = sizeof(a);
    int sizeB = sizeof(b);
    int sizeC = sizeof(c);
    int sizeD = sizeof(d);
    int sizeE = sizeof(e);

    cout << sizeA << endl;
    cout << sizeB << endl;
    cout << sizeC << endl;
    cout << sizeD << endl;
    cout << sizeE << endl; 
    
    // Type Casting
    int a = 'a';
    cout << a << endl; // 97

    char ch = 98;
    cout << ch << endl; // b

    int num = 2.0/5; // result will come 0.4 and then will be convert into int that is why result comes 0
    float num2 = 2.0/5; // float have big priority
    cout << num << endl;

}