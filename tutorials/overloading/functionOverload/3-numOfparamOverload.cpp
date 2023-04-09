#include <iostream>

using namespace std;

// function with one float parameter
void display(float var)
{
    cout << "\t+ Float value is " << var << endl;
}

// function with two parameters
void display(string name, int age)
{
   cout << "\t+ Your name is " << name << endl;
   cout << "\t+ Your age  is " << age << endl;
}

// function with three parameters
void display(int id, string name, double cwa)
{
    cout << "\t+ Your ID is " << id << endl;
    cout << "\t+ Your age is " << name << endl;
    cout << "\t+ Your cwa is " << cwa << endl;

}

int main()
{
    int a,b,c;

    cout << "\n\t ----------- Overload of display ----------\n";
    cout << "\n\t - display(99.98)\n";
    display(99.98);

    cout << "\n\n\t - display('Asta',21)\n";
    display("Asta",21);

    cout << "\n\n\t - display(2,'Noblesse',87.2716)\n";
    display(2,"Noblesse",87.2716);

    return 0;
}

