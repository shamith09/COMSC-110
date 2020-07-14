// Part C

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num;
    cout << "Enter a series of digits with no spaces between them." << endl;
    cin >> num;

    int sum = 0, max = num[0] - '0', min = num[0] - '0';
    for (char c : num)
    {
        int n = c - '0';
        sum += n;
        if (n > max)
            max = n;
        else if (n > min)
            min = n;
    }

    cout << "The sum of those digits is " << sum << endl
         << "The highest digit is " << max << endl
         << "The lowest digit is " << min << endl;
}

/*
Enter a series of digits with no spaces between them.
12345
The sum of those digits is 15
The highest digit is 5
The lowest digit is 1
*/