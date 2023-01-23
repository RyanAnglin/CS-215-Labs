// ------------------------------------------------
// Ryan Anglin 
// CS 215-001 
// LAB 3 
// September 13th, 2017 
//-------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


// Variables Defined 
int NUMBER_1;
int NUMBER_2;
int NUMBER_3;
int VAR_1;
int VAR_2;
int VAR_3;
char Pepper;

// Beginning Function 
// Ask for Numbers 
void main() {
	cout << "Enter Number 1: "; cin >> NUMBER_1;
	cout << "Enter Number 2: "; cin >> NUMBER_2;
	cout << "Enter Number 3: "; cin >> NUMBER_3;

	// NUMBER_1 Calculation     
	if ((NUMBER_1 > NUMBER_2) && (NUMBER_1 > NUMBER_3)) {
		VAR_1 = NUMBER_1;
		if (NUMBER_2 > NUMBER_3) {
			VAR_2 = NUMBER_2;
			VAR_3 = NUMBER_3;
		}
		if (NUMBER_2 < NUMBER_3) {
			VAR_2 = NUMBER_3;
			VAR_3 = NUMBER_2;
		}
	}

	else if ((NUMBER_1 > NUMBER_2) && (NUMBER_1 < NUMBER_3)) {
		VAR_2 = NUMBER_1;
		if (NUMBER_3 > NUMBER_2) {
			VAR_1 = NUMBER_3;
			VAR_3 = NUMBER_2;
		}
		if (NUMBER_3 < NUMBER_2) {
			VAR_1 = NUMBER_2;
			VAR_3 = NUMBER_3;
		}
	}

	else if ((NUMBER_1 < NUMBER_2) && (NUMBER_1 < NUMBER_3)) {
		VAR_3 = NUMBER_1;
		if (NUMBER_2 < NUMBER_3) {
			VAR_1 = NUMBER_3;
			VAR_2 = NUMBER_2;
		}
		if (NUMBER_2 > NUMBER_3) {
			VAR_1 = NUMBER_2;
			VAR_2 = NUMBER_3;
		}
	}


	else if ((NUMBER_1 < NUMBER_2) && (NUMBER_1 > NUMBER_3)) {
		if ((NUMBER_2 > NUMBER_3)) {
			VAR_1 = NUMBER_2;
			VAR_2 = NUMBER_1;
			VAR_3 = NUMBER_3;
		}
		if (NUMBER_2 < NUMBER_3) {
			VAR_1 = NUMBER_2;
			VAR_2 = NUMBER_3;
			VAR_3 = NUMBER_1;
		}
	}

	// Print out the order from the given If/Else 
	cout << "In Order, These are: " << VAR_3 << " , " << VAR_2 << " , " << VAR_1 << "\n";
	cout << "\n";

	// PART 2: Use Switch for to print scoville units for chosen Pepper 

	cout << "Pick the Pepper you want to know the Scoville Units of:\n";
	cout << "\n";
	cout << "A. Aleppo Pepper\n";
	cout << "B. Banana Pepper\n";
	cout << "C. Cayenne Pepper\n";
	cout << "D. Dragons Breath\n";
	cout << "Enter a letter to choose a Pepper: "; cin >> Pepper;

	switch (Pepper) {                                // Make sure to use single parenthesis for each case
	case 'A':
	case 'a':
		cout << "That's 30,000 SU of Heat\n";
		break;
	case 'B':
	case 'b':
		cout << "That's 1,000 SU of Heat\n";
		break;
	case 'C':
	case 'c':
		cout << "That's 40,000 SU of Heat\n";
		break;
	case 'D':
	case 'd':
		cout << "That's 2,480,000 SU of Heat\n";
		break;
	default:
		cout << "That Pepper isn't on the list dude..\n";
	}

	system("pause");
}