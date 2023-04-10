#include <iostream>
#include <string>

using namespace std;
// model class for employee

class AbstractEmployee
{
    virtual void askForPromotion() = 0; //pure virtual function
};
class Employee: AbstractEmployee
{
    private:
        string Name;
        string Company;
        int Age;

    public:
        // constructor
        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }

        //setter
        void setName(string name)
        {
            Name = name;
        }
        void setCompany(string company)
        {
            Company = company;
        }
        void setAge(int age)
        {
            if (age >= 18)
                Age = age;
        }
        //getter
        string getName()
        {
            return Name;
        }
        string getCompany()
        {
            return Name;
        }
        int getAge()
        {
            return Age;
        }
        void IntroduceYourself()
        {
            cout << "Name    : " << Name << endl;
            cout << "Company : " << Company << endl;
            cout << "Age     : " << Age << endl;
        }
        void askForPromotion()
        {
            if (Age > 30)
                cout << Name << " - got promoted!" << endl;
            else
                cout << Name << " - sorry No  promotion for you!" << endl;
        }

};

int main()
{
    Employee employee1 = Employee("Eddie", "YT-CodeBeauty", 25);
    Employee employee2("Noblesse", "Microsoft", 32);

    cout << "-- Promotion status \n\n";
    employee1.askForPromotion();
    employee2.askForPromotion();

    return 0;
}
