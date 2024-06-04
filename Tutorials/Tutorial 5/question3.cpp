// Tutorial 5 Question 3

#include <iostream>

using namespace std;

int main() 
{
    int start, end;

    // Get input from the user
    cout << "Enter two integer numbers: ";
    cin >> start >> end;

    // Validate the input
    if (start > end) 
	{
        cout << "Error: First number should be less than or equal to the second number." << endl;
        return 1; // Exit program with an error code
    }

    // Calculate the sum of squares of odd numbers in the interval
    int sum = 0;
    for (int i = start; i <= end; ++i) 
	{
        if (i % 2 != 0) // Check if the number is odd
		{ 
            sum += i * i; // Add the square of the odd number to the sum
        }
    }

    // Display the result
    cout << "Sum of odd square numbers: " << sum << endl;

    return 0;
}

