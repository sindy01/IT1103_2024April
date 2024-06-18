//Lecture 7 Slide 21 - Cstring Manipulation Functions

#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
	char message1[] = "SLIIT NORTHERN UNI";
	char message2[30];
	char message3[] = "NU";
	
	cout << message1 << endl;
	
	strcpy(message2 , message1);
	cout << message2 << endl;
	
	cout << message3 << endl;
	strcpy(message3 , message1);
	cout << message3 << endl;
	
    return 0;
}

