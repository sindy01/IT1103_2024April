// Tutorial 4 Question 1

#include <iostream>

using namespace std;

int main() 
{
    int number;

    // Get input from the user
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) 
	{
        cout << "Number is even." << endl;
    } 
	else
	{
        cout << "Number is odd." << endl;
    }

    return 0;
}

