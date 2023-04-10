#include <iostream>

using namespace std;

int main()
{
	// question 1
    float num1, num2, result;
    char operation;
    char opt;

    cout << "\n\t\t\t  Hello user, welcome to Excersise 2b" << endl;
    cout << "\t ______________________________________________________________________" << endl;

    cout << "\t\t\t Basic Arithemetic on two numbers\n";

    cout << " \n\t\t Enter number1: ";
    cin >> num1;
    cout << " \n\t\t Enter number2: ";
    cin >> num2;
    cout << " \n\t\t Enter operation (+ - / *): ";
    cin >> operation;

    switch (operation)
    {
    	case '+':
    		result = num1 + num2;
    		break;

    	case '-':
    		result = num1 - num2;
    		break;

    	case '/':
    		result = num1 / num2;
    		break;

    	case '*':
    		result = num1 * num2;
    		break;

    	default:
    		result = 0;
    		cout << "\n\t\t" << operation << " is not in the specified operations (+,-,*,/)";

	}
    if (result != 0)
    {
    	cout << "\n\t\t The answer of " << num1 << operation << num2 << " = " << result;
    }
	cout << "\n\t ______________________________________________________________________" << endl;

    return 0;
}

