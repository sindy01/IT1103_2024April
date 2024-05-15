//Lecture 10 Slide 15
//User Defined Data Types (typedef)

#include <iostream>

using namespace std;

int main()
{
	typedef int Length;
  	
	Length a, b, len;
	Length numbers[10]; 
	
	a = 7;
	b = -3;
	len = 23;
	numbers[1] = 9;
	
	cout << a << " " << b << " " << len << " " << numbers[1] << endl;

    return 0;
}

