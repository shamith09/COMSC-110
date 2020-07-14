#include <iostream>
#include <iomanip>
#include <cstdlib>

int main()
{
	// Part A
	double gal, miles, mpg;
	std::cout << "Enter the number of gallons of gas the car can hold and the number of miles it can be driven on a full tank: ";
	std::cin >> gal >> miles;
	mpg = miles / gal;

	std::cout << "\nIf a car holds " << gal << " gallons of gasoline\n"
			  << "and can travel " << miles << " miles before refueling,\n"
			  << "then it will get about " << mpg << " mpg.\n\n";

	// Part B
	std::cout << std::fixed;

	int a, b, c;
	std::cout << "Enter the number of Class A tickets sold: ";
	std::cin >> a;
	std::cout << "Enter the number of Class B tickets sold: ";
	std::cin >> b;
	std::cout << "Enter the number of Class C tickets sold: ";
	std::cin >> c;

	double total = a * 15 + b * 12 + c * 9;

	std::cout << "\nTotal income from sale of tickets is "
			  << std::setprecision(2) << total << "\n\n";

	// Part C
	double celsius;
	std::cout << "Enter the temperature in Celsius: ";
	std::cin >> celsius;
	std::cout << (9. / 5) * celsius + 32
			  << " degrees Fahrenheit.\n\n";

	// Part D
	srand(time(0));
	int num1 = rand() % 900 + 100;
	int num2 = rand() % 900 + 100;

	std::cout << std::setprecision(0);
	std::cout << std::setw(6) << std::right
			  << num1 << "\n"
			  << "+"
			  << std::setw(5) << std::right
			  << num2 << "\n"
			  << "-----\n\n"
			  << "Press Enter to see the answer . . .\n\n";
	std::system("pause > nul");
	std::cout << std::setw(6) << std::right
			  << num1 << "\n"
			  << "+"
			  << std::setw(5) << std::right
			  << num2 << "\n"
			  << "-----"
			  << "\n"
			  << std::setw(6) << std::right
			  << num1 + num2;
}