//Lecture 4 - Simple switch statement

#include <iostream>

using namespace std;

int main() 
{
    char inLove;

    // Check if in love
    cout << "Are you in love? (y/n): ";
    cin >> inLove;

    switch (inLove)
    {
        case 'y':
            cout << "That's wonderful! Being in love is a beautiful feeling." << endl;
            break;
        case 'n':
            cout << "That's okay. Love will find you when the time is right." << endl;
            break;
        default:
            cout << "Invalid input. Please enter 'y' or 'n'." << endl;
            break;
    }

    return 0;
}
