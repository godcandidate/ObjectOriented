#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Items
{
    private:
        string type;
        string color;

    public:
        //No argument Constructor
        Items(): type("Null"), color("Null")
        {}
        //Two argument Constructor
        Items(string t, string c): type(t), color(c)
        {}
        //Methods
        string getType()
        {
           return type;
        }
        string getColor()
        {
           return color;
        }
};


int main()
{
    string t[3], c[3];
    Items apple("Fruit", "Red"); //two-arg constructor
    //Items orange(apple);         //one-arg constructor copying apple
    Items orange;
    Items book = orange;         //also one-arg constructor coping orange


    // Apple
    t[0] = apple.getType();
    c[0] = apple.getColor();

    // Orange
    t[1] = orange.getType();
    c[1] = orange.getColor();

    //Book
    t[2] = book.getType();
    c[2] = book.getColor();

    cout << "\n\t Default copy constructor of a objects \n\n";
    cout << "\t  " << setw(10) << left << "OBJECTS"
            << setw(10) << left << "TYPE"
            << setw(10) << left << "COLOR"<< endl;
    cout << "\t----------------------------------------------------------\n";

    string obj[3] = {"Apple", "Orange","Book"};

    for (int i = 0; i<3; i++)
    {
        cout << "\t  " << setw(10) << left << obj[i]
                << setw(10) << left << t[i]
                << setw(10) << left << c[i]<< endl;
        cout << "\t----------------------------------------------------------\n";
    }

    return 0;
}

