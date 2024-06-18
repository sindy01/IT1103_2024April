//Lecture 7 Slide 21 - Cstring Manipulation Functions

#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
	char message1[] = "SLIIT NORTHERN UNI";
	char message2[] = "UNI    ";
	char message3[10] = "SLIIT";
	
	cout << strlen(message1) << endl;
	cout << strlen(message2) << endl;
	cout << strlen(message3) << endl;
 
    return 0;
}

