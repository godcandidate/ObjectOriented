#include <iostream>

using namespace std;

int main()
{
	// question 1
	float temperature, converted;
	int option;
	char opt;

    cout << "\n\t\t\t  Hello user, welcome to Excersise 2a" << endl;
    cout << "\t ______________________________________________________________________" << endl;

    cout << "\t\t\t Temperature conversion\n";
    cout << " \n\t\t Enter the temperature: ";
    cin >> temperature;

    start:
    cout << "\n\t 1. convert Fahrenheit to Celsius \n\t 2. convert Celsius to Fahrenheit" << endl;
	cout << "\n\t\t Enter option: ";
    cin >> option;

    cout << "\n\t\t\t ";
    switch (option)
    {
    	case 1:
    		converted = (temperature - 32);
    		cout << temperature << " fahrenheit equals " << converted << " degrees\n";
    		break;

    	case 2:
    		converted = (9/5 * temperature) + 32;
    		cout << temperature << " degrees equals " << converted << " fahrenheit\n";
    		break;

    	default:
    		cout << "Wrong option ,  want to try again(y): ";
    		cin >> opt;
    		if (opt == 'y')
    			goto start;
     }

     cout << "\n\t ______________________________________________________________________" << endl;

    return 0;
}
