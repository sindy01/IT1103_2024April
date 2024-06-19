// Tutorial 7 Question 1

#include <iostream>

using namespace std;

int main() 
{
    int numCompanies = 10;
    float bids[numCompanies];

    // Read and store bid amounts
    cout << "Enter bid amounts for 10 software companies (in millions):\n";
    for (int i = 0; i < numCompanies; ++i) 
	{
        cout << "Company " << char('A' + i) << ": ";
        cin >> bids[i];
    }

    // Calculate average bid
    float totalBid = 0.0;
    for (int i = 0; i < numCompanies; ++i) 
	{
        totalBid += bids[i];
    }
    float averageBid = totalBid / numCompanies;

    // Count how many companies bid less than the average bid
    int countBelowAverage = 0;
    for (int i = 0; i < numCompanies; ++i) 
	{
        if (bids[i] < averageBid) 
		{
            countBelowAverage++;
        }
    }

    // Display the results
    cout << "\nAverage Bid: " << averageBid << " million" << endl;
    cout << "Number of companies bidding less than the average bid: " << countBelowAverage << endl;

    return 0;
}

