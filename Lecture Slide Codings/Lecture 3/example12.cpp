//Lecture 3 Slide 25 - Comma Operator

#include <iostream>

using namespace std;

int main() 
{
    int a = 1, b = 2, c;
    c = (a = a + 2, b = a + 3, b = a + b);

    cout << "The value of c is: " << c << endl;

    return 0;
}


