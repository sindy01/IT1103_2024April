//Lecture 5 Slide 36 - Practice Question 9

#include <iostream>

using namespace std;

int main() 
{
    int a = 10;
    
    do
    {
    	if (a == 15)
    	{
    		a = a + 1;
    		continue;
		}
		cout << "value of a: " << a << endl;
		a = a + 1;
	}while (a < 16);
	
    return 0;
}

