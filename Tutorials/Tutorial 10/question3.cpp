// Tutorial 10 Question 3

#include <iostream>
#include <string>

using namespace std;

// Typedef for Vehicle
typedef struct VehicleData
{
    string vehicleID;
    string model;
    string brand;
    double priceDerivation[5];
} Vehicle;

void avgDerivation(double priceDerivation[], int size);

int main() 
{
    // Create a variable of the Vehicle typedef
    Vehicle myVehicle;

    // Take user input for Vehicle details
    cout << "Enter the Vehicle ID : ";
    cin >> myVehicle.vehicleID;

    cout << "Enter the Vehicle Model Name : ";
    cin >> myVehicle.model;

    cout << "Enter the Vehicle Brand Name : ";
    cin >> myVehicle.brand;

    for (int i = 0; i < 5; ++i) 
	{
        cout << "Enter the price in LKR - Month " << i + 1 << " : ";
        cin >> myVehicle.priceDerivation[i];
    }

    // Call the avgDerivation() function
    avgDerivation(myVehicle.priceDerivation, 5);

    // Change the Brand name of the Vehicle to "Audi" using pointers dynamically
    myVehicle.brand = "Audi";

    // Print the new Brand name
    cout << endl << "The Vehicle Brand Name : " << myVehicle.brand << endl;

    return 0;
}

// Function to calculate average derivation and total payment in USD
void avgDerivation(double priceDerivation[], int size) 
{
    const double exchangeRate = 180.0;
    double totalPaymentUSD = 0;

    for (int i = 0; i < size; ++i) 
	{
        double priceUSD = priceDerivation[i]/ exchangeRate;
        cout << "Payment of Month" << i+1 << " in USD : " << priceUSD << endl;
        totalPaymentUSD += priceUSD;
    }

    cout << "\nThe total payment in USD : " << totalPaymentUSD << endl;
}

