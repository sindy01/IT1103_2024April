// Tutorial 8 Question 1

#include <iostream>
#include <string>

using namespace std;

void InputWeight(float weight[], int size);
void InputHeight(float height[], int size);
void CalcBMI(float height[], float weight[], float bmi[], int size);
int MaximumBMI(float bmi[], int size);
float MinimumBMI(float bmi[], int size);
float AverageBMI(float bmi[], int size);
string DisplayName(float bmi[], int size);
void BMICategory(float bmi[], int size);

int main() 
{
    const int SIZE = 5;
    float Height[SIZE], Weight[SIZE], BMI[SIZE];

    // Input Height and Weight
    InputHeight(Height, SIZE);
    InputWeight(Weight, SIZE);

    // Calculate BMI
    CalcBMI(Height, Weight, BMI, SIZE);

    // Find and print minimum BMI
    cout << "Minimum BMI: " << MinimumBMI(BMI, SIZE) << endl;

    // Find and print average BMI
    cout << "Average BMI: " << AverageBMI(BMI, SIZE) << endl;

    // Find and print name of person with highest BMI
    cout << "Person with highest BMI: " << DisplayName(BMI, SIZE) << endl;

    // Find and print BMI category for each person
    BMICategory(BMI, SIZE);

    return 0;
}

// Function to input weight for each student
void InputWeight(float weight[], int size) 
{
    int i = 0;
    while (i < size) 
    {
        cout << "Enter weight for student " << (char)('A' + i) << ": ";
        cin >> weight[i];
        
        if (weight[i] < 45 || weight[i] > 200)
        {
            cout << "Invalid weight!" << endl;
        }
        else
        {
            i++;
        }
    }
}

// Function to input height for each student
void InputHeight(float height[], int size) 
{
    int i = 0;
    while (i < size) 
	{
        cout << "Enter height for student " << (char)('A' + i) << ": ";
        cin >> height[i];

        if (height[i] < 140 || height[i] > 200) 
		{
            cout << "Invalid height!" << endl;
        } 
		else 
		{
            i++;
        }
    }
}

// Function to calculate BMI for each student
void CalcBMI(float height[], float weight[], float bmi[], int size) 
{
    for (int i = 0; i < size; ++i) 
	{
        bmi[i] = weight[i] / ((height[i] / 100) * (height[i] / 100));
    }
}

// Function to find the index of the maximum BMI value
int MaximumBMI(float bmi[], int size) 
{
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) 
	{
        if (bmi[i] > bmi[maxIndex]) 
		{
            maxIndex = i;
        }
    }
    return maxIndex;
}

// Function to find the minimum BMI value
float MinimumBMI(float bmi[], int size) 
{
    float minBMI = bmi[0];
    for (int i = 1; i < size; ++i) 
	{
        if (bmi[i] < minBMI) 
		{
            minBMI = bmi[i];
        }
    }
    return minBMI;
}

// Function to find the average BMI value
float AverageBMI(float bmi[], int size) 
{
    float sum = 0.0;
    for (int i = 0; i < size; ++i) 
	{
        sum += bmi[i];
    }
    return sum / size;
}

// Function to display the name of the person with the highest BMI
string DisplayName(float bmi[], int size) 
{
    int maxIndex = MaximumBMI(bmi, size);
    return "Student " + string(1, (char)('A' + maxIndex));
}

// Function to determine BMI category and count of each category
void BMICategory(float bmi[], int size) 
{
    int underweight = 0, healthy = 0, overweight = 0, obese = 0;

    for (int i = 0; i < size; ++i) 
	{
        if (bmi[i] < 18.5) 
		{
            cout << "Student " << (char)('A' + i) << ": Underweight\n";
            underweight++;
        } 
		else if (bmi[i] >= 18.5 && bmi[i] <= 24.9) 
		{
            cout << "Student " << (char)('A' + i) << ": Healthy\n";
            healthy++;
        } 
		else if (bmi[i] >= 25 && bmi[i] <= 29.9) 
		{
            cout << "Student " << (char)('A' + i) << ": Overweight\n";
            overweight++;
        } 
		else 
		{
            cout << "Student " << (char)('A' + i) << ": Obese\n";
            obese++;
        }
    }

    cout << "Number of underweight students: " << underweight << endl;
    cout << "Number of healthy students: " << healthy << endl;
    cout << "Number of overweight students: " << overweight << endl;
    cout << "Number of obese students: " << obese << endl;
}


