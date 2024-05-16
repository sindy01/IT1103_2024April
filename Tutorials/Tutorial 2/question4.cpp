// Tutorial 2 Question 4

#include <iostream>

using namespace std;

int main() 
{
    const float PI = 3.14; // constant value for PI

    // Declare variables for radius, height, and volume
    float radius, height, volume;

    // Prompt the user to enter the radius
    cout << "Enter radius: ";
    cin >> radius;

    // Prompt the user to enter the height
    cout << "Enter height: ";
    cin >> height;

    // Calculate the volume of the cone using the formula V = (1/3) * PI * r^2 * h
    volume = (1.0 / 3.0) * PI * radius * radius * height;

    // Output the result
    cout << "Volume of cone is: " << volume << endl;

    return 0;
}

