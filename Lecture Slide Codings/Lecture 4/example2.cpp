//Lecture 4 - Nested if statements

#include <iostream>

using namespace std;

int main() 
{
    int yearsTogether;

    // Check relationship duration
    cout << "How many years have you been together? ";
    cin >> yearsTogether;
    
    if (yearsTogether == 0)
    {
        cout << "It's just the beginning! Enjoy getting to know each other." << endl;
    } 
    else if (yearsTogether == 1)
    {
        cout << "Congratulations on your first year together!" << endl;
    } 
    else if (yearsTogether == 2 || yearsTogether == 3 || yearsTogether == 4)
    {
        cout << "You have been together for a few years. Keep nurturing your relationship." << endl;
    } 
    else if (yearsTogether > 4)
    {
        cout << "That's a long time! Your relationship must be very strong." << endl;
    } 
    else
    {
        cout << "Invalid input. Please enter a positive number." << endl;
    }

    return 0;
    
}
