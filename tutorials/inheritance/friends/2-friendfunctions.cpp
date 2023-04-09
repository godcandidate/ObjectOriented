#include<iostream>

using namespace std;

class Rectangle
{
	int width, height;
	public:
        void area()
		{
			cout << "\n\t Total area   = " << width * height << endl;
		}

		void set_values(int a, int b)
        {
            width = a;
            height = b;
        }

        void get_values()
        {
            cout << "\t ----------------------------------------\n";
            cout << "\n\t Total width  = " << width << endl;
            cout << "\n\t Total height = " << height << endl;

        }

        friend Rectangle nRect (int n, Rectangle rect);
};

Rectangle nRect (int n, Rectangle rectp)
{
	Rectangle rectres;
	rectres.width = rectp.width * n;
	rectres.height = rectp.height * n;
	return (rectres);

}
int main()
{

	Rectangle rect, rectb;
	int sidea, sideb, n;
	cout << "\t\t Area of n Rectangles\n";
	cout << "\t ----------------------------------------\n";
	cout << "\t Enter width: ";
	cin >> sidea;
	cout << "\n\t Enter height: ";
	cin >> sideb;
	rect.set_values(sidea,sideb);
	cout << "\n\t Enter number of rectangles: ";
	cin >> n;
	rectb = nRect(n, rect);
	rectb.get_values();
	rectb.area();


	return 0;

}
