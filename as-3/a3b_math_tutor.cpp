#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	int num1 = rand() % 900 + 100;
	int num2 = rand() % 900 + 100;
	int userAnswer;

	cout << setw(6) << right
		 << num1 << "\n"
		 << "+"
		 << setw(5) << right
		 << num2 << "\n"
		 << "-----\n\n"
		 << "Enter to the answer here: ";
	cin >> userAnswer;

	if (userAnswer == num1 + num2)
		cout << "Congratulations!\n"
			 << "The answer is " << userAnswer;
	else
		cout << "Sorry, that is incorrect.\n"
			 << "The answer is " << num1 + num2;

	/*
	   384
	+  877
	-----

	Enter to the answer here: 1261
	Congratulations!
	The answer is 1261
	*/
}