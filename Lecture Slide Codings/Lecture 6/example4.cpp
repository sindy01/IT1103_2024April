//Lecture 6 Slides 28, 29
//Pass by Value vs Pass by Reference

#include <iostream>

using namespace std;

int squareByValue(int);         // function prototype
void squareByReference(int &);  // function prototype
                                                      
int main()
{
  int x = 2 ,z = 4;

   cout << "x = " << x << " before squareByValue\n";
   cout << "Value returned by squareByValue: " << squareByValue(x) << endl;  
   cout << "x = " << x << " after squareByValue\n" << endl << endl;
   
   cout << "z = " << z << " before squareByReference" << endl;
   squareByReference(z);
   cout << "z = " << z << " after squareByReference" << endl;
   
   return 0; 
 } 
 
int squareByValue(int number)                                   
{                                                             
    return number *= number;  // caller's argument not modified                                                             
}   
                            
void squareByReference(int &numberRef)                  
{                                                         
    numberRef *= numberRef;   // caller's argument modified                                                      
} 
 


