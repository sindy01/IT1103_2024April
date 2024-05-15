//Lecture 3 Slide 25 - Comma Operator

#include <iostream>

using namespace std;

int main() 
{
    int x = 5, k;
    k = (x--, x--);

    cout << "The value of k is: " << k << endl;
    cout << "The value of x is: " << x << endl;

    return 0;
}

