#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int sumArray[3];
    int sum = 0;
    cout << "Enter 2d-array elements";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Elements of 2d-array is : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // calculate row-wise
    // cout << "Sum of row-wise is : " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum += arr[i][j];
    //     }
    //     sumArray[i] = sum;
    //     sum = 0;
    // }

    // calculate coloum-wise sum
    cout << "Sum of row-wise is : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        sumArray[i] = sum;
        sum = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << sumArray[i] << " ";
    }
}