#include <iostream>
using namespace std;

class Circle
{
public:
    void setRadius(double r);
    double calculateArea();
    double calculateCircumference();

private:
    double m_radius;
};


void Circle::setRadius(double r)
{
    if (r >= 0.0)
    {
        m_radius = r;
    }
    else
    {
        // if r is an invalid value, use default value of 1.0
        m_radius = 1.0;
        cout << "Invalid radius. Using default value of 1.0\n";
    }
    
}

double Circle::calculateArea()
{
    return 3.14 * m_radius * m_radius;
}

double Circle::calculateCircumference()
{
    return 2 * 3.14 * m_radius;
}

int main()
{
    Circle circle1, circle2, circle3;

    circle3.setRadius(-1);
    

    circle1.setRadius(2.0);
    circle2.setRadius(6.2);

    cout << "Area of circle1: " << circle1.calculateArea() << '\n';
    cout << "Circumference of circle1: " << circle1.calculateCircumference() << '\n';
    cout << "Area of circle2: " << circle2.calculateArea() << '\n';
    cout << "Circumference of circle2: " << circle2.calculateCircumference() << '\n';
    return 0;
}