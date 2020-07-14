// Part C

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string TYPES[5] = { "mild", "medium", "sweet", "hot", "zesty" };
    int jarsSold[5] = { }, max = -1, min, maxIndex = 0, minIndex = 0, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        while (true)
        {
            cout << "Jars sold last month of "
                << setw(6) << left << TYPES[i] << ": ";
            cin >> jarsSold[i];
            if (jarsSold[i] > 0) break;
            cout << "Enter a non-negative amount: ";
        }
        sum += jarsSold[i];
        if (jarsSold[i] > max)
        {
            max = jarsSold[i];
            maxIndex = i;
        }
        else if (i == 0 || jarsSold[i] < min)
        {
            min = jarsSold[i];
            minIndex = i;
        }
    }

    cout << "\n\n"
         << "     Salsa Sales Report" << endl
         << "Name              Jars Sold" << endl
         << "____________________________" << endl;
    
    for (int i = 0; i < 5; i++)
        cout << setw(10) << left << TYPES[i]
             << right << setw(17) << jarsSold[i] << endl;

    cout << endl
         << setw(10) << left << "Total Sales:"
         << right << setw(15) << sum << endl;
    cout << setw(10) << left << "High Seller:"
         << right << setw(15) << TYPES[maxIndex] << endl;
    cout << setw(10) << left << "Low Seller :"
         << right << setw(15) << TYPES[minIndex] << endl;
}

/*
Jars sold last month of mild  : 12
Jars sold last month of medium: 23
Jars sold last month of sweet : 34
Jars sold last month of hot   : 45
Jars sold last month of zesty : 56


     Salsa Sales Report     
Name              Jars Sold
____________________________
mild                     12
medium                   23
sweet                    34
hot                      45
zesty                    56

Total Sales:            170
High Seller:          zesty
Low Seller :           mild
*/