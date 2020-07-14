// Part A

#include <iostream>
#include <iomanip>
using namespace std;

// implementation example:
double getLength()
{
	double length;
	cout << "Enter the length: ";
	cin >> length;
	return length;
}

// You are to follow the getLength() example, and to implement 3 more functions:
// getWidth(), getArea(), displayData()
// then replace the original code main program with the functions!

double getWidth()
{
	double width;
	cout << "Enter the width: ";
	cin >> width;
	return width;
}

double getArea(double length, double width)
{
	return length * width;
}

void displayData(double length, double width, double area)
{
	cout << "\nRectangle Data"
		 << "\n--------------" << fixed << setprecision(2)
		 << "\nLength: " << setw(10) << length
		 << "\nWidth:  " << setw(10) << width
		 << "\nArea:   " << setw(10) << area;
}
int main()
{
	double length; // To hold the rectangle's length
	double width;  // To hold the rectangle's width
	double area;   // To hold the rectangle's area

	// Get the rectangle's length
	// cout << "Enter the length: ";
	// cin >> length;
	length = getLength();

	// Get the rectangle's width
	// Define/refer an external function as getWidth
	width = getWidth();

	// Get the rectangle's area
	// Define/refer an external function as getArea
	area = getArea(length, width);

	// Display the rectangle's data
	// Define/refer an external function as displayData
	displayData(length, width, area);

	return 0;
}

/*
Enter the length: 3.4
Enter the width: 4.5

Rectangle Data
--------------
Length:       3.40
Width:        4.50
Area:        15.30
*/