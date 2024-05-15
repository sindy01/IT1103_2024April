//Lecture 5 Slide 37 - Goto Statements

#include <iostream>

using namespace std;

int main() 
{
    int number;

    // Get input from the user
    cout << "Enter a positive number: ";
    cin >> number;

    // Check if the number is positive using goto
    if (number <= 0) 
	{
        cout << "Error: Please enter a positive number." << endl;
        goto end;
    }

    // Display the number and its square
    cout << "You entered: " << number << endl;
    cout << "Square of the number: " << number * number << endl;

    // Jump here to end the program
    end:
    cout << "Program ends." << endl;

    return 0;
}


/*
The goto statement in C++ allows you to jump to a 
labeled statement within the same function. 
However, it is generally considered a bad practice 
and can make the code harder to understand and maintain. 
It is often recommended to use structured control flow 
statements like if, else, while, for, etc., instead of goto.

In this example, the goto end; statement is used to jump 
to the end label when the user enters a non-positive number.

This example is for educational purposes only, and 
using goto is generally discouraged in modern C++ programming.
*/
