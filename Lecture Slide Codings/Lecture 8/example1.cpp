//Lecture 8 Slide 3 - One-dimensional Arrays as a Parameter to functions

#include <iostream>

using namespace std;

void displayValues(int x[], int size);

int main() 
{
    const int sz = 5;
    int myArray[sz] = {11, 13, 15, 17, 19};

    // Displaying original values of the array
    cout << "Original values of the array: ";
    displayValues(myArray, sz);
    
    const int sze = 9;
    int mineArray[sze] = {1, 3, 5, 7, 9, 11, 13, 15, 17};

    // Displaying original values of the array
    cout << "\n\n\nOriginal values of the array: ";
    displayValues(mineArray, sze);

    return 0;
}

// Function to display values of an array
void displayValues(int x[], int size) 
{
    for (int i = 0; i < size; ++i) 
	{
        cout << x[i] << " ";
    }
    cout << endl;
}

