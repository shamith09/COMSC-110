// Part D

// swap was not working

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(5);
    vec.reserve(10);
    vec.push_back(1);
    vec.push_back(2);
    vec.pop_back();
    vec.insert(vec.begin(), 1);
    
    cout << "Capacity: " << vec.capacity() << endl
         << "Size: " << vec.size() << endl
         << "Element at index 3: " << vec.at(3) << endl
         << "Front: " << vec.front() << endl
         << "Back: " << vec.back() << "\n\n";

    vec.push_back(101);
    vec.push_back(10100);
    vec.erase(vec.end() - 1);

    /* vector<int> vec2(10);
    vec.swap(vec2); */

    cout << "Capacity: " << vec.capacity() << endl
         << "Size: " << vec.size() << endl
         << "Element at index 3: " << vec.at(3) << endl
         << "Front: " << vec.front() << endl
         << "Back: " << vec.back();
}

/*
Capacity: 10
Size: 7
Element at index 3: 0
Front: 1
Back: 1

Capacity: 10
Size: 8
Element at index 3: 0
Front: 1
Back: 101
*/