#include<iostream>
#include<iomanip>
using namespace std;

 int main() {
    int math, eng, science;
    cout<< "Enter your math marks : ";
    cin>>math;
    cout<< "Enter your eng marks : ";
    cin>>eng;
    cout<< "Enter your science marks : ";
    cin>>science;
    cout<< "The average marks of the user is : "<< (math+eng+science)/3;
    return 0;
 }