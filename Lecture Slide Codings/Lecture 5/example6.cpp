//Lecture 5 Slide 26 - Practice Question 5
//For Loops

#include <iostream>

using namespace std;

int main() 
{
    int x = 0;
    
    for(int i = 1; i < 10; i *= 2)
    {
    	x++;
    	cout << x;
	}
	
	cout << x;
	
    return 0;
}

