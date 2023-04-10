#include <iostream>

using namespace std;

class Student
{
    private:
        int ID;
        string fname;
        float cwa;

    public:
        Student(): ID(0),fname("None"), cwa(0.0)
        {}
        Student(int id, string name, float Cwa): ID(id),fname(name), cwa(Cwa)
        {}
        void getStudentDetails()
        {
            cout << "\n\t----- Student details -------";
            cout << "\n\n\t- Enter ID  : ";
            cin >> ID;
            cout << "\t- Enter Name: ";
            cin >> fname;
            cout << "\t- Enter CWA : ";
            cin >> cwa;
        }
        void display()
        {
            cout << "\n\t----- Student Information -------";
            cout << "\n\t- ID  : " << ID;
            cout << "\n\t- Name: " << fname;
            cout << "\n\t- CWA : " << cwa;
            cout << "\n\t---------------------------------\n\n";
        }
};
int main()
{

// passing object as argument
     cout << "\n\t +++With arguements";
     Student student1(1,"Edward",80.2);
     student1.display();

// passing object with no arguemnt
    cout << "\n\t+++ With no arguements";
    Student student2;

// initializing components to zero when no arg is passed
    student2.display();

// no arguments but receiving inputs
    cout << "\n\t+++ With no arguements, but receiving inputs";
    student2.getStudentDetails();
    student2.display();
    return 0;
}

