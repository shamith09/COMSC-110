// Part A

#include <iostream>

using namespace std;

int main()
{
    cout << "This program will ask you to" << endl
         << "enter ten values, then it will" << endl
         << "determine the largest and smallest" << endl
         << "of the values you entered." << endl;

    int nums[10] = { }, min, max, minIndex = 0, maxIndex = 0;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter an integer value: ";
        cin >> nums[i];
        if (i == 0)
        {
            min = nums[0];
            max = nums[0];
        }
        else
        {
            if (nums[i] < min)
            {
                min = nums[i];
                minIndex = i;
            }
            else if (nums[i] > max)
            {
                max = nums[i];
                maxIndex = i;
            }
        }
    }
    
    cout << "The largest value entered is item " << maxIndex + 1
         << " at " << max << endl;
    cout << "The smallest value entered is item " << minIndex + 1
         << " at " << min;
}

/*
This program will ask you to
enter ten values, then it will
determine the largest and smallest
of the values you entered.
Enter an integer value: 23
Enter an integer value: 34
Enter an integer value: 45
Enter an integer value: 56
Enter an integer value: 67
Enter an integer value: 78
Enter an integer value: 75
Enter an integer value: 53
Enter an integer value: 31
Enter an integer value: 49
The largest value entered is item 6 at 78
The smallest value entered is item 1 at 23
*/