//Lecture 11 Overall

#include <iostream>

using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle();         // Constructor with no argument
    Circle(double r); // Constructor with one argument
    double getDiameter();
    double getArea();
    double getCircumference();
};

// Default constructor definition
Circle::Circle()
{
    radius = 0.0; // Default radius is set to 0.0
}

// Parameterized constructor definition
Circle::Circle(double r)
{
    radius = r;
}

double Circle::getDiameter()
{
    return 2 * radius;
}

double Circle::getArea()
{
    double area = 3.14 * radius * radius;
    return area;
}

double Circle::getCircumference()
{
    return 2 * 3.14 * radius;
}

int main()
{
    // Create Circle objects using both constructors
    Circle circle1;        // Default constructor (radius is 0.0)
    Circle circle2(5.0);   // Parameterized constructor with radius 5.0

    // Display information about each circle
    cout << "Circle 1:" << endl;
    cout << "Diameter: " << circle1.getDiameter() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Circumference: " << circle1.getCircumference() << endl;

    cout << endl;

    cout << "Circle 2:" << endl;
    cout << "Diameter: " << circle2.getDiameter() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Circumference: " << circle2.getCircumference() << endl;

    return 0;
}

