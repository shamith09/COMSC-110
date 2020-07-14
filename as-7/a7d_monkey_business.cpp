// Part D

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double food[3][7] = { }, daySums[7] = { 0 }, min, max = -1;
    int minIndices[2] = { }, maxIndices[2] = { };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << "Enter the pounds eaten by monkey number "
                << i + 1 << endl
                << "on day " << j + 1 << ": ";
            cin >> food[i][j];
            while (food[i][j] < 0)
            {
                cout << "Enter a non-negative amount: ";
                cin >> food[i][j];
            }

            daySums[j] += food[i][j];
            if (food[i][j] > max)
            {
                max = food[i][j];
                maxIndices[0] = i;
                maxIndices[1] = j;
            }
            else if (i == 0 || food[i][j] < min)
            {
                min = food[i][j];
                minIndices[0] = i;
                minIndices[1] = j;
            }
        }
    }

    cout << fixed << setprecision(2);
    for (int i = 0; i < 7; i++)
        cout << "The average amount eaten on day " << i + 1
             << " is " << daySums[i] / 3 << " pounds." << endl;
    
    cout << "Monkey number " << minIndices[0] + 1
         << " ate the least amount of food," << endl
         << min << " pounds, on day " << minIndices[1] + 1 << endl
         << "Monkey number " << maxIndices[0] + 1
         << " ate the most amount of food," << endl
         << max << " pounds, on day " << maxIndices[1] + 1;
}

/*
Enter the pounds eaten by monkey number 1
on day 1: 1.5
Enter the pounds eaten by monkey number 1
on day 2: -1.6
Enter a non-negative amount: 1.6
Enter the pounds eaten by monkey number 1
on day 3: 1.7
Enter the pounds eaten by monkey number 1
on day 4: 1.9
Enter the pounds eaten by monkey number 1
on day 5: 1.6
Enter the pounds eaten by monkey number 1
on day 6: 1.7
Enter the pounds eaten by monkey number 1
on day 7: 1.8
Enter the pounds eaten by monkey number 2
on day 1: 0.9
Enter the pounds eaten by monkey number 2
on day 2: 0.9
Enter the pounds eaten by monkey number 2
on day 3: 0.8
Enter the pounds eaten by monkey number 2
on day 4: 0.9
Enter the pounds eaten by monkey number 2
on day 5: 0.7
Enter the pounds eaten by monkey number 2
on day 6: 0.8
Enter the pounds eaten by monkey number 2
on day 7: 0.9
Enter the pounds eaten by monkey number 3
on day 1: 1.3
Enter the pounds eaten by monkey number 3
on day 2: 1.4
Enter the pounds eaten by monkey number 3
on day 3: 1.3
Enter the pounds eaten by monkey number 3
on day 4: 1.4
Enter the pounds eaten by monkey number 3
on day 5: 1.6
Enter the pounds eaten by monkey number 3
on day 6: 1.2
Enter the pounds eaten by monkey number 3
on day 7: 1.4
The average amount eaten on day 1 is 1.23 pounds.
The average amount eaten on day 2 is 1.30 pounds.
The average amount eaten on day 3 is 1.27 pounds.
The average amount eaten on day 4 is 1.40 pounds.
The average amount eaten on day 5 is 1.30 pounds.
The average amount eaten on day 6 is 1.23 pounds.
The average amount eaten on day 7 is 1.37 pounds.
Monkey number 2 ate the least amount of food,
0.70 pounds, on day 5
Monkey number 1 ate the most amount of food,
1.90 pounds, on day 4
*/