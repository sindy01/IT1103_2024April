//Lecture 7 Slide 16 - Array Initialization - Method 04

#include <iostream>

using namespace std;

int main() 
{
	
	int arr[6];
	
	for(int i=0; i<6; i++)
	{
		cout << "Enter value : ";
	    cin >> arr[i];
	}

	
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
 
    return 0;
}

