// Tutorial 7 Question 2

#include <iostream>

using namespace std;

int main() 
{
    int arraySize = 10;
    int numbers[arraySize];

    // Get user input to load the array
    cout << "Enter 10 integer numbers:\n";
    for (int i = 0; i < arraySize; ++i) 
	{
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Print the values stored in the array
    cout << "\nValues stored in the array:\n";
    for (int i = 0; i < arraySize; ++i) 
	{
        cout << numbers[i] << " ";
    }

    // Replace even numbers with 0 and odd numbers with 1
    int countOdd = 0, countEven = 0;
    for (int i = 0; i < arraySize; ++i) 
	{
        if (numbers[i] % 2 == 0) 
		{
            numbers[i] = 0;
            countEven++;
        } 
		else 
		{
            numbers[i] = 1;
            countOdd++;
        }
    }

    // Print the number of odd and even values
    cout << "\n\nNumber of odd values: " << countOdd << endl;
    cout << "Number of even values: " << countEven << endl;

    // Print the array elements after replacement
    cout << "\nArray elements after replacing even with 0 and odd with 1:\n";
    for (int i = 0; i < arraySize; ++i) 
	{
        cout << numbers[i] << " ";
    }

    return 0;
}

