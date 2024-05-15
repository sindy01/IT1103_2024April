//Lecture 3 Slide 37 - Practice Questions

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    // Program 3: Power calculation
    int base, power;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the power: ";
    cin >> power;

    double powerResult = pow(base, power);

    cout << base << " to the power of " << power << " is: " << powerResult << endl;

    return 0;
}


