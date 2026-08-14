#include<iostream>
using namespace std;

int main(){

  /*  // Pattern --- 11
    int n, i=1;
    char value = 65;
    cin>>n;
    while(n>=i){
        int j=1;
        while(n>=j){
            cout << value << " "; // {Method-- 01}
            j++;
        }
        cout << endl;
        i++;
        value += 1;
    }

    int n, i=1;
    cin>>n;
    while(n>=i){
        int j=1;
        char value = 'A' + i-1;
        while(n>=j){
            cout << value << " "; // {Method-- 02}
            j++;
        }
        cout << endl;
        i++;
        value += 1;
    }
  */
 
 /*  // Pattern-- 12
//    int n, i=1;
//    cin>>n;
//    while(n>=i){
//     int j=1;
//     char value = 'A';
//     while(n>=j){
//         cout << value << " "; // {Method-01}
//         value += 1;
//         j++;
//     }
//     cout << endl;
//     i++;
//    }
   int n, i=1;
   cin>>n;
   while(n>=i){
    int j=1;
    char value = 'A' + j-1;
    while(n>=j){
        cout << value<< " "; // {Method-02}
        j++;
        value += 1;
    }
    cout << endl;
    i++;
   }
  */
  
    // Pattern --- 14
//   int n,i=1;
//   char value = 'A';
//   cin>>n;
//   while(n>=i){
//     int j=1;
//     while(n>=j){
//         cout << value<< " ";
//         j++;
//         value += 1;
//     }
//     cout << endl;
//     i++;
//   }

  // Pattern -- 15
    int n, i=1;
    char value;
    cin>>n;
    while(n>=i){
        int j=0;
        while(n>j){
            cout << value<< " ";
            // value += 1;
            j++;
        }
        value -= 2;
        cout << endl;
        i++;
    }
  
}