// Tutorial 5 Question 2 - Method 1

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
    for (int i = 1; i <= number; ++i) 
	{
        factorial *= i;
    }
    
    // Display the result
    cout << "Factorial is: " << factorial << endl;
  
    return 0;
}

