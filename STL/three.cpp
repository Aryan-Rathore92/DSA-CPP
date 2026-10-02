#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(1);
    d.push_front(2);
    d.push_back(3);

    for (int i : d)
    {
        cout << i << " ";
    }

    cout << "Element at index 1 : " << d.at(1) << endl; // 2

    cout << "first elem is : " << d.front() << endl; // 1
    cout << "last elem is : " << d.back() << endl;   // 2

    cout << "Deque empty or not : " << d.empty() << endl; // 0(false)

    // for delete a element from deque
    d.erase(d.begin(), d.begin() + 1);

    for (int i : d)
    {
        cout << i << " ";
    }

    cout << d.size() << endl; // 1 2 3
}