// Part C

#include <iostream>
#include <iomanip>

using namespace std;

int getScore(int &input, int i)
{
    cout << "Enter test score #" << i << ": ";
    cin >> input;
    return input < 0 || input > 100 ? -1 : 0;
}
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    int lowest = 100;
    if (score1 < lowest)
        lowest = score1;
    if (score2 < lowest)
        lowest = score2;
    if (score3 < lowest)
        lowest = score3;
    if (score4 < lowest)
        lowest = score4;
    if (score5 < lowest)
        lowest = score5;
    return lowest;
}
double calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    double sum = 0;
    int lowest = findLowest(score1, score2, score3, score4, score5);
    if (score1 != lowest)
        sum += score1;
    if (score2 != lowest)
        sum += score2;
    if (score3 != lowest)
        sum += score3;
    if (score4 != lowest)
        sum += score4;
    if (score5 != lowest)
        sum += score5;
    return sum / 4;
}

int main()
{
    int input, score1 = -1, score2 = -1, score3 = -1, score4 = -1, score5 = -1;

    for (int i = 1; i <= 5; i++)
    {
        while (getScore(input, i) < 0)
            cout << "Error: score must be between 0 and 100 (inclusive)." << endl;
        if (score1 < 0)
            score1 = input;
        else if (score2 < 0)
            score2 = input;
        else if (score3 < 0)
            score3 = input;
        else if (score4 < 0)
            score4 = input;
        else
            score5 = input;
    }
    
    double average = calcAverage(score1, score2, score3, score4, score5);

    // do the calcualtion and deduct the small from sum
    // before displaying it.
    cout << "After dropping the lowest score, the test average is "
         << fixed << setprecision(2) << average;
}

/*
Enter test score #1: 23
Enter test score #2: 25
Enter test score #3: 29
Enter test score #4: 11
Enter test score #5: 25
After dropping the lowest score, the test average is 25.50
*/