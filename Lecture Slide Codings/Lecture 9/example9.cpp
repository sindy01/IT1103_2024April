//Lecture 9 Slide 19 - Practice Question 02
	
#include <iostream>

using namespace std;

int main()
{
    int *ptr;
	int arr[] = {5, 10, 15};
	ptr = arr;
	cout << *ptr << endl;
	cout << *(ptr+1) << endl;
	cout << *ptr+1 << endl; 

    return 0;
}

/*

int *ptr;
Declares a pointer ptr to an integer.

int arr[] = {5, 10, 15};
Declares an integer array arr with three elements.

ptr = arr;
Assigns the address of the first element of the array 
arr to the pointer ptr.

cout << *ptr << endl;
Prints the value pointed to by ptr, which is the 
first element of the array. Output: 5.

cout << *(ptr + 1) << endl;
Prints the value pointed to by the expression ptr + 1, 
which is the second element of the array. Output: 10.

cout << *ptr + 1 << endl;
Adds 1 to the value pointed to by ptr and then prints 
the result. It's important to note that the addition 
operation is performed after dereferencing ptr. Output: 6 (5 + 1).

*/
