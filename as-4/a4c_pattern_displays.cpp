#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Pattern A\n\n";
    string line = "";
    for (int i = 0; i < 10; i++)
    {
        line.append("+");
        cout << line << endl;
    }
    cout << "\nPattern B\n\n";
    line = "++++++++++";
    for (int i = 10; i >= 0; i--)
    {
        cout << line.substr(0, i) << endl;
    }
}

/*
Pattern A

+
++
+++
++++
+++++
++++++
+++++++
++++++++
+++++++++
++++++++++

Pattern B

++++++++++
+++++++++
++++++++
+++++++
++++++
+++++
++++
+++
++
+

*/