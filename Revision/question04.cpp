// Question 04

#include <iostream>
#include <string>

using namespace std;

struct Employee 
{
    string empID;
    string name;
    float overTimeFee;
    int otHours[5];
};

Employee getEmp(Employee e) 
{
    cout << "Enter Employee ID: ";
    cin >> e.empID;
    cout << "Enter the Name of the Employee: ";
    cin >> e.name;
    cout << "Enter the Over-time Fee: ";
    cin >> e.overTimeFee;
    cout << "Enter the number of OT Hours for Day 1: ";
    cin >> e.otHours[0];
    cout << "Enter the number of OT Hours for Day 2: ";
    cin >> e.otHours[1];
    cout << "Enter the number of OT Hours for Day 3: ";
    cin >> e.otHours[2];
    cout << "Enter the number of OT Hours for Day 4: ";
    cin >> e.otHours[3];
    cout << "Enter the number of OT Hours for Day 5: ";
    cin >> e.otHours[4];

    return e;
}

void calOTpayment(float overTimeFee, int otHours[], int size) 
{
    int totalOTHours = 0;
    for (int i = 0; i < size; ++i) 
	{
        totalOTHours = totalOTHours + otHours[i];
    }
    int totalPayment = totalOTHours * overTimeFee;
    cout << "Total Over Time Payment: " << totalPayment << endl;
}

int main() 
{
    Employee emp;
    emp = getEmp(emp);
    calOTpayment(emp.overTimeFee, emp.otHours, 5);

    // Change overTimeFee using pointers
    float *overTimeFeePointer = &emp.overTimeFee;
    *overTimeFeePointer = 600.00;

    cout << "The new overtime fee is: " << emp.overTimeFee << endl;

    return 0;
}

