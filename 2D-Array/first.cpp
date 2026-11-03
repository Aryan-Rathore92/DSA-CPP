#include <iostream>
using namespace std;

int searchElement(int arr[3][4], int target)
{
    bool temp = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Element is present : " << arr[i][j] << " and row = " << i << " and coloum = " << j;
                temp = false;
                break;
            }
        }
    }
    if (temp)
        cout << "Element is not present ";
}

int main()
{
    int arr[3][4];
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; //  Normally it fills in row-wise order
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}}; // hard-coded value fix which row and coloum what have

    cout << "Enter the elements of 2d-array : ";
    // Taking row-wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Taking coloum-wise input
    // for (int col = 0; col < 4; col++) // for column
    // {
    //     for (int row = 0; row < 3; row++) // for row
    //     {
    //         cin >> arr[row][col];
    //     }
    //     cout << endl;
    // }

    cout << "Printing 2d-array : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout << "Enter targeted value : ";
    cin >> target;

    searchElement(arr, target);
}