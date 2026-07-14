#include<iostream>
using namespace std;

void decToBin(int num){
    int n = num;
    int result = 0;
    int pow = 1;

    while( n > 0){
        int rem = n%2;
        result += rem*pow;
        pow *= 10;
        n = n/2;
    }

    cout << result;

}

int main() {
    int n;
    cout << "Enter decimal number : ";
    cin >> n;
    decToBin(n);
    return 0;
}