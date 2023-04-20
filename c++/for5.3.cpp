// This program has the user input a number n and then finds the
// mean of the first n positive integers

// KALISA MCKENZIE 

#include <iostream>
using namespace std;

int main()
{
	int value;		// value is some positive number n
	int total = 0;	// total holds the sum of the first n positive numbers 
	int number;		// the amount of numberss
	float mean;		// the average of the first n positive numbers
  int value2; // a second positive integer

	cout << "Please enter a positive integer" << endl;
	cin >> value;
  cout << "Please enter another positive integer" << endl;
  cin >> value2;

	if (value > 0)
	{
		for (number = value; number <= value2; number++) //Corrections made for Exercise 3
		{
			total = total + number;
		}	// curly braces are optional since there is only one statement

		mean = float(total) / (value2-value)-1;	// note the use of the typecast
    //Corrections made for exercise 3
													// operator here 
		cout << "The mean average of the integers are: " << mean << endl;
	}
	else
		cout << "Invalid input - integer must be positive" << endl;

	return 0;
}
//Carefully observe the output values. They are incorrect.Try using float(total) instead of static_cast�Correct the cout statement; the code calculates the mean from one integer to another, not the first x integers.