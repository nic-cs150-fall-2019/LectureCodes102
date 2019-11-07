#include <iostream>
#include "car.h"
using namespace std;


int main()
{
    Car car1(2011, "Honda", 10, "Blue", "Regular"), car2(2001, "Toyota");

    cout << "Make of Car: " << car1.getMake() << '\n';
    cout << "Make of Car: " << car2.getMake() << '\n';

    // string make;
    // cout << "Make of your car: ";
    // getline(cin, make);
    // car1.setMake(make);

    // int year;
    // cout << "Year of your car: ";
    // cin >> year;
    // car1.setYear(year);

    // string color;
    // cout << "Color of your car: ";
    // cin.ignore();
    // getline(cin, color);
    // car1.setColor(color);

    // string fuelType;
    // cout << "Fuel type of your car: ";
    // getline(cin, fuelType);
    // car1.setFuelType(fuelType);

    // int speed;
    // cout << "Initial speed: ";
    // cin >> speed;
    // car1.setSpeed(speed);

    // cout << "Make of Car: " << car1.getMake() << '\n';
    // cout << "Year of Car: " << car1.getYear() << '\n';
    // cout << "Color of Car: " << car1.getColor() << '\n';
    // cout << "Fuel Type of Car: " << car1.getFuelType() << '\n';
    // cout << "Initial speed: " << car1.getSpeed() << "mph\n";

    // for (int i = 0; i < 5; ++i)
    // {
    //     car1.accelerate();
    //     cout << "Speed: " << car1.getSpeed() << "mph\n";
    // }

    // car1.brake();
    // cout << "Speed: " << car1.getSpeed() << "mph\n";

    return 0;
}