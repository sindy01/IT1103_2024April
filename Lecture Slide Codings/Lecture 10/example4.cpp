//Lecture 10 Slide 16
//User Defined Data Types (typedef) & Structures

#include <iostream>

using namespace std;

typedef struct Employee
{
	int EmpID ; 
	string Empname;
	int Age;
	float Salary;
}Emp;				// The Alias is Emp

int main()
{

	Emp Emp1,Emp2; 
 	
 	Emp1.EmpID = 100; 
	Emp1.Empname = "Saman";
	Emp1.Age = 30;
	Emp1.Salary = 25000;
	
	Emp Emp3 = {101,"Shiva",25,35000};

	Emp2 = Emp3;
	
	cout << Emp1.EmpID << " " << Emp1.Empname << " " << Emp1.Age << " " << Emp1.Salary << endl;
	cout << Emp2.EmpID << " " << Emp2.Empname << " " << Emp2.Age << " " << Emp2.Salary << endl;
	cout << Emp3.EmpID << " " << Emp3.Empname << " " << Emp3.Age << " " << Emp3.Salary << endl;
    

    return 0;
}

