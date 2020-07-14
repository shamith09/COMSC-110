// Part E

#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 1, 3, 5, 7, 9, 8, 6, 4, 2, 0 }, temp, verbose = 1,
    size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (verbose)
        {
            cout << "[";
            for (int k = 0; k < size - 1; k++)
                cout << arr[k] << ", ";
            cout << arr[size - 1];
            cout << "]" << endl;
        }
    }

    cout << "Sorted array: " << endl << "[";
    for (int i = 0; i < size - 1; i++)
        cout << arr[i] << ", ";
    cout << arr[size - 1];
    cout << "]";
}

/*
[1, 3, 5, 7, 8, 6, 4, 2, 0, 9]
[1, 3, 5, 7, 6, 4, 2, 0, 8, 9]
[1, 3, 5, 6, 4, 2, 0, 7, 8, 9]
[1, 3, 5, 4, 2, 0, 6, 7, 8, 9]
[1, 3, 4, 2, 0, 5, 6, 7, 8, 9]
[1, 3, 2, 0, 4, 5, 6, 7, 8, 9]
[1, 2, 0, 3, 4, 5, 6, 7, 8, 9]
[1, 0, 2, 3, 4, 5, 6, 7, 8, 9]
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
Sorted array:
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
*/