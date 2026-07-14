#include<iostream>
using namespace std;

void binToDec(int binNum){
   int n = binNum;
   int pow = 1;
   int result = 0;

   while(n > 0){
    int rem = n%10;
        n = n/10;
        result += pow*rem;
        pow *= 2;
   }

   cout << result << endl;
}

int main() {
    int n;
    cout << "Enter binary number : ";
    cin>> n;
    binToDec(n);
    return 0;
}