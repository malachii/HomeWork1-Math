#include <iostream>
using namespace std;

int main()
{

	//Write a program which prompts the user to enter a number. 
	//Add the value they entered to itself (double it) and display the sum. 
	//Double that value and continue to do that either 100 times or until the value 
	//is greater than or equal to 65,535.

	int value;
	cout << "Please enter a number: ";
	cin >> value;
	cout << endl;

	cout << value << endl;

	for (int x = 1; x <= 100; x++)
	{
		value = value + value;

		if (value < 65535)
		{
			cout << value << endl;

		}
		else
		{
			break;
		}

	}

	return 0;

}
