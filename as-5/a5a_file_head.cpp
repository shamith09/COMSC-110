// All files display strings like "ΓÇ¥" when encountering curly quotes [“, ”, ’].
// To get normal results, replace curly quotes with straight quotes in
// ai.txt file.

// Part A

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file("ai.txt");
    string line;
    for (int i = 0; i < 10; i++)
    {
        getline(file, line);
        cout << line << endl;
    }
}

/*
No.
he said.
"no," he said.
"no," i said.
"i know," she said.
"thank you," she said.
"come with me," she said.
"talk to me," she said.
"don't worry about it," she said.
it made me want to cry.
*/