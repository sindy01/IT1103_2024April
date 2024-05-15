//Lecture 7 Slide 20 - C-Style Character String

#include <iostream>

using namespace std;

int main() 
{
	char greeting[6]= {'H', 'e', 'l', 'l', 'o', '\0'};
	
	for (int i = 0; i < 6; i++)
	{
		cout << greeting[i] << endl;
	}
 
    return 0;
}

