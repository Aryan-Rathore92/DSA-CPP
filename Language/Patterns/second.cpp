#include<iostream>
using namespace std;

int main(){
    // Pattern-03
    // int n, i=1;
    // cin>>n;
    // while(n>=i){
    //     int j=i;
    //     while(n>=j){
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    
    // Pattern-04
    // int n,i=1;
    // cin>>n;
    // while(n>=i){
    //     int j=1;
    //     while(n>=j){
    //         cout << n-j+1;
    //         j++;
    //     }
    //     j=j;
    //     cout << endl;
    //     i++;
    // }

    // Pattern-05
    int n,i=1,count=1;
    cin>>n;
    while(n>=i){
        int j=1;
        while(n>=j){
            cout << count;
            count+= 1;
            j++;
        }
        cout << endl;
        i++;
    }
}