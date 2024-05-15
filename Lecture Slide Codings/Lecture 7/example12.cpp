//Lecture 7 Slide 25 - Two-Dimensional Array Declaration

#include <iostream>

using namespace std;

int main() 
{
	int grades[5][4] = {{67,45,76,14},{48,59,38,90},{79,49,80,69},{41,74,56,78},{68,75,80,89}};
	
 	for(int m=0; m<5; m++)
    {
        for(int n=0; n<4; n++)
        {
            cout << grades[m][n] << " ";
        }
        cout << endl;
    }


	return 0;
}

