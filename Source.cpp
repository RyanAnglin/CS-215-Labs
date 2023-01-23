//------------------------------------------------------------------------------
//Ryan Anglin
// CS 215-001
// LAB 7
// October 18th, 2017 
//-------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int MAX_NAMES = 20;

//----------------------------------------------------------------
//                    Partial Array Function
//----------------------------------------------------------------
// Given: Array, Number of Elements, Max Number 
// Opens a data file "data.txt"
// Reads the list of names from the file.
// Set the number of items in the array 
void altPartialArray(string nameArray[], int nameTemps, int MAX_NAMES) {

	string first, last;					// The first/last name string variable
	ifstream fin;						// fin defined reads files
	fin.open("data.txt");				// open the "data.txt" file
	fin >> nameTemps;	// get the first number of the data.txt file
	cout << "NameTemps: " << nameTemps << "\n";

	if (fin.fail()) {					// if it fails to open the file: cout Fail
		cout << "Failed to Open";
		return;
	}

	fin.ignore();
	for (int i = 0; i < nameTemps; i++) {  // For i < nameTemps, cout the array. 
		getline(fin, nameArray[i]);
		
	}
	for (int i = 0; i < nameTemps; i++) {  // For Loop that reads in each name with every i 
		cout << nameArray[i] << " " << endl;
	}
	fin.close();						   // Close the "data.txt" file 

}
//----------------------------------------------------------------------
//                             Sorting function 
//----------------------------------------------------------------------

void sortPartialArray() {
	



}

//--------------------------------------------------------------------
//                             Main Function 
//--------------------------------------------------------------------
void main() {
	int nameTemps = 0;					    // Number of elements in use 
	string nameArray[13];
	altPartialArray(nameArray, nameTemps, MAX_NAMES);

	system("pause");					// Pause before closing window
}