// Part C

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;
    ifstream file(fileName);

    int lineCount = 0;
    string line;
    while (getline(file, line))
        lineCount++;

    ifstream file2(fileName);

    int startIndex = lineCount - 10;
    int endIndex = startIndex + 10;
    if (startIndex < 0)
    {
        endIndex += startIndex;
        startIndex = 0;
    }

    for (int i = 0; i < endIndex; i++)
    {
        getline(file2, line);
        if (i >= startIndex)
            cout << line << endl;
    }
}

/*
Enter the file name: ai.txt
there is no one else in the world.
there is no one else in sight.
they were the only ones who mattered.
they were the only ones left.
he had to be with me.
she had to be with him.
i had to do this.
i wanted to kill him.
i started to cry.
i turned to him.
*/