#include<iostream>
using namespace std;

int main(){
    int  a = 10;
    int *ptr = &a;
    int result = *(ptr);
    cout << result << endl;

    *(ptr) = 20;
    cout << a << endl;
    return 0;
}