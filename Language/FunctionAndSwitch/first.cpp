#include<iostream>
using namespace std;

int main() {
//     int num = 1;
//      while(true){
//         switch(num){
//            case 1: cout << "This is one";
//                    exit(0); // That will terminate whole programme and then nothing will execute
//         }
//         cout << "Hello" << endl;
//     }

    // int num = 1;
    //  switch(num){
    //     case 1: cout << "This is one";
    //     continue; // continue ==> Is not valid with switch case

    //     default: cout << "Default";
    //  }

    // CALCULATER
    //    int a,b;
    //    cout << "Enter the value of a: ";
    //    cin>>a;
    //    cout << "Enter the value of b: ";
    //    cin>>b;
    //    char ch;
    //    cout << "Enter the value of calulator operation: ";
    //    cin>>ch;
    //    switch(ch){

    //     case '+': cout<< "Value of a+b is: " << a+b <<endl;
    //     break;
    //     case '-': cout<< "Value of a-b is: " << a-b <<endl;
    //     break;
    //     case '*': cout<< "Value of a*b is: " << a*b <<endl;
    //     break;
    //     case '%': cout<< "Value of a%b is: " << a%b <<endl;
    //     break;
    //     case '/': cout<< "Value of a/b is: " << a/b <<endl;
    //     break;
    //     default: cout << "Operation does not match" <<endl;
    //    }

    int amount;
    cout<< "Enter the value of amount: ";
    cin>>amount;

switch (1) {
    case 1:
        cout << "100 notes: " << amount / 100 << endl;
        amount %= 100;

    case 2:
        cout << "50 notes: " << amount / 50 << endl;
        amount %= 50;

    case 3:
        cout << "20 notes: " << amount / 20 << endl;
        amount %= 20;

    case 4:
        cout << "10 notes: " << amount / 10 << endl;
        amount %= 10;

    case 5:
        cout << "1 notes: " << amount << endl;
}

}