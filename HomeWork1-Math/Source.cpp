#include <iostream>
using namespace std;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	int value;

	int sum = 0;
	int counter = 1;

	{
		std::cout << "Please enter a number: ";
		std::cin >> value;
		if (value == 0)
		{
		//break;
		}
		else if (value != 0)
		{
			cout << "  Double that BS: " << value * 2 << ".\n";

		}
		std::cin >> value;
		if (value == 0)
		{
			//break;
		}
		else if (value != 0)
		{
			cout << "  Double that BS: " << value * 2 << ".\n";

		}


		//	cout << "Where are we now? " << value << endl;  wtf
	}

	if (value < 65535)
	{
		std::cout << "The number is less than 65535";
		cin >> value;
		cout << "  Double that BS: " << value * 2 << ".\n";


	}
		
	else if (value > 65535)
	{
		std::cout << "The number is greater than 65535";
	}
	else if (value == 65535)
	{
		std::cout << "The number is equal to 65535";
	}

	return 0;
}

