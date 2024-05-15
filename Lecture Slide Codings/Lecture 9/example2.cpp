//Lecture 9 Slide 11,12 - Referencing and Dereferencing in C++

#include <iostream>
using namespace std;
int main()
{
	int *pointVar, var; 
	var = 5; 
	// Assign address of variable var to pointVar pointer
	pointVar = &var;	 
	
	cout << var << endl;	// Value of variable var
	cout << &var << endl;	// Memory address of variable var
	cout << pointVar << endl;	// Value of pointer pointVar 
	cout << &pointVar << endl;	// Memory address of pointer pointVar
	cout << *pointVar << endl;	// Access value pointed by pointVar
	
	return 0;
}



