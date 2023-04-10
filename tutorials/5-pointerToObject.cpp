#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Students
{
    private:
        string fullname;
        int marks;

    public:
        void setName()
        {
            cout << "\n Enter fullname: ";
            cin >> fullname;
        }

        void setMarks()
        {
            cout << "\n Enter marks: ";
            cin >> marks;
        }

        string getName()
        {
            return fullname;
        }

        int getMarks()
        {
            return marks;
        }

};

int main()
{
    Students* student[3];


    //setting the names
    for(int i=0; i<=2; i++)
    {
        student[i] = new Students;
        student[i]->setName();
        student[i]->setMarks();
    }

        //heading
    cout << "\n\t Pointer objects of a class \n\n";
    cout << "\t  " << setw(20) << left << "OBJECTS"
            << setw(10) << left << "NAME"
            << setw(10) << left << "MARKS"<< endl;
    cout << "\t----------------------------------------------------------\n";

    string obj[4] = {"Student 1", "Student 2", "Student 3"};
    for (int i = 0; i<3; i++)
    {
        cout << "\t  " << setw(20) << left << obj[i]
                << setw(10) << left << student[i]->getName()
                << setw(10) << left << student[i]->getMarks()<< endl;
        cout << "\t----------------------------------------------------------\n";
    }


    return 0;
}
