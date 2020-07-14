// Part B

#include <iostream>
#include <iomanip>

using namespace std;

double fallingDistance(int time)
{
    return time * time * 4.9;
}

int main()
{
    cout << "Seconds         Distance" << endl
         << "=============================" << endl;
    for (int i = 1; i <= 10; i++)
        cout << setw(2) << i
             << setw(20) << setprecision(2) << fixed
             << fallingDistance(i)
             << " meters" << endl;
}

/*
Seconds         Distance
=============================
 1                4.90 meters
 2               19.60 meters
 3               44.10 meters
 4               78.40 meters
 5              122.50 meters
 6              176.40 meters
 7              240.10 meters
 8              313.60 meters
 9              396.90 meters
10              490.00 meters
*/