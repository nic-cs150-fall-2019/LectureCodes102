#include "car.h"


Car::Car()
{
    m_year = 2001;
    m_make = "Chevy";
    m_speed = 0;
    m_color = "White";
    m_fuelType = "Regular";
}

Car::Car(int year, string make)
{
    m_year = year;
    m_make = make;
    m_speed = 0;
    m_color = "Red";
    m_fuelType = "Regular";
}

Car::Car(int year, string make, int speed, string color, string fuel)
{
    m_year = year;
    m_make = make;
    m_speed = speed;
    m_color = color;
    m_fuelType = fuel;
}

void Car::setYear(int year)
{
    m_year = year;
}

void Car::setMake(string make)
{
    m_make = make;
}

void Car::setSpeed(int speed)
{
    if (speed >= 0)
    {
        m_speed = speed;
    }
    else
    {
        m_speed = 0;
        cout << "Invalid speed! Using default speed value of 0\n";
    }
    
}

void Car::setColor(string color)
{
    m_color = color;
}

void Car::setFuelType(string fuel)
{
    m_fuelType = fuel;
}

int Car::getYear()
{
    return m_year;
}

string Car::getMake()
{
    return m_make;
}

int Car::getSpeed()
{
    return m_speed;
}

string Car::getColor()
{
    return m_color;
}

string Car::getFuelType()
{
    return m_fuelType;
}

void Car::accelerate()
{
    m_speed += SPEED_CHANGE;
}

void Car::brake()
{
    if ((m_speed - SPEED_CHANGE) >= 0)
    {
        m_speed -= SPEED_CHANGE;
    }
}