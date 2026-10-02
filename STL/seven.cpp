#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Max-Heap
    priority_queue<int> maxi;

    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(0);
    maxi.push(4);
    maxi.push(1);
    maxi.push(2);

    int n = maxi.size();
    cout << "Size of max-heap : " << n << endl; // 4

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " "; // 4 2 1 0
        maxi.pop();
    }

    mini.push(40);
    mini.push(10);
    mini.push(30);
    mini.push(20);

    int m = mini.size();

    cout << "Size of min-heap : " << m << endl; // 4

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " "; // 10 20 30 40
        mini.pop();
    }
}