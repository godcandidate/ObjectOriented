#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

//Abstract class
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

        //Pure virtual function
        //Every derived class must have this method
        virtual float area(void)=0;
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
    Square sq;
    Rectangle rect;
    Triangle tria;

    Polygon* polygon[3];
    polygon[0] = &sq;
    polygon[1] = &rect;
    polygon[2] = &tria;

   //setting the params
    for(int i=0; i<=2; i++)
    {
        polygon[i]->setParams(10, 5);
    }

        //heading
    cout << "\n\t Abstract class \n\n";
    cout << "\t  " << setw(20) << left << "OBJECTS"
            << setw(10) << left << "WIDTH"
            << setw(10) << left << "HEIGHT"
            << setw(15) << left << "PURE VIRTUAL AREA"<< endl;
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


    return 0;
}
