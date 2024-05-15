//Lecture 9 Slide 15,16,17 - Pointers and Arrays
	
#include <iostream>

using namespace std;

int main()
{
    int *ptr;
	int arr[5] = {10, 20, 30, 40, 50};
	ptr = arr;	
	// Assigns ptr = &arr[0], ptr+1 = &arr[1] and so on
	// Thus *ptr gives the value of arr[0], *(ptr+1) gives arr[1] and so on
	
	//Print memory addresses and respective values stored in them
	cout << ptr << "\t" << *ptr << endl;   		//ptr is &arr[0] *ptr is arr[0]
    cout << ptr+1 << "\t" << *(ptr+1) << endl; 
    cout << ptr+2 << "\t" << *(ptr+2) << endl; 
    cout << ptr+3 << "\t" << *(ptr+3) << endl; 
    cout << ptr+4 << "\t" << *(ptr+4) << endl; 

    return 0;
}


