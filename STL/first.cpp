#include <iostream>
#include <array>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3}; // Normal Array

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << "First element of array : " << a.front() << endl;      // 1
    cout << "Last element of array : " << a.back() << endl;        // 4
    cout << "Element at index 3 : " << a.at(3) << endl;            // 4
    cout << "Check array is empty or not : " << a.empty() << endl; // 0(false)
}