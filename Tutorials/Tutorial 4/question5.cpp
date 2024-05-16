// Tutorial 4 Question 5

#include <iostream>

using namespace std;

int main() 
{
    // Declare variables
    char cardType;
    double creditLimit = 0, annualInterestRate = 0, annualInterestAmount = 0;

    // Get input from the user
    cout << "Enter Card Type (P for Platinum, G for Gold, S for Silver): ";
    cin >> cardType;

    cout << "Enter Credit Limit: ";
    cin >> creditLimit;

    // Determine annual interest rate based on card type
    switch (cardType) 
	{
        case 'P':
            annualInterestRate = 0.20;
            break;
        case 'G':
            annualInterestRate = 0.10;
            break;
        case 'S':
            annualInterestRate = 0.05;
            break;
        default:
            cout << "Invalid Card Type" << endl;
            return 1; // Exit program with an error code
    }

    // Calculate annual interest amount
    annualInterestAmount = creditLimit * annualInterestRate;

    // Display annual interest amount
    cout << "The Annual Interest Amount: " << annualInterestAmount << endl;

    return 0;
}

