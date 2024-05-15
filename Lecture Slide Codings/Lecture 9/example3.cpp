//Lecture 9 Slide 13 - Practice Question 01

#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int *ptr = &a;
	
	*ptr = 20;			// Alters the value stored inside the variable a
	cout << a << endl;
	
	return 0;
}
