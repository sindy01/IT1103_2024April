// Tutorial 7 Question 5

#include <iostream>

using namespace std;

int main() 
{
    int numStudents = 10;
    int numSubjects = 2; // index 0 for assignment, index 1 for written exam

    // Declare a 2D array to store assignment and written exam marks
    int marks[numStudents][numSubjects];

    // Enter and store assignment and written exam marks
    for (int i = 0; i < numStudents; ++i) 
	{
        cout << "Enter assignment mark for student " << i + 1 << ": ";
        cin >> marks[i][0];

        cout << "Enter written exam mark for student " << i + 1 << ": ";
        cin >> marks[i][1];
    }

    // Find the highest assignment mark and the highest written exam mark
    int highestAssignment = marks[0][0];
    int highestWrittenExam = marks[0][1];

    for (int i = 1; i < numStudents; ++i) 
	{
        if (marks[i][0] > highestAssignment) 
		{
            highestAssignment = marks[i][0];
        }

        if (marks[i][1] > highestWrittenExam) 
		{
            highestWrittenExam = marks[i][1];
        }
    }

    // Display the results
    cout << "\nHighest Assignment Mark: " << highestAssignment << endl;
    cout << "Highest Written Exam Mark: " << highestWrittenExam << endl;

    return 0;
}

