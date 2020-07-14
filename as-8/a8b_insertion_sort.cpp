// Part B

#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 76, 54, 12, 34, 32, 56 }, temp, verbose = 1,
    size = sizeof(arr) / sizeof(arr[0]);

    cout << "[";
    for (int i = 0; i < size - 1; i++)
        cout << arr[i] << ", ";
    cout << arr[size - 1] << "]";
    if (verbose) cout << "   unsorted | sorted" << endl;
    cout << endl;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j >= 0; j--)
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        if (verbose)
        {
            cout << "[";
            for (int j = 0; j < size - 1; j++)
            {
                cout << arr[j];
                if (j == i) cout << "| ";
                else cout << ", ";
            }
            cout << arr[size - 1] << "]"
                 << " (iteration " << i + 1
                 << ")" << endl;
        }
    }

    cout << "\nSorted array:" << endl << "[";
    for (int i = 0; i < size - 1; i++)
        cout << arr[i] << ", ";
    cout << arr[size - 1] << "]";
}

/*
[76, 54, 12, 34, 32, 56]   unsorted | sorted

[54| 76, 12, 34, 32, 56] (iteration 1)
[12, 54| 76, 34, 32, 56] (iteration 2)
[12, 34, 54| 76, 32, 56] (iteration 3)
[12, 32, 34, 54| 76, 56] (iteration 4)
[12, 32, 34, 54, 56| 76] (iteration 5)

Sorted array:
[12, 32, 34, 54, 56, 76]
*/