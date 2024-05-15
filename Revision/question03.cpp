// Question 03

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    char choice;
    string foodItem;
    int quantity;
    float totalCost = 0;

    do 
	{
        cout << "Enter the food item: ";
        cin >> foodItem;
        cout << "Enter the number of items needed: ";
        cin >> quantity;

        float discount = 0;
        float price = 0;

        // Calculate price and discount based on food item
        if (foodItem == "AK012") 
		{
            price = 120;
            discount = 0.02;
        } 
		else if (foodItem == "AK013" || foodItem == "AK014") 
		{
            price = 350;
            discount = 0.03;
        } 
		else if (foodItem == "AK015") 
		{
            price = 250;
            discount = 0.05;
        }
		else 
		{
            cout << "Invalid Food Item" << endl;
            continue; // Skip to next iteration
        }

        // Calculate total cost
        totalCost = totalCost + (price * quantity) * (1 - discount);

        cout << "Do You have more data? (Y/N): ";
        cin >> choice;
        
    } while (choice == 'Y' || choice == 'y');

    cout.precision(2);
    cout << fixed;
    cout << "Total Price is: " << totalCost << endl;

    return 0;
}

