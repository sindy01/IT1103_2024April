// Tutorial 5 Question 2 - Method 2

#include <iostream>

using namespace std;

int main() 
{
    int number;
    int factorial = 1;

    // Get input from the user
    cout << "Enter number: ";
    cin >> number;

      // Calculate factorial
    while (number >= 1)
	{
        factorial *= number;
        number--;
    }

    // Display the result
    cout << "Factorial is: " << factorial << endl;
  
    return 0;
}

