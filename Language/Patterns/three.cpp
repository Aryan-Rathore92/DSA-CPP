#include<iostream>
using namespace std;

int main(){
    // Pattern-06
    // int n, row=1;
    // cin>>n;
    // while(n>=row){
    //     int col=1;
    //     while(row>=col){
    //         cout << "*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // Pattern-07
    // int n,i=1;
    // cin>>n;
    // while(n>=i){
    //     int j=1;
    //     while(i>=j){
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern-08
    // int n,i=1,count=1;
    // cin>>n;
    // while(n>=i){
    //     int j=1;
    //     while(i>=j){
    //         cout<< count<< " ";
    //         count += 1;
    //         j++;
    //     }
    //     cout<< endl;
    //     i++;
    // }

     // Pattern-09
    int n,row=1;
    cin>>n;
    while(n>=row){
        int col=1, value=row;
         while(row>=col){         //{ method --- 01}
            cout << value << " ";
            value++;
            col++;
        }
        cout << endl;
        row++;
    }

    // int n,row=1;
    // cin>>n;
    // while(n>=row){
    //     int col=0;
    //     while(row>col){
    //         cout << row + col << " "; //{ method --- 02}
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
  
   
     // Pattern - 10
    //  int n,row=1;
    //  cin>>n;
    //  while(n>=row){
    //     int col=0;
    //     while(row > col){
    //         cout << row-col; // {method --- 01}
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    //  }

    //  int n,i=1;
    //  cin>>n;
    //  while(n>=i){
    //     int j=1;
    //     while(i >= j){
    //         cout << i-j+1; // {method --- 02}
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    //  }
     

   
}