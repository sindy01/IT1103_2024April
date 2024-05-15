//Lecture 9 Slide 14 - References in C++

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food

    cout << food << endl;  
    cout << meal << endl;   
    
    return 0;
}

