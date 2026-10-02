#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("aryan");
    q.push("rathore");
    q.push("sarthak");

    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;

    q.empty();
    q.pop();
    q.size();
}