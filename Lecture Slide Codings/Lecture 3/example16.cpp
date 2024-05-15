//Lecture 3 Slide 31 - Implicit Type Conversion

#include <iostream>

using namespace std;

int main() 
{
	int m = 50; // integer m
	char n = 'x'; // character n

	// n is implicitly converted to int. ASCII value of 'x' is 120
	m = m + n;

	// m is implicitly converted to float
	float a = m + 3.0;

	cout << "m = " << m << endl
	<< "n = " << n << endl
	<< "a = " << a << endl;
	
	return 0;
}

