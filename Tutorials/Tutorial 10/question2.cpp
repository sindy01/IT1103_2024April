// Tutorial 10 Question 2

#include <iostream>
#include <string>

using namespace std;

// Structure definition
struct Exam 
{
    string examID;
    string subjectName;
    double registrationFee;
    int studentsRegistered[7];
};

Exam getExamDetails(Exam e); // Function prototype with Exam structure as parameter
void calExamFee(double registrationFee, int studentsRegistered[], int size);

int main() 
{
	Exam examNU;
	
    // Call getExamDetails() to get exam details
    examNU = getExamDetails(examNU);

    // Call calExamFee() to calculate and print total exam registration fee
    calExamFee(examNU.registrationFee, examNU.studentsRegistered, 7);

    return 0;
}

// Function to get exam details
Exam getExamDetails(Exam e) 
{
    cout << "Enter Exam ID: ";
    cin >> e.examID;

    cout << "Enter Subject Name: ";
    cin >> e.subjectName;

    cout << "Enter Registration Fee: ";
    cin >> e.registrationFee;

    cout << "Enter the number of students registered for each day of the week (7 days):" << endl;
    for (int i = 0; i < 7; ++i) 
	{
        cout << "Day " << i + 1 << ": ";
        cin >> e.studentsRegistered[i];
    }

    return e;
}

// Function to calculate total exam registration fee
void calExamFee(double registrationFee, int studentsRegistered[], int size) 
{
    double totalFee = 0;

    for (int i = 0; i < size; ++i) 
	{
        totalFee += registrationFee * studentsRegistered[i];
    }

    cout << "\n\nTotal Exam Registration Fee for the week: " << totalFee << endl;
}

