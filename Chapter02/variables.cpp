// variables.cpp
// Description: Working with characters. Demonstrate that characters
//    are internally represented as integers and that
//    characters are just special integers.
// Gabe de la Cruz
// CS150 102
#include <iostream>

using namespace std;

int main()
{
    // Declare character variable
    char letter;

    // characters are related to integers
    // See ASCII table
    letter = 'A' + 10;
    cout << letter << endl;

    letter = 'b' + 20;
    cout << letter << endl;

    return 0;
}
