// This program shows how the toupper and tolower functions can be
// applied in a C++ program

// KALISA MCKENZIE

#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main()
{
	int week, total, dollars;
	float average;
	char choice;

	cout << showpoint << fixed << setprecision(2);

	do
	{
		total = 0;

		for (week = 1; week <= 4; week++)
		{
			cout << "How much (to the nearest dollar) did you"
				 << " spend on food during week " << week
				 << " ?:" << endl;
			cin >> dollars;

			total = total + dollars;
		}

		average = total / 4.0;

		cout << "Your weekly food bill over the chosen month is $"
			 << average << endl << endl;

		do
			{
				cout << "Would you like to find the average for "
					 << "another month?";
				cout << endl << "Enter y or n" << endl;
				cin >> choice;

			} while (tolower(choice) != 'y' && tolower(choice) != 'n'); // If loop is removed the code still executes because this loop is apart of another general do-while loop, it only executes if the first one is true

	} while (tolower(choice) == 'y');

	return 0;
}
