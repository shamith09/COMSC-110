#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    bool running = true;
    while (running)
    {
        int selection;
        cout << "        Math Tutor Menu" << endl
            << "------------------------------" << endl
            << "1. Addition problem" << endl
            << "2. Subtraction problem" << endl
            << "3. Multiplication problem" << endl
            << "4. Division problem" << endl
            << "5. Quit this program" << endl
            << "------------------------------" << endl
            << "Enter your choice (1-5): ";
        cin >> selection;
        cout << "\n\n";

        srand(time(0));
        int num1 = rand() % 1000;
        int num2 = rand() % 1000;
        int userAnswer;

        // doubles for division
        double uAnswer;
        double ans;

        switch (selection)
        {
            case 1:
                cout << setw(6) << right
                     << num1 << endl
                     << "+"
                     << setw(5) << right
                     << num2 << endl
                     << "-----" << endl
                     << "   ";
                cin >> userAnswer;

                if (userAnswer == num1 + num2)
                    cout << "Congratulations!\n"
                         << "The answer is " << userAnswer << "\n\n";
                else
                    cout << "Sorry, that is incorrect.\n"
                         << "The answer is " << num1 + num2 << "\n\n";
                break;
            case 2:
                cout << setw(6) << right
                     << num1 << endl
                     << "-"
                     << setw(5) << right
                     << num2 << endl
                     << "-----" << endl
                     << "   ";
                cin >> userAnswer;

                if (userAnswer == num1 - num2)
                    cout << "Congratulations!\n"
                         << "The answer is " << userAnswer << "\n\n";
                else
                    cout << "Sorry, that is incorrect.\n"
                         << "The answer is " << num1 - num2 << "\n\n";
                break;
            case 3:
                cout << setw(6) << right
                     << num1 << endl
                     << "*"
                     << setw(5) << right
                     << num2 << endl
                     << "-----" << endl
                     << "   ";
                cin >> userAnswer;

                if (userAnswer == num1 * num2)
                    cout << "Congratulations!\n"
                         << "The answer is " << userAnswer << "\n\n";
                else
                    cout << "Sorry, that is incorrect.\n"
                         << "The answer is " << num1 * num2 << "\n\n";
                break;
            case 4:
                if (num1 < num2)
                {
                    int temp = num1;
                    num1 = num2;
                    num2 = temp;
                }
                cout << setw(6) << right
                     << num1 << endl
                     << "/"
                     << setw(5) << right
                     << num2 << endl
                     << "-----" << endl
                     << "   ";
                cin >> uAnswer;
                ans = (double) num1 / num2;
                ans = round(ans * 100) / 100;

                if (uAnswer == ans)
                    cout << "Congratulations!\n"
                         << "The answer is " << uAnswer << "\n\n";
                else
                    cout << "Sorry, that is incorrect.\n"
                         << "The answer is " << ans << "\n\n";
                break;
            case 5:
                cout << "Thank you for using Math Tutor.";
                running = false;
                break;
            default:
                cout << "Error: selection must be integer (1-5).\n\n";
        }
    }
}

/*
        Math Tutor Menu       
------------------------------
1. Addition problem
2. Subtraction problem        
3. Multiplication problem     
4. Division problem
5. Quit this program
------------------------------
Enter your choice (1-5): 2    


   490
-  498
----- 
   -8 
Congratulations!
The answer is -8

        Math Tutor Menu       
------------------------------
1. Addition problem
2. Subtraction problem        
3. Multiplication problem     
4. Division problem
5. Quit this program
------------------------------
Enter your choice (1-5): 1    


   529
+  407
----- 
   132
Sorry, that is incorrect.     
The answer is 936

        Math Tutor Menu       
------------------------------
1. Addition problem
2. Subtraction problem
3. Multiplication problem
4. Division problem
5. Quit this program
------------------------------
Enter your choice (1-5): 3


   552
*  110
-----
   662
Sorry, that is incorrect.
The answer is 60720

        Math Tutor Menu
------------------------------
1. Addition problem
2. Subtraction problem
3. Multiplication problem
4. Division problem
5. Quit this program
------------------------------
Enter your choice (1-5): 4


   999
/  595
-----
   1.68
Congratulations!
The answer is 1.68

        Math Tutor Menu
------------------------------
1. Addition problem
2. Subtraction problem
3. Multiplication problem
4. Division problem
5. Quit this program
------------------------------
Enter your choice (1-5): 5


Thank you for using Math Tutor.
*/