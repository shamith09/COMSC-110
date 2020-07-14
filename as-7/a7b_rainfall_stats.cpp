// Part B

#include <iostream>
#include <iomanip>

int main()
{
    double rainfall[12] = { }, sum = 0, max = -1, min;
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < 12; i++)
    {
        while (true)
        {
            std::cout << "Enter the rainfall (in inches) for month #" << i + 1 << ": ";
            std::cin >> rainfall[i];
            if (rainfall[i] > 0) break;
            std::cout << "Enter a non-negative amount: ";
        }
        sum += rainfall[i];
        if (rainfall[i] > max)
        {
            max = rainfall[i];
            maxIndex = i;
        }
        else if (i == 0 || rainfall[i] < min)
        {
            min = rainfall[i];
            minIndex = i;
        }
    }

    std::cout << std::endl << std::fixed << std::setprecision(2)
         << "The total rainfall for the year is " << sum << " inches." << std::endl
         << "The average rainfall for the year is " << sum / 12 << " inches." << std::endl
         << "The largest amount of rainfall was " << max
         << " inches in month " << maxIndex + 1 << "." << std::endl
         << "The smallest amount of rainfall was " << min
         << " inches in month " << minIndex + 1 << "." << std::endl;
}

/*
Enter the rainfall (in inches) for month #1: 0.4
Enter the rainfall (in inches) for month #2: 0.9
Enter the rainfall (in inches) for month #3: 2.4
Enter the rainfall (in inches) for month #4: 7.9
Enter the rainfall (in inches) for month #5: 2.1
Enter the rainfall (in inches) for month #6: 0.3
Enter the rainfall (in inches) for month #7: 0
Enter the rainfall (in inches) for month #8: 0
Enter the rainfall (in inches) for month #9: 0
Enter the rainfall (in inches) for month #10: 0.1
Enter the rainfall (in inches) for month #11: 1.5
Enter the rainfall (in inches) for month #12: 1.9

The total rainfall for the year is 17.50 inches.
The average rainfall for the year is 1.46 inches.
The largest amount of rainfall was 7.90 inches in month 4.
The smallest amount of rainfall was 0.00 inches in month 7.
*/