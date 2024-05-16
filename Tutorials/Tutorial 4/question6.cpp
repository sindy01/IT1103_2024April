// Tutorial 4 Question 6

#include <iostream>

using namespace std;

int main() 
{
    // Declare variables
    double num1, num2, result;
    int code;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the integer code (1 for sum, 2 for difference, 3 for product, 4 for quotient): ";
    cin >> code;

    // Perform the specified operation based on the code
    switch (code) 
	{
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            result = num1 / num2;
            break;
        default:
            cout << "Error: Invalid integer code. Please enter 1, 2, 3, or 4." << endl;
            return 1; // Exit program with an error code
    }

    // Display the computed result
    cout << "Result: " << result << endl;

    return 0;
}

