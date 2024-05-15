//Lecture 5 Slide 33 - Practice Question 8

#include <iostream>

using namespace std;

int main() 
{
    int a = 10;
    
    do
    {
    	cout << "value of a: " << a << endl;
    	a = a + 1;
    	if (a > 15)
    	{
    		break;
		}
	}while(a < 20);
	
    return 0;
}

