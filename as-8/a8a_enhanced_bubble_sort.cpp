// Part A

#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 4, 3, 5, 7, 2, 9, 1 }, verbose = 1,
    size = sizeof(arr) / sizeof(arr[0]);

    cout << "[";
    for (int i = 0; i < size - 1; i++)
        cout << arr[i] << ", ";
    cout << arr[size - 1] << "]";
    if (verbose)
        cout << "   unsorted | sorted" << endl;
    cout << endl;

    for (int i = size - 1; i > 0; i--)
    {
        int max = arr[0], maxIndex = 0, temp;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
                maxIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;

        if (verbose)
        {
            cout << "[";
            for (int j = 0; j < size - 1; j++)
            {
                cout << arr[j];
                if (j == i - 1) cout << "| ";
                else cout << ", ";
            }
            cout << arr[size - 1] << "] (iteration "
                 << 7 - i << ")" << endl;
        }
    }

    cout << "\nSorted array:" << endl << "[";
    for (int i = 0; i < size - 1; i++)
        cout << arr[i] << ", ";
    cout << arr[size - 1] << "]";
}

/*
[4, 3, 5, 7, 2, 9, 1]   unsorted | sorted

[4, 3, 5, 7, 2, 1| 9] (iteration 1)
[4, 3, 5, 1, 2| 7, 9] (iteration 2)
[4, 3, 2, 1| 5, 7, 9] (iteration 3)
[1, 3, 2| 4, 5, 7, 9] (iteration 4)
[1, 2| 3, 4, 5, 7, 9] (iteration 5)
[1| 2, 3, 4, 5, 7, 9] (iteration 6)

Sorted array:
[1, 2, 3, 4, 5, 7, 9]
*/