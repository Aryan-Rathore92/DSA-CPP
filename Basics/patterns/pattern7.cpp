#include<iostream>
using namespace std;

int main() {

    int n=4; // row numbers
    for(int i=1; i<=n; i++){
        // for spaces
        for(int j=1; (n-i) >= j; j++){
            cout << " ";
        }
        // for stars
        for(int k=1; i>=k; k++){
            cout<< "*";
        }
        cout<< endl;
    }  
    return 0;
}