// Question 01

#include <iostream>
using namespace std;

int main() 
{
    int num;
    
    // Request user to enter a number
    cout << "Enter number: ";
    cin >> num;
    
    int count = 1;
    
    // Iterate over rows
    for (int i = 1; i <= num; i++) 
	{
        // Iterate over columns
        for (int j = 1; j <= i; j++) 
		{
            // Print the current count
            cout << count << " ";
        }
        // Increase the count by 2 for the next row
        count = count + 2;
        // Move to the next line after each row
        cout << endl;
    }
    
    return 0;
}

