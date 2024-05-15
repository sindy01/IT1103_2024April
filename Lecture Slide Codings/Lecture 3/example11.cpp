//Lecture 3 Slide 23 - Conditional Operators

#include <iostream>

using namespace std;

int main() 
{
    int m = 1, n = 2, p = 3;
    int min = (m < p ? (m < p ? m : p) : (n < p ? n : p));

    cout << "The value of min is: " << min << endl;

    return 0;
}




