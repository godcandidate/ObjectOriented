#include <iostream>

using namespace std;

// declaring functions
int power(int);
int power (int, int);


int main()
{
	int number, exponent, result;
	char opt;

	cout << "\n\t\t\t power of numbers \n";
	cout << "\t____________________________________________________________________________\n\n";

	cout << "\n\t\t Enter the number: ";
	cin >> number;
	cout << "\n\t\t Default is 2,do you want to specify the exponent (y/n): ";
	cin >> opt;

	if (opt == 'y')
	{
		cout << "\n\t\t Enter exponent: ";
		cin >> exponent;
		result = power(number, exponent);
	}
	else
	{
		result = power(number);
		exponent = 2;
	}
	cout << "\n\t\t The value of power(" << number << ", " << exponent << ") is " << result;
	cout << "\n\t____________________________________________________________________________\n\n";
	return 0;
}

// function definitions
int power(int a)
{
	return (a*a);
}

int power(int a, int exponent)
{
	int result = 1;
	for(int i = 0; i < exponent; i++)
	{
		result *= a;
	}
	return result;
}

