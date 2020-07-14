#include <iostream>

using namespace std;

int main()
{
    cout << "Characters for the ASCII Codes";
    char c;
    for (int i = 0; i < 128; i++)
    {
        c = i;
        cout << c;
        if (i % 16 == 0)
        {
            cout << endl;
        }
    }
}

/*
Characters for the ASCII Codes



!"#$%&'()*+,-./0
123456789:;<=>?@
ABCDEFGHIJKLMNOP
QRSTUVWXYZ[\]^_`
abcdefghijklmnop
qrstuvwxyz{|}~
*/