//Lecture 7 Slide 20 - C-Style Character String

#include <iostream>

using namespace std;

int main() 
{
	char greeting[] = "Hello";
	
	for (int i = 0; i < 6; i++)
	{
		cout << greeting[i] << endl;
	}
 
    return 0;
}

