// Tutorial 6 Question 3

#include <iostream>

using namespace std;

// Function prototype
float calPayment(int itemCode, int quantity);

int main() 
{
    int code, qty;

    // Get user input for item code and quantity
    cout << "Enter the item code: ";
    cin >> code;

    cout << "Enter the quantity: ";
    cin >> qty;

    // Calculate and display the payment
    float payment = calPayment(code, qty);
    cout << "Payment: " << payment << endl;

    return 0;
}

// Function to calculate payment based on item code and quantity
float calPayment(int itemCode, int quantity) 
{
	if (itemCode == 1)
	{
		return 50 * quantity;
	}
	else if (itemCode == 2)
	{
		return 100 * quantity;
	}
	else
		return 0.0;
}

