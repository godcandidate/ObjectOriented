#include <iostream>
#include <string>

// a model class for car
using namespace std;

class Car
{
    private:
        string name;  // car name
        int number;  // car number
        float cost; // car cost

    public:
        void setParams(string cname, int num, float price)
        {
            name = cname;
            number = num;
            cost = price;
        }
        void displayCar()
        {
            cout << "\n\t Name         : " << name << endl;
            cout << "\n\t Plate number : " << number << endl;
            cout << "\n\t Cost      GHc: " << cost << endl;
        }
};


int main()
{
    Car car1;  // define car
    car1.setParams("Rose Royce",566252, 500);  // call member function

    cout << "\n\t\t Car Details" << endl;
    cout << "\n\t _________________________" << endl;
    car1.displayCar();

    return 0;
}

