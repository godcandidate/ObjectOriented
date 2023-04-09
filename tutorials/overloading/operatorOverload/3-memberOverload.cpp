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

        //Overloading binary operators + and -
        points3D operator +(points3D point2)
        {
            points3D temp;
            temp.x = x + point2.x;
            temp.y = y + point2.y;
            temp.z = z + point2.z;

            return temp; //return altered value
        }

        points3D operator -(points3D point2)
        {
           points3D temp;
            temp.x = x - point2.x;
            temp.y = y - point2.y;
            temp.z = z - point2.z;

            return temp; //return altered value
        }

};

int main()
{
    points3D pointA(2,5,9), pointB(3,4,7),pointC, pointD;

    pointC = pointA + pointB;
    pointD = pointA - pointB;

    int x[4], y[4], z[4];
    //points A
    x[0] = pointA.getX();
    y[0] = pointA.getY();
    z[0] = pointA.getZ();

    //points B
    x[1] = pointB.getX();
    y[1] = pointB.getY();
    z[1] = pointB.getZ();

    //points C
    x[2] = pointC.getX();
    y[2] = pointC.getY();
    z[2] = pointC.getZ();

    //points D
    x[3] = pointD.getX();
    y[3] = pointD.getY();
    z[3] = pointD.getZ();


    cout << "\n\t Overload of + and - \n\n";
    cout << "\t  " << setw(20) << left << "OBJECTS"
            << setw(10) << left << "POINT X"
            << setw(10) << left << "POINT Y"
            << setw(15) << left << "POINT Z"<< endl;
    cout << "\t----------------------------------------------------------\n";

    string obj[4] = {"PointA", "PointB", "Point A+B", "Point A-B"};
    for (int i = 0; i<4; i++)
    {
        cout << "\t  " << setw(20) << left << obj[i]
                << setw(10) << left << x[i]
                << setw(10) << left << y[i]
               << setw(10) << left << z[i] << endl;
        cout << "\t----------------------------------------------------------\n";
    }

    return 0;
}
