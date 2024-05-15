//Lecture 5 Slide 13
//Example for Sentinel-Controlled while Loops

#include <iostream>

using namespace std;

int main() 
{
	int number;
	
    cout << "Enter numbers (enter 0 to finish):" << endl;
    
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) 
	{
        cout << "The entered number is " << number << endl;
        
        cout << "Enter a number: ";
        cin >> number;
    }


    return 0;
}

