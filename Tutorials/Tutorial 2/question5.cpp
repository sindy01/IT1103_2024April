// Tutorial 2 Question 5

#include <iostream>
using namespace std;

int main() 
{
    // Declare variables to store current, voltage, and power
    float current, voltage, power;

    // Prompt the user to enter current
    cout << "Enter Current: ";
    cin >> current;

    // Prompt the user to enter voltage
    cout << "Enter Voltage: ";
    cin >> voltage;

    // Calculate electric power using the formula P = I * V
    power = current * voltage;

    // Display the result
    cout << "Electric power is: " << power << endl;

    return 0;
}

