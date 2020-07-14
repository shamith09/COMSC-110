// Part C

#include <iostream>

using namespace std;

void referenceSwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void pointerSwap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 11, b = 22;
    cout << "At first (a, b): ("
         << a << ", " << b << ")" << endl;

    referenceSwap(a, b);
    cout << "After referenceSwap(a, b): ("
         << a << ", " << b << ")" << endl;
    
    pointerSwap(&a, &b);
    cout << "After pointerSwap(a, b): ("
         << a << ", " << b << ")" << endl;
}

/*
At first (a, b): (11, 22)
After referenceSwap(a, b): (22, 11)
After pointerSwap(a, b): (11, 22)
*/