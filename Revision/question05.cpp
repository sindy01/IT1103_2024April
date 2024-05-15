// Question 05

#include <iostream>
using namespace std;

void inputHeights(float arr[], int size);
float findMaxHeight(float arr[], int size);
float findMinHeight(float arr[], int size);
float findTotalHeight(float arr[], int size);
void printHeights(float arr[], int size);

int main() 
{
    const int size = 5;
    float Height[size];

    // Inserting heights using inputHeights() function
    inputHeights(Height, size);

    // Finding and printing maximum height
    cout << "Maximum Height: " << findMaxHeight(Height, size) << endl;

    // Finding and printing minimum height
    cout << "Minimum Height: " << findMinHeight(Height, size) << endl;

    // Finding and printing total heights
    cout << "Total Heights: " << findTotalHeight(Height, size) << endl;

    // Printing all heights
    printHeights(Height, size);

    return 0;
}

// Function to input heights into the array
void inputHeights(float arr[], int size) 
{
    cout << "Enter heights of " << size << " students:" << endl;
    for (int i = 0; i < size; i++) 
	{
        cout << "Height of Student " << i+1 << ": ";
        cin >> arr[i];
    }
}

// Function to find maximum height in the array
float findMaxHeight(float arr[], int size) 
{
    float max_height = arr[0];
    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > max_height) 
		{
            max_height = arr[i];
        }
    }
    return max_height;
}

// Function to find minimum height in the array
float findMinHeight(float arr[], int size) 
{
    float min_height = arr[0];
    for (int i = 1; i < size; i++) 
	{
        if (arr[i] < min_height) 
		{
            min_height = arr[i];
        }
    }
    return min_height;
}

// Function to find total of heights in the array
float findTotalHeight(float arr[], int size) 
{
    float total_height = 0;
    for (int i = 0; i < size; i++) 
	{
        total_height += arr[i];
    }
    return total_height;
}

// Function to print heights of all students
void printHeights(float arr[], int size) 
{
    cout << "The Heights of the Students:" << endl;
    for (int i = 0; i < size; i++) 
	{
        cout << "Height of Student " << i+1 << ": " << arr[i] << endl;
    }
}

