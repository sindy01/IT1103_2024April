// Tutorial 11 Question 2

#include <iostream>
#include <cstring>

using namespace std;

// Class definition
class Employee 
{
	private:
	    int EmpID;
	    char EmpName[30];
	    int YearJoined;
	    int Status;  // 0 - Temporary, 1 - Permanent
	    float BasicSalary;
	
	public:
	    // Constructor
	    Employee(int empID, char empName[30], int yearJoined, int status, float basicSalary) 
		{
	        EmpID = empID;
	        strcpy(EmpName,empName);
	        YearJoined = yearJoined;
	        Status = status;
	        BasicSalary = basicSalary;
	    }
	
	    // Method to change the status of an employee
	    bool changeStatus(int newStatus) 
		{
	        if (newStatus == 1 && Status == 0) 
			{
	            Status = newStatus;
	            return true;
	        } 
			else 
			{
	            cout << "Cannot change status. Only temporary employees can be changed to permanent." << endl;
	            return false;
	        }
	    }
	
	    // Method to calculate bonus
	    float calculateBonus() 
		{
	        int workingExperience = 2022 - YearJoined;
	        if (workingExperience > 3) 
			{
	            return BasicSalary;  // One-month basic salary as a bonus
	        } 
			else 
			{
	            return 0.0;  // No bonus
	        }
	    }
	
	    // Method to print employee details
	    void printDetails() 
		{
	        cout << "Name: " << EmpName << endl;
	        cout << "EmpID: " << EmpID << endl;
	        cout << "Year Joined: " << YearJoined << endl;
	        cout << "Status: " << (Status == 1 ? "Permanent" : "Temporary") << endl;
	        cout << "Basic Salary: " << BasicSalary << endl;
	        cout << "Bonus Amount: " << calculateBonus() << endl;
	        cout << "Total: " << BasicSalary + calculateBonus() << endl;
	    }
};

int main() 
{
    // Create 2 Employee objects
    Employee Emp_1(3555, "Kumara A.S", 2000, 1, 34000.00);
    Employee Emp_2(4323, "Perera T.K", 2012, 0, 25000.00);

    // Change the status of Perera T.K to permanent
    Emp_2.changeStatus(1);

    // Print details of the two employees
    cout << "-------------Employee 01 Data-------------" << endl;
    Emp_1.printDetails();
    cout << endl;

    cout << "-------------Employee 02 Data-------------" << endl;
    Emp_2.printDetails();

    return 0;
}

