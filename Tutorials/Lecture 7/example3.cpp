//Lecture 7 Slide 16 - Array Initialization - Method 03

#include <iostream>

using namespace std;

int main() 
{
	
	int arr[6];
	arr[0] = 19;
	arr[1] = 10;
	arr[2] = 8;
	arr[3] = 17;
	arr[4] = 9;
	arr[5] = 15;
	
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
 
    return 0;
}

