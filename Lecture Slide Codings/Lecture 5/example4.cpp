//Lecture 5 Slide 15 - Practice Question 3
//Sentinel-Controlled while Loops

#include <iostream>

using namespace std;

int main() 
{
    // Declare variables
    int number, oddCount = 0, evenCount = 0;

    // Get input from the user
    cout << "Enter a set of positive numbers (enter 0 to finish):" << endl;

    // Read numbers until 0 is entered
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) 
	{
        // Check if the number is positive
        if (number > 0) 
		{
            // Update counts based on parity
            if (number % 2 == 0) 
			{
                evenCount++;
            } 
			else 
			{
                oddCount++;
            }
        } 
		else 
		{
            cout << "Please enter a positive number." << endl;
        }

        // Prompt the user for the next number
        cout << "Enter a number: ";
        cin >> number;
    }

    // Display the counts
    cout << "Count of odd numbers: " << oddCount << endl;
    cout << "Count of even numbers: " << evenCount << endl;

    return 0;
}

