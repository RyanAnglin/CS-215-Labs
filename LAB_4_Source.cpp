// ------------------------------------------------
// Ryan Anglin 
// CS 215-001 
// LAB 3 
// September 20th, 2017 
//-------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Define each variable
int EnterDays;
int Hi;
int Hi_Count; 
int Low;
int Low_Count;
int AVG_HI;
int AVG_LOW; 
int MIN;
int MAX;
int FREEZE_COUNT; 
int i;

// Beginning Function 
void main() {
	cout << "Enter amount of days (1-10): "; cin >> EnterDays;
	
	// User Validation Loop. I.E. Enter the correct interval of days 
	while (EnterDays < 1 || EnterDays > 10) {
		cout << " Error! Try again!\n";
		cout << "Enter amount of days (1-10): ";
		cin >> EnterDays;
		}
	// Declare variables/Empty the Bucket before summations 
		int i = 1;
		int MAX = 1;
		int MIN = 2000;
		int Hi_Count = 0;
		int Low_Count = 0;
		int FREEZE_COUNT = 0;

	//While loop for each day-itteration. (Do this for each day) 
		while (i <= EnterDays) {
			cout << "Enter Hi and Low for Day "; cout << i; cout << ": ";
			cin >> Hi;
			Hi_Count += Hi;     // Add up the Hi's 
			cin >> Low;
			Low_Count += Low;   // Add up the Low's 
			i = i + 1;          // Get ready to start the next itteration 
			if (Low < MIN)   // Is this the lowest we found? 
				MIN = Low;
				if ((Low < 32) || (Hi < 32)) // Freezing Days Count 
					FREEZE_COUNT += 1;
			if (Hi > MAX)    // Is this the highest we've found? 
				MAX = Hi; 
		}

	// Calculate the Averages
	AVG_HI = (Hi_Count/EnterDays);  
	AVG_LOW = (Low_Count/EnterDays);

	cout << "The Highs: " << " Max = " << MAX << "  Avg = " << AVG_HI << "\n"; 
	cout << "The Lows:  " << " Min = " << MIN << "  Avg = " << AVG_LOW << "\n"; 
	cout << "Number of days below freezing: " << FREEZE_COUNT << "\n"; 

	system("pause");
}