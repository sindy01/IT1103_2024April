// Tutorial 7 Question 3

#include <iostream>

using namespace std;

int main() 
{
    int arraySize = 7;
    char charArray[arraySize];

    // Accept 7 characters and fill the array
    cout << "Enter " << arraySize << " characters: ";
    for (int i = 0; i < arraySize; ++i) 
	{
        cin >> charArray[i];
    }

    // Count the number of vowels in the array
    int vowelCount = 0;
    for (int i = 0; i < arraySize; ++i) 
	{
		char letter = charArray[i];
        if (letter == 'a' || letter == 'e' || 
		letter == 'i' || letter == 'o' || 
		letter == 'u') 
		{
            vowelCount++;
        }
    }

    // Display the result
    cout << "The Number of vowels: " << vowelCount << endl;

    return 0;
}

