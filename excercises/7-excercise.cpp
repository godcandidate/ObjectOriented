#include <iostream>


using namespace std;

class Distance
{
	private:
		int feet;
		float inches;

	public:
		void getdist()
		{
			cout << "\n Enter feet: ";
			cin >> feet;
			cout << "\n Enter inches: ";
			cin >> inches;
		}
		void display()
		{
			cout << "\n\n Feet: " << feet << "\n Inches: " << inches;
		}
};


int main()
{
	cout << "\n Using normal approach\n";
	Distance dist;
	dist.getdist();
	dist.display();

	cout << "\n Using pointers\n";
	//pointers
	Distance *distptr;
	distptr = new Distance;

	distptr->getdist();
	distptr->display();
}

