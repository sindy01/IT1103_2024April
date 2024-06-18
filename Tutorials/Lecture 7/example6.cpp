//Lecture 7 Slide 18 - Practice Question 1

#include <iostream>

using namespace std;

int main() 
{
    int numStudents = 10;
    int scores[numStudents];
    float total = 0.0;

    // Prompt the user to enter examination scores
    cout << "Enter the examination scores for " << numStudents << " students:\n";

    // Input loop to read scores
    for (int i = 0; i < numStudents; ++i) 
	{
        cout << "Enter score for student " << i + 1 << ": ";
        cin >> scores[i];

        // Add the score to the total
        total += scores[i];
    }

    // Calculate the class average
    float average = total / numStudents;

    // Display all scores and the class average
    cout << "\nExamination Scores:\n";
    for (int i = 0; i < numStudents; ++i) 
	{
        cout << "Student " << i + 1 << ": " << scores[i] << endl;
    }

    cout << "\nClass Average: " << average << endl;

    return 0;
}

