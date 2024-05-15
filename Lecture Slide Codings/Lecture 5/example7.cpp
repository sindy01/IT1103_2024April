//Lecture 5 Slide 27 - Practice Question 6
//Using While Loop

#include <iostream>

using namespace std;

int main() 
{
    int number;

    // Get input from the user
    cout << "Enter number: ";
    cin >> number;

    // Using while loop
    int i = 0;
    while (i < number) 
	{
        cout << "@";
        ++i;
    }

    cout << endl;

    return 0;
}

