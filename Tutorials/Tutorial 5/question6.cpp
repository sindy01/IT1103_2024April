// Tutorial 5 Question 6

#include <iostream>

using namespace std;

int main() 
{
    int number, lastDigit, occurrences = 0;

    // Get input from the user
    cout << "Enter number: ";
    cin >> number;

    // Extract the last digit
    lastDigit = number % 10;

    // Count occurrences of the last digit
    int tempNumber = number;
    while (tempNumber > 0) 
	{
        if (tempNumber % 10 == lastDigit) 
		{
            occurrences++;
        }
        tempNumber /= 10;
    }

    // Display the results
    cout << "The last digit is: " << lastDigit << endl;
    cout << "The number of occurrences of last digit in the given number: " << occurrences << endl;

    return 0;
}

