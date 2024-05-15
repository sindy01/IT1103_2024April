//Lecture 5 Slide 27 - Practice Question 6
//Using Do While Loop

#include <iostream>

using namespace std;

int main() 
{
    int number;

    // Get input from the user
    cout << "Enter number: ";
    cin >> number;

    // Using do-while loop
    int i = 0;
    do 
	{
        cout << "@";
        ++i;
    } while (i < number);

    cout << endl;

    return 0;
}

