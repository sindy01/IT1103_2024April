//Lecture 3 Slide 25 - Comma Operator

#include <iostream>

using namespace std;

int main() 
{
    int x = 10, y;
    y = (x++, ++x);

    cout << "The value of y is: " << y << endl;

    return 0;
}

