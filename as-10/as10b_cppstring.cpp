// Part B

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2, temp;
    cout << "Enter first word: ";
    cin >> str1;
    cout << "Enter second word: ";
    cin >> str2;

    cout << "\n1st word: " << str1 << endl
         << "  Total characters: " << str1.length() << endl
         << "  First character: " << str1[0] << endl
         << "  Last character: " << str1[str1.length() - 1] << endl;

    for (char c : str1)
        temp += toupper(c);
    cout << "  First word upper: " << temp << endl;

    temp.erase();
    for (char c : str1)
        temp += tolower(c);
    cout << "  First word lower: " << temp << endl

         << "2nd word: " << str2 << endl
         << "  Total characters: " << str2.length() << endl
         << "  First character: " << str2[0] << endl
         << "  Last character: " << str2[str2.length() - 1] << endl;

    temp.erase();
    for (char c : str2)
        temp += toupper(c);
    cout << "  Second word upper: " << temp << endl;

    temp.erase();
    for (char c : str2)
        temp += tolower(c);
    cout << "  Second word lower: " << temp << "\n\n";

    int compare = str1.compare(str2);
    if (compare)
        cout << str1 << " is NOT the same as " << str2 << endl
             << "Alphabetical order: "
             << (compare < 0 ? str1 : str2) << " "
             << (compare < 0 ? str2 : str1);
    else
        cout << str1 << " is the same as " << str2;
}

/*
Enter first word: Health
Enter second word: Wealth

1st word: Health
  Total characters: 6
  First character: H
  Last character: h
  First word upper: HEALTH
  First word lower: health
2nd word: Wealth
  Total characters: 6
  First character: W
  Last character: h
  Second word upper: WEALTH
  Second word lower: wealth

Health is NOT the same as Wealth
Alphabetical order: Health Wealth
*/