//Lecture 3 Slide 23 - Conditional Operators

#include <iostream>

using namespace std;

int main() 
{
    int count = 3, sum = 9;
    int average = (count == 0) ? 0 : sum / count;
    
    cout << "The value of average is: " << average << endl;

    return 0;
}

