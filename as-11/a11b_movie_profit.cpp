// Part B

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
    double productionCost;
    double firstYearRevenue;
    double firstYearProfit;
};

void displayData(MovieData movie)
{
    cout << "Title: " << movie.title << endl
         << "Director: " << movie.director << endl
         << "Released: " << movie.yearReleased << endl
         << fixed << setprecision(2)
         << "Running Time: " << movie.runningTime << " minutes" << endl
         << "Production cost: " << '$' << movie.productionCost << endl
         << "First year revenue:" << '$' << movie.firstYearRevenue << endl
         << "First year "
         << (movie.firstYearProfit >= 0 ? "profit" : "loss")
         << ": " << '$' << movie.firstYearProfit;
}

int main()
{
    MovieData movie1 = {
        "War of the Worlds",
        "Byron Haskin",
        1953,
        88,
        15000000,
        28000000,
        13000000
    },
    movie2 = {
        "War of the Worlds",
        "Stephen Spielberg",
        2005,
        118,
        22000000,
        14000000,
        -8000000
    };

    displayData(movie1);
    cout << "\n\n";
    displayData(movie2);
}

/*
Title: War of the Worlds
Director: Byron Haskin
Released: 1953
Running Time: 88 minutes
Production cost: $15000000.00
First year revenue:$28000000.00
First year profit: $13000000.00

Title: War of the Worlds
Director: Stephen Spielberg
Released: 2005
Running Time: 118 minutes
Production cost: $22000000.00
First year revenue:$14000000.00
First year loss: $-8000000.00
*/