//Lecture 5 Slide 28
//Nested Control Structures

#include <iostream>

using namespace std;

int main() 
{
    int rows;

    // Get input from the user
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Using nested for loop to create the pattern
    for (int i = 1; i <= rows; ++i) 
	{
        for (int j = 1; j <= i; ++j) 
		{
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

