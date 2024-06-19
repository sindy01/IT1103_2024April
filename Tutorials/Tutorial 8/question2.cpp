// Tutorial 8 Question 2

#include <iostream>

using namespace std;

void Input2DArray(int arr[][3], int rows, int cols);
void Print2DArray(int arr[][3], int rows, int cols);
int FindMax(int arr[][3], int rows, int cols);
int FindMin(int arr[][3], int rows, int cols);
int FindSum(int arr[][3], int rows, int cols);
int FindValue(int arr[][3], int rows, int cols, int item);
float FindAverage(int arr[][3], int rows, int cols);

int main() 
{
    const int ROWS = 3;
    const int COLS = 3;

    // Create a 2D square matrix called numbers with size 3×3
    int numbers[ROWS][COLS];

    // Insert values to numbers array using Input2DArray() function
    Input2DArray(numbers, ROWS, COLS);

    // Print the 2D array using Print2DArray() function
    Print2DArray(numbers, ROWS, COLS);

    // Find and print the maximum value using FindMax() function
    cout << "Maximum value: " << FindMax(numbers, ROWS, COLS) << endl;

    // Find and print the minimum value using FindMin() function
    cout << "Minimum value: " << FindMin(numbers, ROWS, COLS) << endl;

    // Find and print the total using FindSum() function
    cout << "Total: " << FindSum(numbers, ROWS, COLS) << endl;

    // Find and print the number of occurrences of the given number using FindValue()
    int searchItem;
    cout << "Enter a number to find its occurrences: ";
    cin >> searchItem;
    cout << "Occurrences of " << searchItem << ": " << FindValue(numbers, ROWS, COLS, searchItem) << endl;

    // Find and print the average using FindAverage() function
    cout << "Average: " << FindAverage(numbers, ROWS, COLS) << endl;

    return 0;
}

// Function to input values into a 2D array
void Input2DArray(int arr[][3], int rows, int cols) 
{
    cout << "Enter values for the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j) 
		{
            cout << "Enter value for element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }
}

// Function to print the content of a 2D array
void Print2DArray(int arr[][3], int rows, int cols) 
{
    cout << "Content of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j) 
		{
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to find and return the maximum value in a 2D array
int FindMax(int arr[][3], int rows, int cols) 
{
    int maxVal = arr[0][0];
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j) 
		{
            if (arr[i][j] > maxVal) 
			{
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

// Function to find and return the minimum value in a 2D array
int FindMin(int arr[][3], int rows, int cols) 
{
    int minVal = arr[0][0];
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j) 
		{
            if (arr[i][j] < minVal) 
			{
                minVal = arr[i][j];
            }
        }
    }
    return minVal;
}

// Function to find and return the total sum of values in a 2D array
int FindSum(int arr[][3], int rows, int cols) 
{
    int sum = 0;
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j) 
		{
            sum += arr[i][j];
        }
    }
    return sum;
}

// Function to find and return the number of occurrences of a specific value in a 2D array
int FindValue(int arr[][3], int rows, int cols, int item) 
{
    int count = 0;
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j) 
		{
            if (arr[i][j] == item) 
			{
                count++;
            }
        }
    }
    return count;
}

// Function to find and return the average value in a 2D array
float FindAverage(int arr[][3], int rows, int cols) 
{
    int sum = FindSum(arr, rows, cols);
    float average = (float)(sum)/(rows * cols);
    return average;
}


