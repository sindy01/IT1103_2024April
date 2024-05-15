//Lecture 5 Slide 12 - Practice Question 2
//Counter-Controlled while Loops

#include <iostream>

using namespace std;

int main() 
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    do
	{
        cout << number << " ";
        number--;
    } while (number >= 1);

    return 0;
}

