#include <iostream>
#include <string>

using namespace std;

int main()
{
    int l1, w1, l2, w2;
    cout << "Enter the length of the 1st rectangle: ";
    cin >> l1;
    cout << "Enter the width of the 1st rectangle: ";
    cin >> w1;
    cout << "Enter the length of the 2nd rectangle: ";
    cin >> l2;
    cout << "Enter the width of the 2nd rectangle: ";
    cin >> w2;

    string str;
    if (l1 * w1 > l2 * w2)
        cout << "The 1st rectangle has the greater area.";
    else if (l1 * w1 < l2 * w2)
        cout << "The 2nd rectangle has the greater area.";
    else
        cout << "Both rectangles have the same areas.";

    /*
    Enter the length of the 1st rectangle: 4
    Enter the width of the 1st rectangle: 3
    Enter the length of the 2nd rectangle: 5
    Enter the width of the 2nd rectangle: 2
    The 1st rectangle has the greater area.
    */
}