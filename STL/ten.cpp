#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << binary_search(v.begin(), v.end(), 4) << endl;                               // 1((true))
    cout << "Lower bound : " << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl; // 2
    cout << "Upper bound : " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 3, b = 5;
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;
    swap(a, b);
    cout << "a = " << a << " " << "b = " << b << endl;

    string str = "ARYAN";

    reverse(str.begin(), str.end());
    cout << str << endl; // NAYRA

    rotate(v.begin(), v.begin() + 1, v.end());

    for (int i : v)
    {
        cout << i << " "; // 2 3 4 5 1
    }
    cout << endl;

    sort(v.begin(), v.end());

    for (int i : v)
    {
        cout << i << " "; // 1 2 3 4 5
    }
}