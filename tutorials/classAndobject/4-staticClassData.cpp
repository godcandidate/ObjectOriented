#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Foo
{
    private:
        static int ncount;

    public:
        Foo()
        {
            ncount++;
        }
        //Methods
        int getCount()
        {
           return ncount;
        }
};

int Foo::ncount = 0;

int main()
{
    int c[4];
    Foo obj1;
    c[0] = obj1.getCount();

    Foo obj2;
    c[1] = obj2.getCount();
    Foo obj3;
    c[2] = obj3.getCount();
    Foo obj4;
    c[3] = obj4.getCount();


    // get count for various objects
    cout << "\n\t Static variable count of a class \n\n";
    cout << "\t  " << setw(15) << left << "OBJECTS"
            << setw(10) << left << "COUNT" << endl;
    cout << "\t----------------------------------------------------------\n";

    string obj[4] = {"Object A", "Object B","Object C", "Object D"};

    for (int i = 0; i<4; i++)
    {
        cout << "\t  " << setw(15) << left << obj[i]
                << setw(10) << left << c[i]<< endl;
        cout << "\t----------------------------------------------------------\n";
    }

    return 0;
}


