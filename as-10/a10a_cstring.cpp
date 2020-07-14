// Part A

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char charr1[40], charr2[40], tempCharr1[40], tempCharr2[40];
    cout << "Enter a word: ";
    cin >> charr1;
    cout << "Enter another word: ";
    cin >> charr2;

    if (!strcmp(charr1, charr2))
    {
        cout << "You entered the same string twice.";
        return 0;
    }

    cout << "The words are not the same." << endl
         << "        " << charr1 << endl;

    for (int i = 0; i < strlen(charr1); i++)
        tempCharr1[i] = toupper(charr1[i]);
    cout << "        " << tempCharr1 << endl;

    for (int i = 0; i < strlen(charr1); i++)
        tempCharr1[i] = tolower(charr1[i]);
    cout << "        " << tempCharr1 << endl
         << "        " << strlen(charr1) << endl
         << "        " << charr1[0] << endl
         << "        " << charr1[strlen(charr1) - 1] << endl

         << "Second word:" << endl
         << "        " << charr2 << endl;

    for (int i = 0; i < strlen(charr2); i++)
        tempCharr2[i] = toupper(charr2[i]);
    cout << "        " << tempCharr2 << endl;

    for (int i = 0; i < strlen(charr2); i++)
        tempCharr2[i] = tolower(charr2[i]);
    cout << "        " << tempCharr2 << endl
         << "        " << strlen(charr2) << endl
         << "        " << charr2[0] << endl
         << "        " << charr2[strlen(charr2) - 1] << endl

         << "The entered words in order: "
         << (strcmp(charr1, charr2) < 0 ? charr1 : charr2) << " "
         << (strcmp(charr1, charr2) < 0 ? charr2 : charr1);
}

/*
PS C:\Users\Rinki\Documents\COMSC-110\as-10> ./a
Enter a word: Hello
Enter another word: Bye
The words are not the same.
        Hello
        HELLO
        hello
        H
        o
Second word:
        Bye
        BYE
        bye
        3
        B
        e
The entered words in order: Bye Hello
PS C:\Users\Rinki\Documents\COMSC-110\as-10> ./a
Enter a word: Bye
Enter another word: Bye
You entered the same string twice.
*/