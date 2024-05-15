//Lecture 9 Slide 13 - Practice Question 01

#include <iostream>

using namespace std;

int main()
{
	int *ptr;
	int x = 5;
	
	ptr = &x;
	cout << x << " " << *ptr << endl;
	
	*ptr += 5;
	cout << x-1 << " " << *ptr << endl;
	
	(*ptr)++;
	cout << x+1 << " " << *ptr << endl;
	
	return 0;
}
