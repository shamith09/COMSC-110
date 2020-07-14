// Part E

#include <iostream>
#include <iomanip>

using namespace std;

double celsius(int f)
{
    return (5. / 9) * (f - 32);
}

int main()
{
    cout << "------------------------------" << endl
         << "  Fahrenheit       Celsius" << endl
         << "------------------------------" << endl;
    for (int i = 0; i <= 20; i++)
    {
        cout << setw(9) << i
             << setw(16) << setprecision(2) << fixed
             << celsius(i) << endl;
    }
}

/*
------------------------------
Fahrenheit       Celsius
------------------------------
0          -17.78
1          -17.22
2          -16.67
3          -16.11
4          -15.56
5          -15.00
6          -14.44
7          -13.89
8          -13.33
9          -12.78
10          -12.22
11          -11.67
12          -11.11
13          -10.56
14          -10.00
15           -9.44
16           -8.89
17           -8.33
18           -7.78
19           -7.22
20           -6.67
*/