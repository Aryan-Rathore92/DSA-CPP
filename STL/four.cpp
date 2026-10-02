#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_front(1);
    l.push_back(2);

    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << " ";
    }

    l.pop_back();
    l.pop_front();
    l.empty();
    l.front();
    l.back();
    cout << l.size();

    list<int> newList(5, 100); // create new list with deafult size and elemnt
    for (int i : newList)
    {
        cout << i << " ";
    }
}