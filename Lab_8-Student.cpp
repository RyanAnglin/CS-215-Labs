#include <iostream>
#include <string>
#include "student.h"
using namespace std;
//--------------------------------------
//				Gets
//--------------------------------------

student::student() {
	studentName = "";
	numScore = 0;
}

string student::getName() { return studentName; }

int student::getScores(int newScore[]) {
	for (int i = 0; i < MAX_NUM; i++) {
		newScore[i] = scoreArray[i];

	}
	return numScore;
}
double student::getAvg() {
	double sum = 0;
	for (int i = 0; i < numScore; i++) {
		sum += scoreArray[i];
	}
	return sum / numScore;
}
void student::addScore(int newScore) {
	if (numScore >= MAX_NUM)
		cout << "MAX Scores Exceeded!\n";
	else {
		scoreArray[numScore] = newScore;
		numScore++;
	}
}

//---------------------------------------
//				Sets
//---------------------------------------

void student::setName(string newName)
{
	studentName = newName;
}

void student::setScores(int s[], int numSc) {
	if (numSc < 0 || numSc > MAX_NUM)
		cout << "Invaild numScores given!";
	else {
		for (int i = 0; i < numScore; i++)
			scoreArray[i] = 0;
		numScore = numSc;
		for (int i = 0; i < numScore; i++) {
			scoreArray[i] = s[i];
		}
	}
}

void student::print() {
	cout << studentName << " " << getAvg() << " " << numScore << ": ";
	for (int i = 0; i < numScore; i++) {
		cout << scoreArray[i] << " ";
	}
	cout << endl; 
}
