#include<iostream>

using namespace std;


class Circle
{
	private:
		float radius;
	public:
	    void setRadius(float a)
	    {
	        radius = a;
	    }
		void areaofCircle()
		{
            float area = radius * radius * 3.14;
			cout << " Radius: " << radius << " units" << endl;
			cout << "\n Area: " << area << " squared units" << endl;
		}
		friend class Square;
};

class Square
{
    private:
        int side;
    public:
        void convert(Circle cirl)
        {
            side = cirl.radius;
        }
        void areaofSquare()
        {
			int area = side * side;
			cout << " Side: " << side << " units" << endl;
			cout << "\n Area: " << area << " squared units" << endl;
		}
};

int main()
{
    Circle circle;
    Square square;
    float rad;

    cout << "\t\t Convert a Circle to Square\n";
    cout << "----------------------------------------\n\n";
    cout << "\t Enter radius of circle: ";
    cin >> rad;

    cout << "\n Circle \n";
     cout << "-------------\n";
    circle.setRadius(rad);
    circle.areaofCircle();

    cout << "\n Square\n";
    cout << "--------------\n";
    square.convert(circle);
    square.areaofSquare();
     cout << "----------------------------------------\n\n";

	return 0;

}
