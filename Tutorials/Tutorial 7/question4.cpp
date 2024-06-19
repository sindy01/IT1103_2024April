// Tutorial 7 Question 4

#include <iostream>

using namespace std;

int main() 
{
    int numStudents = 5;
    int marks[numStudents];

    // Ask the user to enter values to fill the array
    cout << "Enter the marks for students A, B, C, D, E:\n";
    for (int i = 0; i < numStudents; ++i) 
	{
        cout << "Student " << char('A' + i) << ": ";
        cin >> marks[i];
    }

    // Find and print the total value of the marks
    int totalMarks = 0;
    for (int i = 0; i < numStudents; ++i) 
	{
        totalMarks += marks[i];
    }
    cout << "\nTotal marks = " << totalMarks << endl;

    // Find the highest mark and print
    int highestMark = INT_MIN;
    for (int i = 0; i < numStudents; ++i) 
	{
        if (marks[i] > highestMark) 
		{
            highestMark = marks[i];
        }
    }
    cout << "Highest marks = " << highestMark << endl;

    // Find the Minimum mark and print
    int minimumMark = marks[0];
    for (int i = 0; i < numStudents; ++i) 
	{
        if (marks[i] < minimumMark) 
		{
            minimumMark = marks[i];
        }
    }
    cout << "Minimum marks = " << minimumMark << endl;

    // Find and print the array index which has the highest mark
    int indexOfHighestMark = -1;
    for (int i = 0; i < numStudents; ++i) 
	{
        if (marks[i] == highestMark) 
		{
            indexOfHighestMark = i;
            break; // Break the loop as soon as the highest mark is found
        }
    }
    cout << "Array index of the highest marks = " << indexOfHighestMark << endl;

    // Find and print the name of the student who has got the highest mark
    char studentWithHighestMark = 'A' + indexOfHighestMark;
    cout << "Student " << studentWithHighestMark << " has taken the highest marks for mathematics\n";

    // Find and print the Grade of each student
    cout << "\nGrades:\n";
    for (int i = 0; i < numStudents; ++i) 
	{
        cout << "Student " << char('A' + i) << ": ";
        if (marks[i] >= 85) 
		{
            cout << "A\n";
        } 
		else if (marks[i] >= 65) 
		{
            cout << "B\n";
        } 
		else if (marks[i] >= 45) 
		{
            cout << "C\n";
        } 
		else 
		{
            cout << "F\n";
        }
    }

    return 0;
}

