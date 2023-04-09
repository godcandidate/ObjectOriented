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

        //Overloading prefix versions of ++ and --
        void operator ++(int)
        {
            x++;
            y++;
            z++;
        }

        void operator --(int)
        {
            x--;
            y--;
            z--;
        }

        // overload of =
        points3D operator = (points3D p2)
        {
            x = p2.x;
            y = p2.y;
            z = p2.z;
        }

};

int main()
{
    points3D pointA(2,5,9), pointB;
    pointB = pointA;



    cout << "\n\t Prefix Overload of ++ (Point++)\n\n";
    cout << "\t  " << setw(20) << left << "INCREMENTS"
            << setw(10) << left << "POINT X"
            << setw(10) << left << "POINT Y"
            << setw(15) << left << "POINT Z"<< endl;
    cout << "\t----------------------------------------------------------\n";

    string obj[3] = {"Original", "First", "Second"};
    for (int i = 0; i<3; i++)
    {
        cout << "\t  " << setw(20) << left << obj[i]
                << setw(10) << left << pointA.getX()
                << setw(10) << left << pointA.getY()
               << setw(10) << left << pointA.getZ()<< endl;
        cout << "\t----------------------------------------------------------\n";
        pointA++;
    }

    //-- overload

    cout << "\n\t Original : PointB = PointA \n";
    cout << "\n\t Prefix Overload of -- (Point--)\n\n";
     for (int i = 0; i<3; i++)
    {
        cout << "\t  " << setw(20) << left << obj[i]
                << setw(10) << left << pointB.getX()
                << setw(10) << left << pointB.getY()
               << setw(10) << left << pointB.getZ()<< endl;
        cout << "\t----------------------------------------------------------\n";
        pointB--;
    }

    return 0;
}
