#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Polygon
{
    protected:
        float width;
        float height;

    public:

        void setParams(float w, float h)
        {
            width = w;
            height = h;
        }

        float getParams()
        {
            float params[2];
            params[0] = width;
            params[1] = height;
            return width;
        }
        virtual float area()=0;

        //Polymorphic method
        void printArea()
        {
            cout << "Area : " << this->area() << endl;
        }
};

class Square: public Polygon
{
    public:
        Square()
        {
            height = 0;
        }
        float area()
        {
            return width * width;
        }
};

class Rectangle: public Polygon
{
    public:
        float area()
        {
            return height * width;
        }
};

class Triangle: public Polygon
{
    public:
        float area()
        {
            return height * width * 0.5;
        }

};

int main()
{
    Square sq;
    Rectangle rect;
    Triangle tria;

    Polygon *squareA = &sq;
    Polygon *rectB = &rect;
    Polygon *triC = &tria;

    squareA->setParams(10, 0);
    rectB->setParams(10, 5);
    triC->setParams(10, 5);

    cout << "Square    : " << squareA->getParams() << endl;
    cout << "Rectangle : " << rectB->getParams()  << endl;
    cout << "Triangle  : " << triC->getParams() << endl << endl;

    squareA->printArea();
    rectB->printArea();
    triC->printArea();

    return 0;
}

