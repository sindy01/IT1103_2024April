// Tutorial 6 Question 5

#include <iostream>
#include <string>

using namespace std;

// Global variables
string firstName, lastName, maritalStatus, gender;

// Function prototypes
void readInputs();
string processTitle();
void printMessage(string title);

int main() 
{
    // Read inputs from the user
    readInputs();

    // Find the title based on marital status and gender
    string title = processTitle();

    // Print the message
    printMessage(title);

    return 0;
}

// Function to read inputs from the user
void readInputs() 
{
    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter gender(Female or Male): ";
    cin >> gender;

    cout << "Enter Marital Status(Single or Married): ";
    cin >> maritalStatus;
}

// Function to find the title based on marital status and gender
string processTitle() 
{
    if (gender == "Female" && maritalStatus == "Single") 
	{
        return "Miss";
    } 
    else if (gender == "Female" && maritalStatus == "Married") 
	{
        return "Mrs";
    } 
	else if (gender == "Male")
	{
        return "Mr";
    }
}

// Function to print the message
void printMessage(string title) 
{
    cout << "Hi " << title << " " << firstName << " " << lastName << endl;
}

