// Tutorial 4 Question 2

#include <iostream>

using namespace std;

int main() 
{
    // Declare variables
    float subject1, subject2, subject3, average;

    // Get input from the user
    cout << "Enter marks of 3 subjects: ";
    cin >> subject1 >> subject2 >> subject3;

    // Calculate average
    average = (subject1 + subject2 + subject3) / 3.0;

    // Display average
    cout << "Average mark: " << average << endl;

    // Check student's status
    if (average >= 50.0) 
	{
        cout << "Status: Pass" << endl;
    } 
	else 
	{
        cout << "Status: Fail" << endl;
    }

    return 0;
}

