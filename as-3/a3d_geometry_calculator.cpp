#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool running = true;
    while (running)
    {
        int selection;
        cout << "Geometry Calculator\n\n"
            << "1. Calculate the area of a Circle\n"
            << "2. Calculate the area of a Rectangle\n"
            << "3. Calculate the area of a Triangle\n"
            << "4. Quit\n\n"
            << "Enter your choice (1-4): ";
        cin >> selection;
        cout << "\n";

        switch (selection)
        {
            case 1:
                double radius;
                cout << "Enter the circle's radius: ";
                cin >> radius;
                if (radius < 0)
                {
                    cout << "\nError: radius cannot be negative.\n";
                    break;
                }
                cout << "\nThe area is " << M_PI * pow(radius, 2) << "\n";
                break;
            case 2:
                double l, w;
                cout << "Enter the rectangle's length: ";
                cin >> l;
                if (l < 0)
                {
                    cout << "\nError: length cannot be negative.\n";
                    break;
                }
                cout << "Enter the rectangle's width: ";
                cin >> w;
                if (w < 0)
                {
                    cout << "\nError: width cannot be negative.\n";
                    break;
                }
                cout << "\nThe area is " << l * w << "\n";
                break;
            case 3:
                double b, h;
                cout << "Enter the length of the base: ";
                cin >> b;
                if (b < 0)
                {
                    cout << "\nError: base length cannot be negative.\n";
                    break;
                }
                cout << "Enter the triangle's height: ";
                cin >> h;                
                if (h < 0)
                {
                    cout << "\nError: height cannot be negative.\n";
                    break;
                }
                cout << "\nThe area is " << 0.5 * b * h << "\n";
                break;
            case 4:
                cout << "Program ending.";
                running = false;
                break;
            default:
                cout << "Error: invalid selection. Must be integer (1-4).\n";
        }
    }

    /*
    Geometry Calculator

    1. Calculate the area of a Circle   
    2. Calculate the area of a Rectangle
    3. Calculate the area of a Triangle 
    4. Quit

    Enter your choice (1-4): 1

    Enter the circle's radius: 2

    The area is 12.5664
    Geometry Calculator

    1. Calculate the area of a Circle
    2. Calculate the area of a Rectangle
    3. Calculate the area of a Triangle
    4. Quit

    Enter your choice (1-4): 2

    Enter the rectangle's length: 3
    Enter the rectangle's width: 4

    The area is 12
    Geometry Calculator

    1. Calculate the area of a Circle
    2. Calculate the area of a Rectangle
    3. Calculate the area of a Triangle
    4. Quit

    Enter your choice (1-4): 3

    Enter the length of the base: 4
    Enter the triangle's height: 5

    The area is 10
    Geometry Calculator

    1. Calculate the area of a Circle
    2. Calculate the area of a Rectangle
    3. Calculate the area of a Triangle
    4. Quit

    Enter your choice (1-4): 4

    Program ending.
    */
}