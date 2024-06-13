// Tutorial 6 Question 2

#include <iostream>

using namespace std;

// Function prototype
float CalculateInterest(float balance, float interestRate, int numWithdrawals);

int main() 
{
    
    float balance, interestRate;
    int numWithdrawals;

    // Get user input for balance, interest rate, and number of withdrawals
    cout << "Enter the balance: ";
    cin >> balance;

    cout << "Enter the interest rate: ";
    cin >> interestRate;

    cout << "Enter the number of withdrawals: ";
    cin >> numWithdrawals;

    // Calculate and display the interest
    float interest = CalculateInterest(balance, interestRate, numWithdrawals);
    cout << "Interest: " << interest << endl;

    return 0;
}

// Function to calculate interest in bank savings
float CalculateInterest(float balance, float interestRate, int numWithdrawals) 
{
    if (numWithdrawals > 5) 
	{
        // If the number of withdrawals is greater than 5, return 0 interest
        return 0.0;
    } 
	else 
	{
        // If the number of withdrawals is 5 or less, calculate and return the interest
        return balance * (interestRate / 100.0);
    }
}

