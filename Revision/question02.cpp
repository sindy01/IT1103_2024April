// Question 02

#include <iostream>

using namespace std;

int main() 
{
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    int sum = 0;
    int temp = number;
    
    // Sum the digits of the user inputted number
    while (temp > 0) 
	{
        sum = sum + temp % 10;
        temp = temp / 10;
    }
    
    // Check whether user inputed number is exactly divisible by its sum of digits or not
    if (number % sum == 0)
    {
    	cout << "The number is a Niven number." << endl;
	}
    else
    {
    	cout << "The number is not a Niven number." << endl;
	}
        
    
    return 0;
}

