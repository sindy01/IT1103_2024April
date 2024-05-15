//Lecture 3 Slide 12 - Priority of Arithmetic and Assignment Operators

#include <iostream>

using namespace std;

int main() 
{
    int X;

    X = 7 + 3 * 5 - 2;
    cout << "The value of X is: " << X << endl;
    
    X = 4 + 7 / 3;
	cout << "The value of X is: " << X << endl;
	
	X= 8 % 3 * 6;
	cout << "The value of X is: " << X << endl;
	
	X = (7 + 3) * 5 - 2;
	cout << "The value of X is: " << X << endl;
	
	X =  16 % 3 - (8 + 5) + 3 / ( 8 - 6 ) - 3;
	cout << "The value of X is: " << X << endl;
	
	X = ((10 - 4 ) + 2 ) % 8 + ( 5 + 2 ) % 3;
	cout << "The value of X is: " << X << endl;
	
	X = 12 - 3 * 4 + 3 + 29 / 5 % 4 * 3 + 6 / 8 % 3;
	cout << "The value of X is: " << X << endl;
	
	X = 15 + 2 % 3 - ( 8 - 5 ) + 3 / 8 + 6 % 5;
	cout << "The value of X is: " << X << endl;
	
	X = 17 %( 4 + 2 ) * 8 / ( 5 + 2) % 3;
	cout << "The value of X is: " << X << endl;
	
	int i=11;
	X = i-- % 4 * 4;
	cout << "The value of X is: " << X << endl;
	
    return 0;
}


