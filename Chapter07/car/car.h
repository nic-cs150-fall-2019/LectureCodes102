#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace std;

const int SPEED_CHANGE = 5;

class Car
{
public:
    //Car();
    Car(int year, string make);
    Car(int year, string make, int speed, string color, string fuel);
    void setYear(int year);
    void setMake(string make);
    void setSpeed(int speed);
    void setColor(string color);
    void setFuelType(string fuel);
    int getYear();
    string getMake();
    int getSpeed();
    string getColor();
    string getFuelType();

    void accelerate();
    void brake();

private:
    int m_year;
    string m_make;
    int m_speed;
    string m_color;
    string m_fuelType;
};

#endif