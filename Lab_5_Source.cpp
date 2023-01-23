// ------------------------------------------------
// Ryan Anglin 
// CS 215-001 
// LAB 3 
// October 3rd, 2017 
//-------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Constants/Limits
int Length;
int Width;
int Upper;
int Lower;
int i;
int A;
int B;
int multiplier;

//1) RECTANGLE FUNCTION 
// This function prints the given Length of stars and given Width of lines
void rectangle(int Length, int Width)
{
	int j = 0;
	for (int i = 1; i <= Width; i += 1) {
		for (j = 0; j < Length; j += 1) {
			cout << "*";
		}
		cout << "\n";
	}
}
//2) RANGE FUNCTION 
//This function, given number NOT between 1-10, prints Invalid!
void range(int & Upper, int & Lower)
{
	int Number;
	cout << "Enter a number 1 to 10: ";
	cin >> Number;
	if ((Lower > Number) || (Number > Upper)) {
		cout << "Invalid!" << endl;
		cout << "Enter a number 1 to 10: ";
		cin >> Number;
	}
	return;
}
//3) FRACTIONALIZE FUNCTION 
//Given two numbers (A & B) and a multiplier, multiples the two and returns
//A & B, changed, after they have been multiplied. 
int fractionize(int & A, int & B, int multiplier) {
	A = A* multiplier;
	B = B*multiplier;
	return 0;
}
// 4) MAIN FUNCTION: the Unit Test 
// Prints: "Enter..", results of Fractionalize function  
// Calls Functions: Rectangle, Range, and Fractionalize 
// Asks for: Length Width, A, B, and multiplier
void main() {
	// Inputs for, and Call: Rectangle Function 
	cout << "Enter Length and Width of a Rectangle: ";
	cin >> Length;
	cin >> Width;
	rectangle(Length, Width);

	// Call: Range Function
	cout << "Enter Upper Bound and Lower Bound: ";
	cin >> Upper;
	cin >> Lower;
	range(Upper, Lower);

	// Input for, and Call: Fractionalize Function
	cout << "Enter numerator & denominator : ";
	cin >> A;
	cin >> B;
	cout << "Enter a multiplier: ";
	cin >> multiplier;
	fractionize(A, B, multiplier);

	//Print 
	cout << "result: " << A << "/" << B << endl;
	cout << "\n";
	system("pause");
}