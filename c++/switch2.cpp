// This program illustrates the use of the switch statement.

// Kalisa Mckenzie 

#include <iostream>
using namespace std;

int main()
{
  char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	switch (grade)	// This is where the switch statement begins
	{
		case 'A': cout << "an A - excellent work !" << endl;
				  break;
		case 'B': cout << "you got a B - good job" << endl;
		          break;
		case 'C': cout << "earning a C is satisfactory" << endl;
		          break;
		case 'D': cout << "while D is passing, there is a problem" << endl;
			      break; 
		case 'E': cout << "An E is not satisfactory for passing" << endl;
				  break; //Exercise 2
		case 'F': cout << "you failed - better luck next time" << endl;
		          break;
		default: cout << "You did not enter an A, B, C, D, or F" << endl;
}
// Exercise 3
{
	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	if (grade == 'A')
		cout << "an A - excellent work !" << endl;
	else if (grade == 'B')
		cout << "you got a B - good job" << endl;
	else if (grade == 'C')
		cout << "earning a C is satisfactory" << endl;
	else if (grade == 'D')
		cout << "while D is passing, there is a problem" << endl;
	else if (grade == 'E')
    	cout << "You needed a D or higher to pass the class" << endl; 
    else if (grade =='F')
		cout << "you failed - better luck next time" << endl;
	else
		cout << "You did not enter an A, B, C, D, or F" << endl;
	return 0;
}
