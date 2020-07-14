// Part D

#include <iostream>

using namespace std;

void coinToss()
{
    int random = rand() % 2 + 1;
    cout << (random == 1 ? "heads" : "tails") << endl;
}

int main()
{
    srand(1234);
    int tosses;
    cout << "How many tosses should I make? ";
    cin >> tosses;
    for (int i = 1; i <= tosses; i++)
    {
        cout << i << ":      ";
        coinToss();
    }
}

/*
How many tosses should I make? 8
1:      heads
2:      tails
3:      tails
4:      heads
5:      heads
6:      tails
7:      heads
8:      heads
*/