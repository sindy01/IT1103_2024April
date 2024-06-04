// Tutorial 5 Question 7a

#include <iostream>

using namespace std;

int main() 
{
    int n;

    // Request user input
    cout << "Enter number: ";
    cin >> n;

    // Print the pattern
    for (int i = 1; i <= n; ++i) 
	{
        for (int j = 1; j <= i; ++j) 
		{
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

