#include <iostream>
using namespace std;

// models employee database using inheritance


class Employee
{
    private:
        string name;
        unsigned long number;

    public:
        void getdata()
        {
            cout << "\n\t + Enter firstname: ";
            cin >> name;
            cout << "\n\t + Enter mobile   : ";
            cin >> number;
        }
        void putdata() const
        {
            cout << "\n\t + Name   : " << name << endl;
            cout << "\n\t + Mobile : " << number << endl;
        }
};

class Manager: public Employee
{
    private:
        string title;
        double dues;

    public:
        void getdata()
        {
            Employee::getdata();
            cout << "\n\t - Enter title    : ";
            cin >> title;
            cout << "\n\t - Enter dues  GHc: ";
            cin >> dues;
        }
        void putdata() const
        {
            Employee::putdata();
            cout << "\n\t - Title  : " << title << endl;
            cout << "\n\t - Dues   : " << dues << endl;
        }
};

class Scientist: public Employee
{
    private:
        int pubs; // number of publications

    public:
        void getdata()
        {
            Employee::getdata();
            cout << "\n\t - Enter publication : ";
            cin >> pubs;
        }
        void putdata() const
        {
            Employee::putdata();
            cout << "\n\t - Publications: " << pubs << endl;
        }
};

class Labourer: public Employee
{

};

void heading(string header)
{
    cout << "\n\t\t " << header;
    cout << "\n\t -----------------------------------------\n";
}

int main()
{
    Manager m1, m2;
    Scientist s1;
    Labourer l1;

    cout <<"\t\t\t EMPLOYEES INFO \n";
    heading("Manager 1");
    m1.getdata();
    heading("Manager 2");
    m2.getdata();
    heading("Scientist 1");
    s1.getdata();
    heading("Laborer 1");
    l1.getdata();

    system("cls");
    cout <<"\t\t\t EMPLOYEES DETAILS \n";
    heading("Manager 1");
    m1.putdata();
    heading("Manager 2");
    m2.putdata();
    heading("Scientist 1");
    s1.putdata();
    heading("Laborer 1");
    l1.putdata();


    return 0;
}
