// Part A

#include <iostream>

using namespace std;

int main()
{
    double x = 25, y = 20, z = 10;
    double *px = &x;
    double *py = &y;
    double *pz = &z;

    cout << "The value in x is " << x << endl
         << "The value in y is " << y << endl
         << "The value in z is " << z << endl
         << endl
         << "The address of x is " << &x << endl
         << "The address of y is " << &y << endl
         << "The address of z is " << &z << endl
         << endl
         << "The value *px is " << *px << endl
         << "The value *py is " << *py << endl
         << "The value *pz is " << *pz;
}

/*
The value in x is 25
The value in y is 20
The value in z is 10

The address of x is 0x61fea8
The address of y is 0x61fea0
The address of z is 0x61fe98

The value *px is 25
The value *py is 20
The value *pz is 10
*/