#include <iostream>
using namespace std;
int maxRowSum(int arr[][3], int row, int col)
{
    int max = INT8_MIN;
    int rowIndex = -1;
    cout << "Enter elements : ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }

        if (sum > max)
        {
            max = sum;
            rowIndex = row;
        }
    }

    cout << "row Have max sum is : " << rowIndex << " and max sum is : " << max;
}

int main()
{
    int arr[3][3];
    maxRowSum(arr, 3, 3);
}