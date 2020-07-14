#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    double num, sum = 0, average;
    int count = 0;
    cout << "Read random.txt file.";
    ifstream inputFile;
    inputFile.open("random.txt");
    while (inputFile) {
        inputFile >> num;
        sum += num;
        count++;
    }
    cout << "\nCount of the numbers: " << count
         << "\nSum of the numbers: " << sum
         << "\nAverage of the numbers: " << sum * 1. / count;
    inputFile.close();
}

/*
Read random.txt file.
Count of the numbers: 201
Sum of the numbers: 106042
Average of the numbers: 527.572
*/