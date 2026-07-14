#include<iostream>
using namespace std;

int main(){
    int a,b;
    char choice ;
    cout<< "Enter the value of a :";
    cin>>a;
    cout<< "Enter the value of b :";
    cin>>b;
    cout<<"Which type operation do you want to do : ";
    cin>>choice;
    switch(choice){
        case '+':
        cout<<"Addition of "<< a <<" and "<< b << "is : "<< a +b;
        break;
        case '-':
        cout<<"Substraction of "<< a <<" and "<< b << "is : "<< a -b;
        break;
        case '*':
        cout<<"Multiplication of "<< a <<" and "<< b << "is : "<< a *b;
        break;
        case '/':
        cout<<"Division of "<< a <<" and "<< b << "is : "<< a /b;
        break;
        default:
        cout<<"Opertion is not presnet in calculator";
    }
    
    return 0;
}