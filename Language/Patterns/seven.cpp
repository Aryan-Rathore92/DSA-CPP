#include<iostream>
using namespace std;

int main(){
      int n,i=1;
      cin>>n;
      while(n>=i){
        // first half
        int j1 = 1, j2 = 1;
        int space1 = n-i;
        while(space1){
            cout<< " ";
            space1 -= 1;
        }
        while(i>=j1){
             cout << j1;
             j1++;
        }
        // right half
        while((i-j2)>=j2){
            cout << (i-1);
            j2++;
        }
        cout << endl;
        i++;
      }
}