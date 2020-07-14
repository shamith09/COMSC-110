// Part D

#include <iostream>

using namespace std;

int fib(int n)
{
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    while (true)
    {
        cout << "Enter a positive number (else to quit): ";
        cin >> n;
        if (!cin || n < 0) break;
        cout << "Fibonacci(" << n << ") is " << fib(n) << endl; 
    }
    cout << "Bye.";
}

/*
Enter a positive number (else to quit): 5
Fibonacci(5) is 5
Enter a positive number (else to quit): 6
Fibonacci(6) is 8
Enter a positive number (else to quit): 7
Fibonacci(7) is 13
Enter a positive number (else to quit): q
Bye.
*/