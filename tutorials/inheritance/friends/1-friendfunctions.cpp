#include<iostream>

using namespace std;

class Rectangle
{
	int width, height;
	public:
		void set_values (int, int);

		int area()
		{
			return width * height;
		}
		friend Rectangle duplicate (Rectangle);
};

void Rectangle::set_values(int a, int b)
{
	width = a;
	height = b;
}

Rectangle duplicate (Rectangle rectparam)
{
	Rectangle rectres;
	rectres.width = rectparam.width*2;
	rectres.height = rectparam.height*2;
	return (rectres);

}
int main()
{

	Rectangle rect, rectb;
	rect.set_values(2,3);
	rectb = duplicate (rect);

	cout << rectb.area();

	return 0;
}
