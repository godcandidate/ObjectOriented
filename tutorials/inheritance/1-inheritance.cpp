#include <iostream>
using namespace std;

// models Shapes using inheritance

//base class
class Shapes
{
    protected:
        int length;

    public:
        void setSides()
        {
            cout << "\n\t + Enter the Length: ";
            cin >> length;
        }
        void getSides()
        {
            cout << "\n\t + The length is " << length << endl;
        }
};

// derived class
class Square: public Shapes
{
    public:
        void setSides()
        {
            Shapes::setSides(); // inherited from base class
        }
        void getSides()
        {
            Shapes::getSides();
        }
        void area()
        {
            cout << "\n\t - The area of the square = " << length * length << endl;
        }
};

//Derived class
class Rectangle: public Shapes
{
    private:
        float breadth;

    public:
        void setSides()
        {
            Shapes::setSides();
            cout << "\n\t - Enter the Breadth: ";
            cin >> breadth;
        }
        void getSides()
        {
            Shapes::getSides(); // inherited from base class
            cout << "\n\t - The Breadth is " << breadth << endl;

        }
        void area()
        {
             cout << "\n\t - The area of the Rectangle = " << length * breadth << endl;
        }

};

int main()
{
    Square square1;
    Rectangle rectangle1;

    cout << "\n\t  BASE CLASS - SHAPES \n\n";

    cout << "\n\n\t ------- Derived class - Square ---------\n";
    square1.setSides();
    square1.getSides();
    square1.area();

    cout << "\n\n\t ------- Derived class - Rectangle ---------\n";
    rectangle1.setSides();
    rectangle1.getSides();
    rectangle1.area();

    return 0;
}
