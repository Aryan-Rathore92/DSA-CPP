#include<iostream>
#include<math.h>
using namespace std;

int square(int n){
    return pow(2, n); // check range of int
}

// int main() {
//     int res = square(31);
//     cout << res << endl;
//     return 0;
// }

int main() {
     int res = square(31);
    cout << res << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long long int) << endl;
    return 0;
}