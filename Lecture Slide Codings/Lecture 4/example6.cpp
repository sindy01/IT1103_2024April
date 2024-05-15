//Lecture 4 

#include <iostream>

using namespace std;

int main()
{
    int choice;
    char inLove;
    int yearsTogether;

    // Display the menu
    cout << "Select an option:" << endl;
    cout << "1. Check if in love" << endl;
    cout << "2. Check relationship duration" << endl;
    cout << "3. Give relationship advice" << endl;
    cout << "4. Exit" << endl;

    // Get the user's choice
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            // Check if in love
            cout << "Are you in love? (y/n): ";
            cin >> inLove;
            if (inLove == 'y' || inLove == 'Y') 
            {
                cout << "That's wonderful! Being in love is a beautiful feeling." << endl;
            } 
            else if (inLove == 'n' || inLove == 'N') 
            {
                cout << "That's okay. Love will find you when the time is right." << endl;
            } 
            else 
            {
                cout << "Invalid input. Please enter 'y' or 'n'." << endl;
            }
            break;

        case 2:
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
            break;

        case 3:
            // Give relationship advice
            cout << "Relationship advice: Communicate openly, respect each other, and always support one another." << endl;
            break;

        case 4:
            // Exit
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please select a valid option (1-4)." << endl;
            break;
    }

    return 0;
}
