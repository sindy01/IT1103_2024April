//Lecture 7 Slide 27 - Working with Two-Dimensional Arrays

#include <iostream>

using namespace std;

int main() 
{
	int grades[5][4];
	
	// Getting user input to 2-D Array
	for(int m=0; m<5; m++)
    {
        for(int n=0; n<4; n++)
        {
        	cout << "Enter value : ";
            cin >> grades[m][n];
        }
    }
    
	// Printing the 2-D Array
 	for(int m=0; m<5; m++)
    {
        for(int n=0; n<4; n++)
        {
            cout << grades[m][n] << " ";
        }
        cout << endl;
    }


	return 0;
}

