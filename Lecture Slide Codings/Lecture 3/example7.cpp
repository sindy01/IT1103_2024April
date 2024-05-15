//Lecture 3 Slide 23 - Conditional Operators

#include <iostream>

using namespace std;

int main() 
{
    int m = 1, n = 2;
    int min = (m < n ? m : n);
	cout << "The value of min is: " << min << endl;	
	
    return 0;
}


