//Lecture 3 Slide 10 - Increment and Decrement Operators

#include <iostream>

using namespace std;

int main()
{
    int x = 5, y = 10, z;
    x++; 
    ++y;
    z = --x + y;

    cout << "The value of z is " << z << endl;
    cout << "The value of x is " << x << endl;
    cout << "The value of y is " << y << endl;

    return 0;
}

