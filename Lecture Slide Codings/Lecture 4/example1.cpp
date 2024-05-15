//Lecture 4 - Combined if statements

#include <iostream>

using namespace std;

int main() 
{
    // Variable to store the user input
    int number;

    // Prompt the user to enter a number
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is positive
    if (number > 0) 
    {
        cout << "The number is positive." << endl;
    }

    // Check if the number is negative
    if (number < 0)
    {
        cout << "The number is negative." << endl;
    }

    // Check if the number is zero
    if (number == 0) 
    {
        cout << "The number is zero." << endl;
    }

    return 0;
}
