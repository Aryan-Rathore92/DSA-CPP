#include<iostream>
using namespace std;

int main(){
    int a;
    a = cin.get();// Get Character and all keys
     cout << "Value of a is: " << a;

    int b;
    cout << "Enter the value of b: ";
    cin>>b;
    
    // Question-01
    if( b > 0){
        cout << "Number is Positive"<< endl;
    } else if(b<0){
        cout << "Number is Negative" << endl;
    } else{
        cout << "Number is Zero";
    }
    
    // Question-02
    int num = 9;
    if(num == 9){
        cout << "NINE" << endl; // execute
    }
    if(num > 0){
        cout << "Positive" << endl; // execute
    } else{
        cout << "Negative";
    }
    
    // Question-03
    int x = 2;
    int y = x+1;

    if((x=3)==y){
        cout << x << endl;
    } else{
        cout << x+1;
    }

    // Question-04
    int check = 24;
    if(check > 20){
        cout << "Love" << endl; // Only that will execute
    } else if(check==24){
        cout << "Lovely" << endl;
    } else{
        cout << "Aryan";
    }
    
    // Question-05
    char ch;
    cout << "Enter the value of ch: ";
    cin>>ch;
    if(ch>='a' && ch<= 'z'){
        cout << "This is lower case and the value is: " << ch << endl;
    } else if(ch>='A' && ch<= 'Z'){
        cout << "This is upper case and the value is: " << ch << endl;
    } else if(ch>='0' && ch<= '9'){
        cout << "This is an number value is: " << ch << endl;
    } else{
        cout << "Special case";
    }

    


}