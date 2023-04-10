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

        void IntroduceYourself()
        {
            cout << "Name    : " << Name << endl;
            cout << "Company : " << Company << endl;
            cout << "Age     : " << Age << endl;
        }

};

int main()
{
    Employee employee1;  //
    employee1.Name = "Eddie";
    employee1.Company = "YT-CodeBeauty";
    employee1.Age = 25;

    Employee employee2;  //
    employee2.Name = "Noblesse";
    employee2.Company = "Microsoft";
    employee2.Age = 32;

    cout << "-- Employee 1\n\n";
    employee1.IntroduceYourself();
    cout << "\n-- Employee 2\n\n";
    employee2.IntroduceYourself();


    return 0;
}
