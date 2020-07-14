// Part D

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string fileName, search;
    cout << "Enter the file name: ";
    cin >> fileName;
    cout << "Enter string to search for: ";
    cin >> search;
    cout << endl;

    ifstream file(fileName);
    string line;
    int i = 0;
    while (getline(file, line))
    {
        i++;
        if (line.find(search) != string::npos)
        {
            cout << " " << i << ": " << line << endl;
        }
    }
}

/*
Enter the file name: ai.txt
Enter string to search for: moment
 20: he was silent for a long moment.
 21: he was silent for a moment.
 22: it was quiet for a moment.
*/