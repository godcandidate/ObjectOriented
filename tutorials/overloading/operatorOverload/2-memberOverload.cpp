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

        //Overloading postfix versions of ++, --
        //passing overload to a new object
        points3D operator ++()
        {
            x++;
            y++;
            z++;
            return *this; //return altered value
        }

        points3D operator --()
        {
            x--;
            y--;
            z--;
            return *this;
        }

};

int main()
{
    points3D pointA(2,5,9), pointB, pointC, pointAC(2, 5, 9);


    int x[3], y[3], z[3];
    x[0] = pointA.getX();
    y[0] = pointA.getY();
    z[0] = pointA.getZ();

    pointB = ++pointA;
    x[1] = pointB.getX();
    y[1] = pointB.getY();
    z[1] = pointB.getZ();

    pointC = --pointAC;
    x[2] = pointC.getX();
    y[2] = pointC.getY();
    z[2] = pointC.getZ();


    cout << "\n\t Postfix Overload of ++ and -- (return it to a new object) \n\n";
    cout << "\t  " << setw(20) << left << "OBJECTS"
            << setw(10) << left << "POINT X"
            << setw(10) << left << "POINT Y"
            << setw(15) << left << "POINT Z"<< endl;
    cout << "\t----------------------------------------------------------\n";

    string obj[3] = {"PointA", "PointB(++PointA)", "PointC(--PointA)"};
    for (int i = 0; i<3; i++)
    {
        cout << "\t  " << setw(20) << left << obj[i]
                << setw(10) << left << x[i]
                << setw(10) << left << y[i]
               << setw(10) << left << z[i] << endl;
        cout << "\t----------------------------------------------------------\n";
        ++pointA;
    }


    return 0;
}
