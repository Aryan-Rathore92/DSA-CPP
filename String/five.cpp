#include <iostream>
#include <string>
using namespace std;

int arr[26] = {0};
char getMaxOccurence(string s)
{

    for (int i = 0; i < s.length(); i++)
    {
        int num = 0;
        char ch = s[i];
        num = ch - 'a';
        arr[num]++;
    }

    int maxi = -1, ans = 0;

    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = ans + 'a';
    return finalAns;
}
int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;

    cout << getMaxOccurence(s) << endl;
}