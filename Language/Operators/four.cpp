#include<iostream>
#include<math.h>
using namespace std;

int test(int n){
    if(n<0) cout<< "false";
    int ans = n&(n-1);
    if(ans == 0){
        cout<< "true";
    }else{
        cout<< "false";
    }

}
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

    // Question leetcode-- 1009 [Complement of base 10 integer]
    // int n;
    // cin>>n;
    // int m = n;
    // int mask = 0;
    // if(n == 0){
    //    cout<< 1 << endl;
    // }
    // while(m != 0){
    //     mask = (mask<<1) | 1;
    //     m = m>>1;
    // }
    // int ans = (~n) & mask;
    // cout<< ans <<endl;

    // Power of 2 leetcode-231
    int n;
    cin>>n;
    test(n);
    
}