// Tutorial 6 Question 4

#include <iostream>

using namespace std;

// Function prototype
float calBonus(float basicSalary);

int main() 
{
    float basicSalary;

    // Get user input for basic salary
    cout << "Enter the basic salary: ";
    cin >> basicSalary;

    // Calculate bonus and net salary
    float bonus = calBonus(basicSalary);
    float netSalary = basicSalary + bonus;

    // Display the net salary
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}

// Function to calculate bonus based on basic salary
float calBonus(float basicSalary) 
{
    // Check if basic salary is greater than 20000
    if (basicSalary > 20000) 
	{
        // If greater, bonus is twice the basic salary
        return 2 * basicSalary;
    } 
	else 
	{
        // Otherwise, bonus is half of the basic salary
        return 0.5 * basicSalary;
    }
}

