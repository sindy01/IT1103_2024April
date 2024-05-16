// Tutorial 2 Question 3

#include <iostream>

// Use the std namespace
using namespace std;

int main() 
{
    // Declare variables to store length and width
    float length, width;

    // Prompt the user to enter the length of the rectangle
    cout << "Enter length of Rectangle: ";
    cin >> length;

    // Prompt the user to enter the width of the rectangle
    cout << "Enter width of Rectangle: ";
    cin >> width;

    // Calculate the perimeter of the rectangle
    double perimeter = 2 * (length + width);

    // Display the result
    cout << "Perimeter of Rectangle: " << perimeter << endl;

    return 0;
}

