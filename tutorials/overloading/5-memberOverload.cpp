#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class points3D
{
    private:
        int x, y, z;

    public:
        points3D():x(0),y(0),z(0)
        {}
        points3D(int i, int j, int k)
        {
            x = i;
            y = j;
            z = k;
        }

        int getX(){
            return x;
        }

        int getY(){
            return y;
        }

        int getZ(){
            return z;
        }

        //Overloading prefix versions of >, >=, <, <=
        bool operator < (points3D point2)
        {
            return (x+y+z) < (point2.x+point2.y+point2.z);
        }

        bool operator > (points3D point2)
        {
            return (x+y+z) > (point2.x+point2.y+point2.z);
        }

        bool operator >= (points3D point2)
        {
            return (x+y+z) >= (point2.x+point2.y+point2.z);
        }

        bool operator <= (points3D point2)
        {
            return (x+y+z) <= (point2.x+point2.y+point2.z);
        }



};

int main()
{
    points3D pointA(2,5,9), pointB(1,1,1), pointC(6,7,4);

    bool values[3];

    values[0] = pointA >= pointB;
    values[1] = pointB > pointC;
    values[2] = pointA <= pointC;

    cout << "\n\t POINT A - (2,5,9)";
    cout << "\n\t POINT B - (1,1,1)";
    cout << "\n\t POINT C - (6,7,4)";
    cout << "\n\t----------------------------------------------------------\n\n";

    string obj[3] = {"Point A >= PointB", "Point B > Point C", "Point A <= Point C"};
    for (int i = 0; i<3; i++)
    {
        cout << "\t  " << setw(25) << left << obj[i]
                << setw(10) << left << values[i]<< endl;
        cout << "\t----------------------------------------------------------\n";
    }


    return 0;
}


