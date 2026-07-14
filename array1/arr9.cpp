#include<iostream>
using namespace std;

int main() {
    int a = 10;
    char name = 'a';
    int *ptr = &a;
    char *ptr2 = &name;

    // cout << ptr << endl;
    // ptr++; // 1 int++
    // cout << ptr;

    cout << (void*)ptr2 << endl; // 0x61ff03
    ptr2++;
    cout << (void*)ptr2 << endl; // 0x61ff04
    return 0;
}