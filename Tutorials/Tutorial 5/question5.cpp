// Tutorial 5 Question 5

#include <iostream>

using namespace std;

int main() 
{
    int number, digit, numberOfDigits = 0, sumOfDigits = 0, productOfDigits = 1;

    // Get input from the user
    cout << "Enter number: ";
    cin >> number;

    // Calculate number of digits, sum, and product of digits
    int tempNumber = number;
    while (tempNumber > 0) 
	{
        digit = tempNumber % 10; // Extract the last digit
        numberOfDigits++;
        sumOfDigits += digit;
        productOfDigits *= digit;
        tempNumber /= 10; // Remove the last digit
    }

    // Display the results
    cout << "The number of digits: " << numberOfDigits << endl;
    cout << "The sum of digits is: " << sumOfDigits << endl;
    cout << "The product of digits is: " << productOfDigits << endl;

    return 0;
}

