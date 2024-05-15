//Lecture 11 Slide 18
//C++ Constructors

#include <iostream>

using namespace std;

class Circle
{
	private:
	    double radius;
	
	public:
		Circle();		// Constructor with no argument
		Circle(double r);	// Constructor with one argument
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
	//Object Oriented Programming
  
    return 0;
}

