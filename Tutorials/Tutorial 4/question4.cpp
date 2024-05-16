// Tutorial 4 Question 4

#include <iostream>

using namespace std;

int main() 
{
    // Declare variables
    double basicSalary, allowance, netSalary;
    int overtimeHours;

    // Get input from the user
    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter no of overtime hours: ";
    cin >> overtimeHours;

    // Calculate allowance based on overtime hours
    if (overtimeHours >= 30) 
	{
        allowance = 0.20 * basicSalary;
    } 
	else if (overtimeHours >= 20) 
	{
        allowance = 0.10 * basicSalary;
    } 
	else if (overtimeHours >= 10) 
	{
        allowance = 0.05 * basicSalary;
    } 
	else 
	{
        allowance = 0.0;
    }

    // Calculate net salary
    netSalary = basicSalary + allowance;

    // Display net salary
    cout << "The Net Salary of Employee: " << netSalary << endl;

    return 0;
}

