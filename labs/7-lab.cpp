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

    rect.set_values(5, 10);
    trgl.set_values(5, 10);

    //displaying
    cout << "\n Width - 5 and height - 10 " << endl;
    cout << "\n Area of rectangle : " << rect.area() << endl;
    cout << "\n Area of triangle  : " <<trgl.area() << endl;;

    return 0;
}
