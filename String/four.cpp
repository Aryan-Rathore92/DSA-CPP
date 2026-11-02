#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str = "abcdbefbdeb";
    int count = 0;
    int n = str.length() - 1;
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        temp.push_back(count);
        count = 0;
    }

    int max = temp[0];
    for (int i = 1; i < temp.size() - 1; i++)
    {
        if (max < temp[i])
        {
            max = temp[i];
        }
    }
    cout << max;
}
