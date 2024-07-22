// Tutorial 11 Question 1

#include <iostream>
#include <cstring>

using namespace std;

// Class definition
class Meal 
{
	private:
	    int MealNo;
	    char Description[20];
	    int NoofMealsAvailable;
	    double Price;
	
	public:
	    // Constructor
	    Meal(int mealNo, char description[20], int noOfMealsAvailable, double price) 
		{
	        MealNo = mealNo;
	        strcpy(Description,description);
	        NoofMealsAvailable = noOfMealsAvailable;
	        Price = price;
	    }
	
	    // Member function to make an order
	    void makeOrder(int quantity);
	
	    // Member function to print meal details
	    void print();
};

// Definition of makeOrder function outside the class
void Meal::makeOrder(int quantity) 
{
	if (NoofMealsAvailable == 0) 
	{
        cout << "Out of Stock. Cannot Order!" << endl;
    }
    else if (NoofMealsAvailable < quantity) 
	{
        cout << "Sorry not enough available. Please wait!" << endl;
    } 
	else 
	{
        NoofMealsAvailable -= quantity;
        cout << "Order Placed!" << endl;
        cout << "Total Price: " << Price * quantity << endl;
    }
}

// Definition of print function outside the class
void Meal::print() 
{
    cout << "Meal No: " << MealNo << endl;
    cout << "Description: " << Description << endl;
    cout << "No of Meals Available: " << NoofMealsAvailable << endl;
    cout << "Price: " << Price << endl;
}

int main() 
{
    // Create 3 Meal objects
    Meal meal_1(10, "Chicken Burger", 5, 250.00);
    Meal meal_2(12, "Fish Burger", 10, 200.00);
    Meal meal_3(13, "Vegi Burger", 0, 180.00);

    // Place orders using makeOrder() method
    // Print details using print() method
    cout << "---------------Meal No 01---------------" << endl;
    meal_1.makeOrder(3);
    meal_1.print();

    cout << "\n---------------Meal No 02---------------" << endl;
    meal_2.makeOrder(5);
    meal_2.print();

    cout << "\n---------------Meal No 03---------------" << endl;
    meal_3.makeOrder(2);
    meal_3.print();

    return 0;
}


