#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int speed, time;
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> time;

    if (speed < 0)
    {
        cout << "Error: speed cannot be less than 0 mph.";
        return 0;
    }
    if (time < 0)
    {
        cout << "Error: number of hours traveled cannot be less than 1.";
        return 0;
    }

    cout << "\nHour    Distance Traveled in Miles" << endl
         << "----------------------------------" << endl;
    for (int i = 1; i <= time; i++)
    {
        cout << i << setw(12) << right << speed * i << endl;
    }
}

/*
Hour    Distance Traveled in Miles
----------------------------------
1          65
2         130
3         195
4         260
5         325
6         390
7         455
8         520
*/