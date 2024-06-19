// Tutorial 7 Question 1

#include <iostream>

using namespace std;

int main() 
{
    int numCompanies = 10;
    float bids[numCompanies] = {10,8,15,14,12.5,11,9.8,9.6,11,10.5};

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
    cout << "Average Bid: " << averageBid << " million" << endl;
    cout << "Number of companies bidding less than the average bid: " << countBelowAverage << endl;

    return 0;
}

