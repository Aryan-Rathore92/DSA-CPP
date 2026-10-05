#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(0);
    s.insert(10);
    s.insert(5);
    s.insert(4);
    s.insert(20);

    for (int i : s)
    {
        cout << i << " "; // 0 4 5 10
    }

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it); // 4 remove
    for (int i : s)
    {
        cout << i << " "; // 0 4 5 10
    }

    cout << s.empty() << endl;   // 0
    cout << s.size();            // 3
    cout << s.count(10) << endl; // 1(true)

    set<int>::iterator itr = s.find(10);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << endl;
    }
}