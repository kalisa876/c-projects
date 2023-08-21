// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.

// Kalisa Mckenzie 

#include <iostream>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main()
{
	double batAvg;

	batAvg =  static_cast<double>(HITS) / (AT_BAT);						// an assignment statement 
	cout << "The batting average is " << batAvg << endl;	// output the result

	return 0;
}
