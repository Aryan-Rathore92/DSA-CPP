#include<iostream>
using namespace std;

int main() {
    int n=4;
    // pyramid-01
    for(int i=1; i<=n; i++){
        for(int j=1; (n-i)>=j; j++){
            cout << " "; // first-spaces
        }
        for(int j=1; (2*i-1)>=j; j++){
            cout << "*"; // first-stars
        }
        cout << endl;
    }
    // pyramid-02
    for(int i=n; i>=1; i--){
        for(int j=1; (n-i)>=j; j++){
            cout << " "; // second-spaces
        }
        for(int j=1; (2*i-1)>=j; j++){
           cout << "*"; // second-stars
        }
        cout << endl;
    }
    return 0;
}