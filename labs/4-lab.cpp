#include <iostream>


using namespace std;

class  Quadrilateral
{
    private:
        int x, y;

    public:
        void set_values(int a, int b)
        {
            x = a;
            y = b;
        }
        int area()
        {
            return x * y;
        }
};

class Square : public Quadrilateral
{

};

class Rectangle: public Quadrilateral
{

};

int main()
{
    Square sq1;
    Rectangle rect1;
    int a[2];

    sq1.set_values(10,10);
    rect1.set_values(5, 10);

    cout << "\n\t The area of the square with sides 10, 10 is " << sq1.area() << endl;
    cout << "\n\t The area of the Rectangle with sides 5, 10 is " << rect1.area() << endl;

    return 0;
}
