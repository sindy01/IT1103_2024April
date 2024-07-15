// Tutorial 10 Question 1

#include <iostream>

using namespace std;

// Structure definition
struct Rectangle 
{
    float length;
    float width;
};

int main() 
{
    // Declare a variable of struct type Rectangle
    struct Rectangle myRectangle;

    // Get the length and width of the rectangle as user input
    cout << "Enter the length of the rectangle: ";
    cin >> myRectangle.length;

    cout << "Enter the width of the rectangle: ";
    cin >> myRectangle.width;

    // Calculate and print the area and perimeter of the rectangle
    float area = myRectangle.length * myRectangle.width;
    float perimeter = 2 * (myRectangle.length + myRectangle.width);

    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}

