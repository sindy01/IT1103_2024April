// Tutorial 6 Question 1

#include <iostream>

using namespace std;

// Function prototypes
float CalculateArea(int radius);
float CalculatePerimeter(int radius);

int main() 
{
    // Declare variables
    int r;
    
    // Get user input for the radius
    cout << "Enter the radius of the circle: ";
    cin >> r;
    
    // Call the functions to calculate area and perimeter
    float area = CalculateArea(r);
    float perimeter = CalculatePerimeter(r);

    // Print the results
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << perimeter << endl;

    return 0; // Exit successfully
}

// Function to calculate the area of a circle
float CalculateArea(int radius) 
{
    return 22/7.0 * radius * radius;
}

// Function to calculate the perimeter (circumference) of a circle
float CalculatePerimeter(int radius) 
{
    return 2 * 22/7.0 * radius;
}

