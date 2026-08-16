#include<iostream>
using namespace std;

int main(){

      // Pattern---28
    //   int n,i=1;
    //   cin>>n;
    //   while(n>=i){
    //     // first triangle(space print)
    //     int space1 = n-i;
    //     while(space1){
    //         cout<< " ";
    //         space1 -= 1;
    //     }
    //     // second triangle(lefthalf pattern print)
    //     int j=1;
    //     while(i>=j){
    //          cout << j;
    //          j++;
    //     }
    //     // third triangle (righthalf pattern print)
    //     int rightStart = i-1;
    //     while(rightStart){
    //         cout << rightStart;
    //         rightStart -= 1;
    //     }
    //     cout << endl;
    //     i++;
    //   }

    // Pattern---29
       int n,i=1;
       cin>>n;
       while(n>=i){
        // lefthalf number pattern
            int j=1;
           while((n-i+1)>=j){
            cout << j;
            j++;
           }

        // lefthalf stars pattern
           int leftStars = i-1;
           while(leftStars){
            cout << "*";
            leftStars -= 1;
           }

        // righthalf stars pattern
           int rightStars = i-1;
           while(rightStars){
            cout << "*";
            rightStars -= 1;
           }

        // righthalf number pattern
           int rightNumber = n-i+1;
           while(rightNumber){
            cout << rightNumber;
            rightNumber -= 1;
           }
           cout << endl;
           i++;
       }
}