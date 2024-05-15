//Lecture 11 Slide 14
//Define Member Functions Inside the Class

#include <iostream>

using namespace std;

class Circle
{
	private:
	    double radius;
	
	public:
	    double getDiameter()
	    {
	    	return 2 * radius; 
		}
	    double getArea()
	    {
	    	double area = 3.14 * radius * radius;
         	return area; 
		}
	    double getCircumference()
		{
			return 2 * 3.14 * radius;
		}
};


int main()
{
	//Object Oriented Programming
  
    return 0;
}

