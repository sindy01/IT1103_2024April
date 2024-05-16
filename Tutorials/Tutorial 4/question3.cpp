// Tutorial 4 Question 3

#include <iostream>

using namespace std;

int main() 
{
	// Constant value for mass (m)
	const double MASS = 250.74; 
	
    // Declare variables
    double velocity, radius, centripetalForce;

    // Get input from the user
    cout << "Enter velocity: ";
    cin >> velocity;

    cout << "Enter the radius of circular path: ";
    cin >> radius;

    // Calculate centripetal force
    centripetalForce = (MASS * velocity * velocity) / radius;

    // Display centripetal force
    cout << "The centripetal force of the planet is: " << centripetalForce << endl;

    // Determine impact type
    if (centripetalForce <= 100) 
	{
        cout << "Impact is Low Impact" << endl;
    } 
	else if (centripetalForce <= 150) 
	{
        cout << "Impact is Normal Impact" << endl;
    } 
	else if (centripetalForce <= 200) 
	{
        cout << "Impact is High Impact" << endl;
    } 
	else 
	{
        cout << "Impact is Ultra Impact" << endl;
    }

    return 0;
}

