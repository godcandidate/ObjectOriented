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

        //Overloading postfix versions of ++ and --
        void operator ++()
        {
            x++;
            y++;
            z++;
        }

        void operator --()
        {
            x--;
            y--;
            z--;
        }

};

int main()
{
    points3D pointA(2,5,9);

    cout << "\n\t Postfix Overload of ++\n\n";
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
        ++pointA;     //overloading ++
    }
    //-- overload
    points3D pointB(2, 5, 9);
    cout << "\n\t Postfix Overload of --\n\n";
     for (int i = 0; i<3; i++)
    {
        cout << "\t  " << setw(20) << left << obj[i]
                << setw(10) << left << pointB.getX()
                << setw(10) << left << pointB.getY()
               << setw(10) << left << pointB.getZ()<< endl;
        cout << "\t----------------------------------------------------------\n";
        --pointB;      //overloading --
    }

    return 0;
}
