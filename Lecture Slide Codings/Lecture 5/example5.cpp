//Lecture 5 Slide 19 - Practice Question 4

#include <iostream>

using namespace std;

int main()
{
	int i = 0, x = 0;
	
	do
	{
		if (i % 5 == 0)
		{
			cout << x;
			x++;
		}
		
		++i;
	} while (i < 6);
	
	cout << x;
	
	return 0;
}

/*
When i is 0, the condition i % 5 == 0 is true, 
so it prints the value of x (0) and increments x to 1.

When i is 1, 2, 3, and 4, the condition is false, 
so it doesn't print anything, but x remains 1.

When i becomes 5, the condition is true again, 
so it prints the current value of x (1) and increments x to 2.

The loop exits because i is now 6.

Finally, it prints the last value of x (2).

So, the output of this program is 012.
*/
