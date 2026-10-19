#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    // put elements
    m[1] = "aryan";
    m[5] = "rathore";
    m[10] = "sarthak";

    m.insert({2, "devansh"});
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // for checking element(key) is present or not
    // cout << "10 is present or not : " << m.count(10) << endl;
    m.erase(1); // That method does remove key-value pair from map
    auto it = m.find(10);

    if (it != m.end())
    {
        cout << it->first << " " << it->second; // 10 sarthak
    }
}