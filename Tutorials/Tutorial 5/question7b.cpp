// Tutorial 5 Question 7b

#include <iostream>

using namespace std;

int main() 
{
    int num;

    // Request user input
    cout << "Enter number: ";
    cin >> num;

    // Print the pattern
    for (int i = num; i >= 1; i--) 
	{
        for (int j = 1; j <= i; j++) 
		{
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

