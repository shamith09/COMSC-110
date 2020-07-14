#include <iostream>
#include <string>

using namespace std;

int main()
{
    string runner1, runner2, runner3;
    double time1, time2, time3;
    cout << "Enter the names of three runners and their finishing times.\n"
         << "I will tell you who came in first, second, and third.\n\n"
         << "Name of Runner 1: ";
    getline(cin, runner1);
    cout << "Runner 1's finishing time: ";
    cin >> time1;

    cout << "Name of Runner 2: ";
    cin.ignore();
    getline(cin, runner2);
    cout << "Runner 2's finishing time: ";
    cin >> time2;

    cout << "Name of Runner 3: ";
    cin.ignore();
    getline(cin, runner3);
    cout << "Runner 3's finishing time: ";
    cin >> time3;
    cout << "\n";

    if (time1 < time2 && time1 < time3)
    {
        cout << runner1 << " came in 1st place.\n";
        if (time2 < time3)
        {
            cout << runner2 << " came in 2nd place.\n"
                 << runner3 << " came in 3rd place.\n";
        }
        else
        {
            cout << runner3 << " came in 2nd place.\n"
                 << runner2 << " came in 3rd place.\n";
        }
    }
    else if (time2 < time1 && time2 < time3)
    {
        cout << runner2 << " came in 1st place.\n";
        if (time1 < time3)
        {
            cout << runner1 << " came in 2nd place.\n"
                 << runner3 << " came in 3rd place.\n";
        }
        else
        {
            cout << runner3 << " came in 2nd place.\n"
                 << runner1 << " came in 3rd place.\n";
        }
    }
    else
    {
        cout << runner3 << " came in 1st place.\n";
        if (time1 < time2)
        {
            cout << runner1 << " came in 2nd place.\n"
                 << runner2 << " came in 3rd place.\n";
        }
        else
        {
            cout << runner2 << " came in 2nd place.\n"
                 << runner1 << " came in 3rd place.\n";
        }
    }

    
    /*
    Enter the names of three runners and their finishing times.
    I will tell you who came in first, second, and third.

    Name of Runner 1: Jon Doe
    Runner 1's finishing time: 15.15
    Name of Runner 2: Matt Long
    Runner 2's finishing time: 14.41
    Name of Runner 3: Sam Short
    Runner 3's finishing time: 13.57

    Sam Short came in 1st place.
    Matt Long came in 2nd place.
    Jon Doe came in 3rd place.
    */
}