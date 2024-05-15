//Lecture 4 - Nested if statements

#include <iostream>

using namespace std;

int main()
 {
    // Variables to store user input
    char person1;
    char person2;

    // Prompt the first person to indicate if they are in love
    cout << "Person 1, are you in love with Person 2? (y/n): ";
    cin >> person1;

    // Check if the first person is in love
    if (person1 == 'y' || person1 == 'Y')
    {
        // Prompt the second person to indicate if they are in love
        cout << "Person 2, are you in love with Person 1? (y/n): ";
        cin >> person2;

        // Nested if-else to check if both are in love
        if (person2 == 'y' || person2 == 'Y')
        {
            cout << "You are both in love and eligible for marriage." << endl;
        } 
        else 
        {
            cout << "Person 2 is not in love with Person 1. You are not eligible for marriage based on mutual love." << endl;
        }
    } 
    else
    {
        cout << "Person 1 is not in love with Person 2. You are not eligible for marriage based on mutual love." << endl;
    }

    return 0;
}
