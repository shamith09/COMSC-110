// Part C

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const string MONTHS[] = { "January", "February", "March",
                              "April", "May", "June", "July",
                              "August", "September", "October",
                              "November", "December" };
    struct MonthData {
        double totalRainfall;
        double highTemp;
        double lowTemp;
        double avgTemp;
    } data[12] = { };

    double totalRainfall = 0, sumAvgTemps = 0, maxTemp = -101, minTemp = 141;
    int maxIndex, minIndex;
    for (int i = 0; i < 12; i++)
    {
        cout << MONTHS[i] << ": " << endl
             << "        Total Rainfall: ";
        cin >> data[i].totalRainfall;
        totalRainfall += data[i].totalRainfall;

        cout << "        High Temperature: ";
        cin >> data[i].highTemp;
        while (data[i].highTemp < -100 || data[i].highTemp > 140)
        {
            cout << "        Please enter a value between -100 and +140 degrees F: ";
            cin >> data[i].highTemp;
        }
        if (data[i].highTemp > maxTemp)
        {
            maxTemp = data[i].highTemp;
            maxIndex = i;
        }
        
        cout << "        Low Temperature: ";
        cin >> data[i].lowTemp;
        while (data[i].lowTemp < -100 || data[i].lowTemp > 140)
        {
            cout << "        Please enter a value between -100 and +140 degrees F: ";
            cin >> data[i].lowTemp;
        }
        if (data[i].lowTemp < minTemp)
        {
            minTemp = data[i].lowTemp;
            minIndex = i;
        }

        sumAvgTemps += data[i].avgTemp = (data[i].highTemp + data[i].lowTemp) / 2;
    }

    cout << fixed << setprecision(2)
         << "\nTotal Rainfall: " << totalRainfall << endl
         << "Average Monthly Rain: " << totalRainfall / 12 << endl
         << "Average Monthly Temperature: " << sumAvgTemps / 12 << endl
         << "Highest Temperature: " << maxTemp << "  (" << MONTHS[maxIndex] << ')' << endl
         << "Lowest Temperature: " << minTemp << "  (" << MONTHS[minIndex] << ')';
}

/*
January:
        Total Rainfall: 5.6
        High Temperature: 66
        Low Temperature: 33
February:
        Total Rainfall: 7.8
        High Temperature: 68
        Low Temperature: 31
March:
        Total Rainfall: 3.2
        High Temperature: 72
        Low Temperature: 47
April:
        Total Rainfall: 3.8
        High Temperature: 82
        Low Temperature: 55
May:
        Total Rainfall: 1.1
        High Temperature: 93
        Low Temperature: 57
June:
        Total Rainfall: 0.2
        High Temperature: 98
        Low Temperature: 65
July:
        Total Rainfall: 0
        High Temperature: 103
        Low Temperature: 69
August:
        Total Rainfall: 0
        High Temperature: 106
        Low Temperature: 64
September:
        Total Rainfall: 0
        High Temperature: 107
        Low Temperature: 66
October:
        Total Rainfall: 0
        High Temperature: 95
        Low Temperature: 56
November:
        Total Rainfall: 0.9
        High Temperature: 88
        Low Temperature: 45
December:
        Total Rainfall: 1.4
        High Temperature: 76
        Low Temperature: 35

Total Rainfall: 24.00
Average Monthly Rain: 2.00
Average Monthly Temperature: 69.88
Highest Temperature: 107.00  (September)
Lowest Temperature: 31.00  (February)
*/