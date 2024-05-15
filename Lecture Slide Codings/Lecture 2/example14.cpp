//Lecture 2 Slide 55 - Strings

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstName, lastName;
    cout << "Enter your name (first then last): ";
    cin >> firstName >> lastName;
    
    cout << "Nice to meet you, " << firstName << " "<< lastName << 
      ".  May I just call you " << firstName << "?" << endl;
         
	 return 0;
}

