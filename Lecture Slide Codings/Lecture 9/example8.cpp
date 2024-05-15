//Lecture 9 Slide 18 - Pointers and Arrays
	
#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // Accessing and printing elements using pointer arithmetic
    cout << *(arr) << "\t";    
    cout << *(arr + 1) << "\t"; 
    cout << *(arr + 2) << "\t"; 
    cout << *(arr + 3) << "\t"; 
    cout << *(arr + 4) << "\t"; 

    return 0;
}


