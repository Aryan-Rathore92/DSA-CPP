#include<iostream>
using namespace std;

void sayHello(); // forward declaration

int main() {
    sayHello();
    return 0;
}
void sayHello(){
      cout << "Hello World!";
}