#include <iostream>

using namespace std;

/* tolBooth class */
class tolBooth
{

	private:
		unsigned int numberofCars;
		double amountofMoney;

	public:
		tolBooth()
		{
			numberofCars = 0;
			amountofMoney = 0.0;
		}
		void payingCar()
		{
			numberofCars++;
			amountofMoney += 0.5;
		}
		void nopayCar()
		{
			numberofCars++;
		}
		void display() const
		{
			cout << "________________________________________________\n";
			cout << "\t Total number of cars: " << numberofCars << endl;
			cout << "\t Total cash of cars: $" << amountofMoney << endl;
		}
};

int main()
{
	tolBooth testing;
	char key;
	cout << "_________________________________________________________\n";
	cout << "\t\t WELCOME TO THE TOILBOOTH COMPANY\n";

	cout << "\t The following are keys to what you want to do\n";
	cout << "\t_ p to pay for a car \n\t_ n to not pay for a car \n\t_ q to quit\n";

	while (1)
	{
		cout << "\n\t\t -- Enter key: ";
		cin >> key;

		if(key == 'p')
		{
			testing.payingCar();
			cout << "\n\t\t Payed Car\n";
		}
		else if(key == 'n')
		{
			testing.nopayCar();
			cout << "\n\t\t Unpayed Car\n";
		}
		else
		{
			testing.display();
			break;
		}
	}

}
