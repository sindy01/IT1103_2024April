//Lecture 5 Slide 29 - Practice Question 7

#include <iostream>

using namespace std;

int main() 
{
    for (int i = 1; i <= 2; i++)
    {
    	for (int j = i; j <= 2; j++)
    		cout << i << '@' << endl;
	}
    return 0;
}

