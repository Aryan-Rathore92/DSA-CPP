#include <iostream>
using namespace std;

int arr[5] = {64, 25, 12, 22, 11};

//  SELECTION SORTING
// int selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

//  BUBBLE SORTING
// int bubbleSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         bool swapped = false;
//         for (int j = 0; j < n - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         if (swapped == false)
//             break;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

//  INSTERION SORTING
int insertionSort(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // selectionSort(arr, 5);
    // bubbleSort(arr, 5);
    insertionSort(arr, 5);
}