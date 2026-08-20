#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // Question [Binary to decimal]
    // int n;
    // cin>>n;
    // int ans = 0;
    // int i = 0;

    // while( n != 0){
    //     int digit = n%10;
    //     if(digit == 1){
    //      ans =( digit * pow(2,i)) + ans;
    //     }
    //     n = n/10;
    //     i++;
    // }
    // cout << ans << endl;

    int n;
    cin>>n;
    int ans = 0,i=0,j=0,newNum=0;
    while(n != 0){
        int bit = n&1;
        bit = !bit;
        ans = bit* pow(10,i) + ans;
        n = n>>1;
        i++;
    }
    while(n != 0){
        int digit = ans%10;
        if( digit == 1){
          newNum = newNum + pow(2,j); // binary to decimal conversion
        }
        ans = ans/10;
        j++;
    }
    
}