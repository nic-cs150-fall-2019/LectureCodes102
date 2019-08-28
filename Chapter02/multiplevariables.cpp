// multiplevariables.cpp
// Description: Declaring multiple variables
// Gabe de la Cruz
// CS150 102
#include <iostream>

using namespace std;

int main()
{
    int floors = 15,
        rooms = 300,
        suites = 30,
        capacity = 100000;   // WRONG 100,000 no commas

    cout << "The Grand Hotel has " << floors << " floors\n"
         << "with " << rooms << " room and " << suites;
    cout << " suites.\nIt has a has a has max capacity of ";
    cout << capacity << " people.\n";
    return 0;
}
