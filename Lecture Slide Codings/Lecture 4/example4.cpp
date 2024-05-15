//Lecture 4 - Nested if statements

#include <iostream>

using namespace std;

int main()
{
    // Variables to store user input
    char boyInLove, girlInLove;
    int boyAge, girlAge;
    int maxAcceptableAgeGap;

    // Prompt the boy to enter his age and love status
    cout << "Boy, enter your age: ";
    cin >> boyAge;
    cout << "Boy, are you in love with the girl? (y/n): ";
    cin >> boyInLove;

    // Prompt the girl to enter her age and love status
    cout << "Girl, enter your age: ";
    cin >> girlAge;
    cout << "Girl, are you in love with the boy? (y/n): ";
    cin >> girlInLove;

    // Prompt for acceptable age gap
    cout << "What is the maximum acceptable age gap for both of you? ";
    cin >> maxAcceptableAgeGap;

    // Check if both are in love
    if ((boyInLove == 'y' || boyInLove == 'Y') && (girlInLove == 'y' || girlInLove == 'Y'))
    {
        // Calculate age gap
        int ageGap = boyAge - girlAge;

        // Check if age gap is acceptable
        if (ageGap <= maxAcceptableAgeGap)
        {
            cout << "You are both in love and the age gap is acceptable." << endl;
        } 
        else
        {
            cout << "You are both in love, but the age gap is not acceptable." << endl;
        }
    } 
    else
    {
        cout << "Both must be in love with each other to consider the relationship." << endl;
    }

    return 0;
}
