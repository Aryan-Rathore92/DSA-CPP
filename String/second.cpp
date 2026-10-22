#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name : ";
    cin >> name;
    int l = getLength(name);
    int s = 0;
    int e = l - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }

    cout << name << endl;
}