//Lecture 3 Slide 37 - Practice Questions

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    // Program 1: Find maximum and minimum among two numbers
    int num1, num2;
    
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    int maxNum = max(num1, num2);
    int minNum = min(num1, num2);

    cout << "Maximum: " << maxNum << endl;
    cout << "Minimum: " << minNum << endl;

    return 0;
}


