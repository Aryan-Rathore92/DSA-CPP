#include<iostream>
using namespace std;

// int product(int a =2,int b=3){
//     int m = a*b;
//     return m;
// }

int checkNum(int num){
    if(num%2 == 0){
        cout << "Number is even : " << num <<endl;
    } else{
       cout << "Number is odd : " << num <<endl;
    }
}

int main() {
    // int prod =  product();
    // cout << prod;

    checkNum(11);
    return 0;
}