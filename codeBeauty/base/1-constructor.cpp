#include <iostream>
#include <string>

using namespace std;
// model class for employee
class Employee
{
    public:
        string Name;
        string Company;
        int Age;

        // constructor
        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }

        void IntroduceYourself()
        {
            cout << "Name    : " << Name << endl;
            cout << "Company : " << Company << endl;
            cout << "Age     : " << Age << endl;
        }

};

int main()
{
    Employee employee1 = Employee("Eddie", "YT-CodeBeauty", 25);
    Employee employee2("Noblesse", "Microsoft", 32);

    cout << "-- Employee 1\n\n";
    employee1.IntroduceYourself();
    cout << "\n-- Employee 2\n\n";
    employee2.IntroduceYourself();


    return 0;
}
