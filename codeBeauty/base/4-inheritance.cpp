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

class Developer: public Employee
{
    public:
        string favLanguage;
        Developer(string name, string company, int age, string fav)
            :Employee(name, company, age)
        {
            favLanguage = fav;
        }
        void fixBug()
        {
            cout << getName() << " fixed the bug using " << favLanguage << endl;
        }

};

class Teacher: public Employee
{
    private:
        string Subject;

    public:
        Teacher (string name, string company, int age, string subject)
            :Employee(name, company, age)
            {
                Subject = subject;
            }
            void PrepareLesson()
            {
                cout << getName() << " is preparing " << Subject << " lesson" << endl;
            }
};

int main()
{
    Developer d1("Eddie", "Microsoft", 27, "C++");
    Teacher t = Teacher("Jack", "Cool School", 32, "History");
    cout << "\n\n Teachers \n\n";
    t.PrepareLesson();
    t.askForPromotion();
    return 0;
}
