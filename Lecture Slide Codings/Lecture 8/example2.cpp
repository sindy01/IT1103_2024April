//Lecture 8 Slide 4 - Two-dimensional Arrays as a Parameter to functions

#include <iostream>

using namespace std;

void printArray(int arr[][4], int row, int col);

int main() 
{
    const int row = 3;
    const int col = 4;
    int arr[row][col] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};

    // Printing the original array
    cout << "Original array:" << endl;
    printArray(arr, row, col);

    return 0;
}

// Function to print a 2D array
void printArray(int arr[][4], int row, int col) 
{
    for (int i = 0; i < row; ++i) 
	{
        for (int j = 0; j < col; ++j) 
		{
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

