// Tutorial 5 Question 4

#include <iostream>

using namespace std;

int main() 
{
    int originalNumber, reversedNumber = 0, remainder, temp;

    // Get input from the user
    cout << "Enter a number: ";
    cin >> originalNumber;

    temp = originalNumber; // Store the original number for comparison later

    // Reverse the number
    while (originalNumber > 0) 
	{
        remainder = originalNumber % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        originalNumber /= 10;
    }

    // Display the reverse of the number
    cout << "The reverse of the number is: " << reversedNumber << endl;

    // Check if it is a palindrome
    if (temp == reversedNumber) 
	{
        cout << "The number is a palindrome." << endl;
    } 
	else 
	{
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}

