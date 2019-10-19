#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string city;
    char ch;

    cout << "Enter a name: ";
    cin >> name;
    cin.ignore();
    //getline(cin, name);

    cout << "Press enter to continue";
    cin.get();

    cout << "Enter a city: ";
    //cin >> city;
    getline(cin, city);

    cout << endl;
    cout << name << endl << city << endl;
}

//int main()
//{
//    int length;
//    double width;
//
//    cout << "Enter length: " << endl;
//    cin >> length;
//
//    cout << "Enter width: ";
//    cin >> width;
//
//    cout << "l=" << length << " w=" << width;
//    return 0;
//}
