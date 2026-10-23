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

int toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        int ans = ch - 'A' + 'a';
        return ans;
    }
}

bool checkPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char name[20];
    cout << "Enter your name : ";
    cin >> name;

    int len = getLength(name);

    cout << checkPalindrome(name, len) << endl;
}