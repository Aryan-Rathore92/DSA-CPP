#include<iostream>
using namespace std;

int main(){
    // Question-01
    // int n, sum=0, i=1;
    // cout << "Enter the value of n: ";
    // cin>> n;

    // while(n>=i){
    //     sum += i;
    //     i++;
    // }
    // cout << sum;
    
    // Question-02
    // int n, sum=0, i=2;
    // cout << "Enter the value of n : ";
    // cin>>n;

    // while (n>=i)
    // {
    //     if(i%2==0){
    //         sum += i;
    //     }
    //     i = i+2;
    // }
    // cout << sum <<endl;

    // Question-03
    // float f, c;
    // cout << "Enter the value of temprature in fahrenheit : ";
    // cin>>f;
    // c = (f - 32)*5/9;
    // cout << "The value of tempreatute in celsius is : " << c <<endl;

    
    // Question-04
    int n,i=2;
    cout << "Enter the no. : ";
    cin>>n;

    while (n>i)
    {
        if(n%i == 0){
            cout << "Number is not prime : "<< i << endl;
        } else{
            cout << "Number is prime : "<< i << endl;
        }
        i++;
    }
    if(n==i){
        cout << "Prime is : "<< i << endl;
    }
    
}