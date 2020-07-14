#include <iostream>

int main()
{
    // Part A
    int item1 = 28;
    int item2 = 32;
    int item3 = 37;
    int item4 = 24;
    int item5 = 33;

    int sum = item1 + item2 + item3 + item4 + item5;
    int average = sum / 5;

    std::cout << "the sum is " << sum << "\n";
    std::cout << "the average is " << average << "\n\n";

    // Part B
    double item6 = 15.95;
    double item7 = 24.95;
    double item8 = 6.95;
    double item9 = 12.95;
    double item10 = 3.95;

    double subtotal = item6 + item7 + item8 + item9 + item10;
    double salesTax = subtotal * 0.07;
    double total = subtotal + salesTax;

    std::cout << "Price of item 1: " << item6 << "\n";
    std::cout << "Price of item 2: " << item7 << "\n";
    std::cout << "Price of item 3: " << item8 << "\n";
    std::cout << "Price of item 4: " << item9 << "\n";
    std::cout << "Price of item 5: " << item10 << "\n";
    std::cout << "Subtotal: " << subtotal << "\n";
    std::cout << "Sales Tax: " << salesTax << "\n";
    std::cout << "Total: " << total << "\n\n";

    // Part C
    std::cout << "char   " << sizeof(char) << "\n";
    std::cout << "int    " << sizeof(int) << "\n";
    std::cout << "float  " << sizeof(float) << "\n";
    std::cout << "double " << sizeof(double) << "\n\n";

    // Part D
    std::cout << "   *   " << "\n";
    std::cout << "  ***  " << "\n";
    std::cout << " ***** " << "\n";
    std::cout << "*******" << "\n";
    std::cout << " ***** " << "\n";
    std::cout << "  ***  " << "\n";
    std::cout << "   *   " << "\n";
}