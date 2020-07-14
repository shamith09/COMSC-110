// Part B

#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    int intArr[] = {1, 2, 3, 4, 5};
    char charArr[] = {'a', 'b', 'c', 'd', 'e'};

    for (char *pc = charArr; pc < charArr + SIZE; pc++)
        cout << *pc << " ";
    cout << endl;
    for (int *pi = intArr; pi < intArr + SIZE; pi += 2)
        cout << *pi << " ";
}

/*
a b c d e 
1 3 5 
*/