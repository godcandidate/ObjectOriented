#include <string>
#include <iostream>

using namespace std;


class CPolygon
{
    protected:
        int width, height;

    public:
        void set_values(int a , int b)
        {
            width = a;
            height = b;
        }
        //question 1
        virtual int area()
        {
            return 0;
        }
};

//2nd question
class CRectangle: public CPolygon
{
    public:
        int area()
        {
            return width * height;
        }
};

class CTriangle: public CPolygon
{
    public:
        int area()
        {
            return width * height * 0.5;
        }
};

int main()
{

    // 3rd question
    CRectangle rect;
    CTriangle trgl;
    CPolygon poly;

    CPolygon *ppoly1 = &rect;
    CPolygon *ppoly2 = &trgl;
    CPolygon *ppoly3 = &poly;

    // set all values to 5 and 10
    ppoly1->set_values(5, 10);
    ppoly2->set_values(5, 10);
    ppoly2->set_values(5, 10);

    //displaying
    cout << "\n Width - 5 and height - 10 " << endl;
    cout << "\n Area of rectangle : " << ppoly1->area() << endl;
    cout << "\n Area of triangle  : " << ppoly2->area() << endl;;
    cout << "\n Area of polygon   : " << ppoly3->area() << endl;;

    return 0;
}

