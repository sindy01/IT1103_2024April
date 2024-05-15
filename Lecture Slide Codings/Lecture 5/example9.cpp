//Lecture 5 Slide 27 - Practice Question 6
//Using For Loop

#include <iostream>

using namespace std;

int main() 
{
    int number;

    // Get input from the user
    cout << "Enter number: ";
    cin >> number;

    // Using for loop
    for (int i = 0; i < number; ++i) 
	{
        cout << "@";
    }

    cout << endl;

    return 0;
}

