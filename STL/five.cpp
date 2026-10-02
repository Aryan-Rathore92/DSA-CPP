#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Aryan");
    s.push("rathore");
    s.push("sarthak");

    cout << "Top element is : " << s.top() << endl; // sarthak

    s.pop();

    cout << "After pop statment top element is : " << s.top() << endl; // rathore

    cout << s.size() << endl; // 2

    cout << s.empty(); // 0
}