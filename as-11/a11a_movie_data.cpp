// Part A

#include <iostream>
#include <string>

using namespace std;

struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
};

void displayData(MovieData movie)
{
    cout << "Title: " << movie.title << endl
         << "Director: " << movie.director << endl
         << "Released: " << movie.yearReleased << endl
         << "Running Time: " << movie.runningTime << " minutes" << endl;
}

int main()
{
    MovieData movie1 = {
        "War of the Worlds",
        "Byron Haskin",
        1953,
        88
    },
    movie2 = {
        "War of the Worlds",
        "Stephen Spielberg",
        2005,
        118
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


Title: War of the Worlds
Director: Stephen Spielberg
Released: 2005
Running Time: 118 minutes
*/