//Lecture 7 Slide 24 - Practice Question 2

#include <iostream>

using namespace std;

int main() 
{
    int numStudents = 5;
    int numExams = 4;

    // Create a 2D array to store marks for each student and each exam
    int marks[numStudents][numExams];

    // Input loop to read marks for each student and each exam
    for (int i = 0; i < numStudents; ++i) 
	{
        cout << "Enter marks for Student " << i + 1 << " for 4 tests:\n";

        for (int j = 0; j < numExams; ++j) 
		{
            cout << "Test " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    // Display the marks obtained by each student in each exam
    cout << "\nMarks Obtained by Each Student:\n";
    for (int i = 0; i < numStudents; ++i) 
	{
        cout << "Student " << i + 1 << ":\t";

        for (int j = 0; j < numExams; ++j) 
		{
            cout << marks[i][j] << "\t";
        }

        cout << endl;
    }

    return 0;
}

