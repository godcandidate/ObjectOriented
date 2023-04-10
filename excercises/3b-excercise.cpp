#include <iostream>

using namespace std;

// declaring functions
void zeroSmaller(int &a, int &b);


int main()
{
	int num1, num2;
	char opt;

	cout << "\n\t\t\t Sets smaller number to zero \n";
	cout << "\t____________________________________________\n\n";

	cout << "\n\t\t Enter the number1 : ";
	cin >> num1;
	cout << "\n\t\t Enter the number2 : ";
	cin >> num2;

	zeroSmaller(num1, num2);

	cout << "\n\t\t The new values";
	cout << "\n\t___________________________________________\n\n";
	cout << "\n\t\t num1 = " << num1;
	cout << "\n\t\t num2 = " << num2;
	cout << "\n\t___________________________________________\n\n";

	return 0;
}

// function definitions

void zeroSmaller(int &a, int &b)
{
	if (a < b)
		a = 0;
	else
		b = 0;
}

