//Lecture 11 Slide 16
//Define Member Functions Outside the Class

#include <iostream>

using namespace std;

class Circle
{
	private:
	    double radius;
	
	public:
	    double getDiameter();
	    double getArea();
	    double getCircumference();
};

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

