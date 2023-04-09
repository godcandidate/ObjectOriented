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
        float getWidth()
        {
            return width;
        }
        float virtual getHeight()
        {
            return height;
        }

        //Polymorphic method
        virtual float area()
        {
            return 0;
        }
};

class Square: public Polygon
{
    public:
        float getHeight()
        {
            return 0;
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
    Polygon* polygon[3];
    polygon[0] = new Square();
    polygon[1] = new Rectangle();
    polygon[2] = new Triangle();



    //setting the params
    for(int i=0; i<=2; i++)
    {
        polygon[i]->setParams(10, 5);
    }

        //heading
    cout << "\n\t Polymophosim of a base class using the new method \n\n";
    cout << "\t  " << setw(20) << left << "OBJECTS"
            << setw(10) << left << "WIDTH"
            << setw(10) << left << "HEIGHT"
            << setw(15) << left << "VIRTUAL AREA"<< endl;
    cout << "\t----------------------------------------------------------\n";

    string obj[4] = {"Square", "Rectangle", "Triangle"};
    for (int i = 0; i<3; i++)
    {
        cout << "\t  " << setw(20) << left << obj[i]
                << setw(10) << left << polygon[i]->getWidth()
                << setw(10) << left << polygon[i]->getHeight()
                << setw(10) << left << polygon[i]->area()<< endl;
        cout << "\t----------------------------------------------------------\n";
    }

    //deleting after using new
    delete polygon;
    return 0;
}
