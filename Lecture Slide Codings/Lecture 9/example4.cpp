//Lecture 9 Slide 13 - Practice Question 01

#include <iostream>

using namespace std;

int main()
{
	int m = 10;
	int *p = &m;
	m = *p + 10;
	cout << m << endl;
	
	return 0;
}
