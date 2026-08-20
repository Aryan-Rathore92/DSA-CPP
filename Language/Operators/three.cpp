#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // int n,reverse=0;
    // cin>>n;
    // while(n != 0){
    //     int digit = n%10;
    //     reverse = reverse*10 + digit;
    //     n = n/10;
    // }
    // if(n<0){
    //     reverse*(-1);
    // }
    // cout << reverse;

    // int n;
    // cin>>n;

    // int ans = 0;
    // int i = 0;
    // while( n != 0){
    //     int bit = n&1;
    //     ans = ans + (bit * pow(10,i) );
    //     n = n>>1;
    //     i++;
    // }
    // cout << "Answer is: "<< ans;

    // int n;
    // cin>>n;
    // int ans = 0;
    // int i = 0;
    // while (n != 0){

    //     int bit = n&1; // find last bit is 1 or not
    //     n&1? bit=0 : bit=1;
    //     ans = (bit * pow(10,i)) + ans; // reverse an number
    //     n = n>>1;
    //     i++;
    // }
    

    // cout << "Answer is : "<< ans << endl;


    int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    n *= -1;
    while(n != 0){
          int bit = n&1;
          bit = !bit;
          ans = (bit * pow(10,i)) + ans;
          n = n>>1;
          i++;
 
    }
    ans+= 1;
    cout << ans;
}


