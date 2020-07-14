// Part C

// DON'T INTERRUPT DURING RUNTIME -- MAY CAUSE MEMORY LEAK

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int size;
    cout << "Sort array to ascending order" << endl
         << "Enter array size: ";
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 10;

    int *arr2 = new int[size];
    for (int i = 0; i < size; i++)
        arr2[i] = arr[i];

    cout << "Sort to Max side:" << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < size; j++)
            cout << arr[j] << " ";
        cout << endl;

        int max = arr[0], maxIndex = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
                maxIndex = j;
            }
        }
        for (int j = maxIndex; j < i; j++)
            arr[j] = arr[j + 1];
        arr[i] = max;
    }

    cout << "Sort to Min side:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << arr2[j] << " ";
        cout << endl;

        int min = arr2[size - 1], minIndex = size - 1;
        for (int j = size - 1; j >= i; j--)
        {
            if (arr2[j] < min)
            {
                min = arr2[j];
                minIndex = j;
            }
        }
        for (int j = minIndex; j > i; j--)
            arr2[j] = arr2[j - 1];
        arr2[i] = min;
    }

    // KEEP THESE LINES -- DELETING MAY CAUSE MEMORY LEAK
    delete[] arr;
    delete[] arr2;
}

// Below result is with seed 1234

/*
Sort array to ascending order
Enter array size: 6
Sort to Max side:
8 9 8 7 5 7
8 8 7 5 7 9
8 7 5 7 8 9
7 5 7 8 8 9
5 7 7 8 8 9
5 7 7 8 8 9
Sort to Min side:
8 9 8 7 5 7
5 8 9 8 7 7
5 7 8 9 8 7
5 7 7 8 9 8
5 7 7 8 8 9
5 7 7 8 8 9
*/