//-----------------------------------------------------------------
//								Lab 8 Test Driver Program
//-----------------------------------------------------------------
#include <iostream>
using namespace std;
#include "student.h"

int main() {
	student s;
	s.print();
	cout << endl;

	// assumes MAX_SCORES is 10; construction must set all 10 scores
	int mscores[10] = { 88, 77, 66, 75, 95, 87, 93, 0, 0, 0 };
	int numMscores = 7;
	s.setName("Your name here");
	s.setScores(mscores, numMscores);
	s.print();
	cout << endl;

	s.addScore(93);
	s.addScore(83);
	s.addScore(73);
	s.addScore(63);
	s.print();
	cout << endl;

	numMscores = s.getScores(mscores);
	cout << "Main: name = " << s.getName() << " Avg = " << s.getAvg() << " numMscores = " << numMscores << endl;
	for (int i = 0; i < numMscores; i++)
		cout << mscores[i] << " ";
	cout << endl << endl;

	system("pause");
	return 0;
}