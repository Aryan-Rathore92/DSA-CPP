#include<iostream>
using namespace std;

 int main(){
    // Pattern --- 16
    // int n,i=1;
    // cin>>n;
    // while(n>=i){
    //     int j=1;
    //     while(i>=j){
    //       char value = 'A'+i-1;
    //       cout << value << " ";
    //       j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern --- 17
    // int n, row=1;
    // cin>> n;
    // char value = 'A';
    // while(n>=row){
    //     int col = 1;
    //     while(row>=col){
    //         cout << value << " ";
    //         value += 1;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // Pattern --- 18
    //    int n,i=1;
    //    cin>>n;
    //    while(n>=i){
    //     int j=1;
    //     while(i>=j){
    //       char value = 'A'+i+j-2;
    //       cout << value << " ";
    //       j++;
    //     }
    //     cout << endl;
    //     i++;
    //    }

    /*
    // Pattern --- 19
    int n,i=1;
    cin>>n;
    while(n>=i){
        int j=1;
        char value = 'A' + n - i;// (Calculate starting char) // {method---01}
        while(i>=j){
            cout << value << " ";
            value += 1;
            j++;
        }
        cout << endl;
        i++;
    }
    int n,i=1;
    cin>>n;
    while(n>=i){
        int j=1;
        while(i>=j){
            char value = 'D' + j - i; // {method---02}
            cout << value << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    // Pattern --- 20
    int n,i=0;
    cin>>n;
    while(n>i){
        int j=0;
        char value = 'A'+i+j;
        while(n>j){
            cout<< value << " ";
            value += 1;
             j++;
        }
        cout<< endl;
        i++;
    }

}