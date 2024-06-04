// Tutorial 5 Question 1

#include <iostream>

using namespace std;

int main() 
{
    int number, i;

    // Get input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Pattern 01
    cout << "Pattern 01:" << endl;
   	for (int i = 1; i * i * i <= number; ++i) 
	{
        cout << i * i * i << " ";
    }
    cout << endl;

    // Pattern 02 - Perfect Squares
    cout << "Pattern 02:" << endl;
    for (int i = 1; i * i <= number; ++i) 
	{
        cout << i * i << " ";
    }
    cout << endl;

    // Pattern 03 
    cout << "Pattern 03:" << endl;
    i = 1;
    int sum = 0;
    while (sum + i <= number) 
	{
        sum += i;
        cout << sum << " ";
        ++i;
    }
    cout << endl;

    // Pattern 04
    cout << "Pattern 04:" << endl;
    for (int i = 3; i <= number; i += 3) 
	{
        cout << i << " ";
    }
    cout << endl;

    // Pattern 05
    cout << "Pattern 05:" << endl;
    i = 2;
    int increment = 3;
    while(i <= number)
	{
        cout << i << " ";
        i += increment;
        increment += 2;
    }
    cout << endl;

    return 0;
}

