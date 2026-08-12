#include<iostream>
using namespace std;

int main(){

    // Pattern-01
    // int n, i=1;
    // cin>>n;

    // while(n>=i){
    //     int j=1;
    //     while(n>=j){
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern-02
    int n1, i=1;
    cin>> n1;

    while(n1>=i){
        int j=1;
        while(n1>=j){
            cout << i;
            j++;
        }
        i++;
        cout << endl;
    }
}