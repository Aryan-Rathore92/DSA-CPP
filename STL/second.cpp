#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout << "Capcity of vector( how much memory allocate be for the elements ) : " << v.capacity() << endl; // 0
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "Capcity of vector( how much memory allocate be for the elements ) : " << v.capacity() << endl; // 1
    cout << v.size() << endl;                                                                               // {1,2,3}

    cout << "Element presnt at index 1 : " << v.at(1) << endl; // 2
    cout << "First element of vector : " << v.front() << endl; // 1
    cout << "Last element of vector : " << v.back() << endl;   // 3
    cout << "Vector is empty or not : " << v.empty() << endl;  // 0(False)

    // before pop
    for (int i : v)
    {
        cout << i << " "; // 1 2 3
    }
    cout << endl;
    v.pop_back();

    // // after pop
    for (int i : v)
    {
        cout << i << " "; // 1 2
    }

    // for clear the vector only size not capacity
    cout << "Before clear size is : " << v.size() << endl; // 3
    v.clear();
    cout << "After clear size is : " << v.size() << endl; // 0

    // Create vector with default size and initilize with one value
    vector<int> b(5, 1);
    for (int i : b)
    {
        cout << i << " "; // 1 1 1 1 1
    }

    // copy another vector
    vector<int> copyVector(b);
    for (int i : copyVector)
    {
        cout << i << " "; // 1 1 1 1 1
    }
}