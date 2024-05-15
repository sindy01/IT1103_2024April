//Lecture 3 Slide 37 - Practice Questions

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    // Program 4: Ceiling and Floor values of a fractional number
    float fractionalNum;

    cout << "Enter a fractional number: ";
    cin >> fractionalNum;

    float ceilResult = ceil(fractionalNum);
    float floorResult = floor(fractionalNum);

    cout << "Ceiling value: " << ceilResult << endl;
    cout << "Floor value: " << floorResult << endl;

    return 0;
}


