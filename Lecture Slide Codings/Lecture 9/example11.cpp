//Lecture 9 Slide 20 - Practice Question 03
	
#include <iostream>

using namespace std;

int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    
    cout << *ptr2 << endl;
    cout << ptr2 - ptr1 << endl;

    return 0;
}

/*

float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
Declares a float array arr with five elements 
and initializes them.

float *ptr1 = &arr[0];
Declares a float pointer ptr1 and initializes it 
with the address of the first element of the array arr.

float *ptr2 = ptr1 + 3;
Calculates the address of the element at index 3 in the 
array relative to ptr1 and assigns it to ptr2. So, ptr2 
now points to the fourth element of the array.

cout << *ptr2 << endl;
Prints the value pointed to by ptr2, which is the fourth 
element of the array. Output: 90.5.

cout << ptr2 - ptr1 << endl;
Calculates the difference between the addresses pointed 
to by ptr2 and ptr1. Since ptr2 points to the fourth 
element and ptr1 points to the first element, the 
difference is 3. Output: 3.

*/


