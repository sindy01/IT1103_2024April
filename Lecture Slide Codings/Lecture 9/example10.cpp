//Lecture 9 Slide 19 - Practice Question 02
	
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {4, 5, 6, 7};
    int *p = arr;
    
    ++*p;
    cout << *p << endl;
    
    p += 2;
    cout << *p << endl;
    
    //cout<<arr[0]<<arr[1]<<arr[2]<<arr[3];

    return 0;
}

/*

int arr[] = {4, 5, 6, 7};
Defines an array named arr with four elements.

int *p = arr;
Declares a pointer p and initializes it with 
the address of the first element of the array arr.

++*p; 
Increments the value at the memory location pointed 
to by p. In this case, it increments the value of arr[0] from 4 to 5.

cout << *p << endl;
Prints the value pointed to by p. After the increment operation, 
this will output 5.

p += 2;
Moves the pointer p two positions ahead in the array. 
After this operation, p points to arr[2].

cout << *p << endl; 
Prints the value pointed to by the updated p. After the 
pointer movement, this will output 6.

*/


