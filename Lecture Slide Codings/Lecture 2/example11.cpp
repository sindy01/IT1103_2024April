//Lecture 2 Slide 41

#include <iostream>

using namespace std;

int main()
{
	const double CONVERSION = 2.54;
	const int NO_OF_STUDENTS = 17;
	const char BLANK =' ';
	const double PAY_RATE = 15.75;
	
	//PAY_RATE = 16.67;	
	// This is wrong: you can't change the value of a constant
	
	cout<<PAY_RATE;
	
  	return 0;
}

