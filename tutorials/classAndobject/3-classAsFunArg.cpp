#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Rectangle
{
    private:
        float width;
        float height;

    public:
        void setParameters(float w, float h)
        {
           width = w;
           height = h;
        }
        float getHeight()
        {
           return height;
        }
        float getWidth()
        {
           return width;
        }
        void addRectangle(Rectangle, Rectangle);
        float area()
        {
            return width * height;
        }
};

//method accepts two objects of the same class as arguements
void Rectangle::addRectangle(Rectangle rect1, Rectangle rect2)
{
    width = rect1.width + rect2.width;
    height = rect1.height + rect2.height;
}
int main()
{
    Rectangle rect1, rect2, rectx;
    float w[3], h[3], ar[3];

    //setting the parameters for the objects
    rect1.setParameters(3, 6);
    rect2.setParameters(7, 4);

    // First Rectangle
    w[0] = rect1.getHeight();
    h[0] = rect1.getHeight();
    ar[0] = rect1.area();

    // Second Rectangle
    w[1] = rect2.getHeight();
    h[1] = rect2.getHeight();
    ar[1] = rect2.area();


    //combining the two objects
    rectx.addRectangle(rect1, rect2);
    w[2] = rectx.getHeight();
    h[2] = rectx.getHeight();
    ar[2] = rectx.area();

    cout << "\n\t Combining two objects of a class \n\n";
    cout << "\t  " << setw(20) << left << "OBJECTS"
            << setw(10) << left << "WIDTH"
            << setw(10) << left << "HEIGHT"
            << setw(10) << left << "AREA"<< endl;
    cout << "\t----------------------------------------------------------\n";

    string obj[3] = {"Rectangle 1", "Rectangle 2","Combined Rect"};

    for (int i = 0; i<3; i++)
    {
        cout << "\t  " << setw(20) << left << obj[i]
                << setw(10) << left << w[i]
                << setw(10) << left << h[i]
                << setw(10) << left << ar[i]<< endl;
        cout << "\t----------------------------------------------------------\n";
    }
    return 0;
}


