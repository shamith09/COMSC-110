// Part D

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string pwd;
    bool low, cap, digit, length;
    low = cap = digit = length = false;
    while (true)
    {
        cout << "Create your password: ";
        cin >> pwd;

        length = pwd.length() > 6;
        for (char c : pwd)
        {
            if (isdigit(c)) digit = true; 
            else
            {
                if (islower(c)) low = true;
                else cap = true;
            }
        }

        if (low && cap && digit && length)
        {
            cout << "Your password is valid.";
            break;
        }

        if (!length)
            cout << "Must be 6 or more characters." << endl;
        if (!digit)
            cout << "Must be at least one digit." << endl;
        if (!low)
            cout << "Must be at least one lowercase character." << endl;
        if (!cap)
            cout << "Must be at least one uppercase character." << endl;
        cout << "Your password is NOT valid, Try again." << "\n\n";
    }
}

/*
Create your password: 123456
Must be 6 or more characters.
Must be at least one lowercase character.
Must be at least one uppercase character.
Your password is NOT valid, Try again.

Create your password: kiwi2
Must be 6 or more characters.
Must be at least one uppercase character.
Your password is NOT valid, Try again.

Create your password: Kiwi100
Your password is valid.
*/