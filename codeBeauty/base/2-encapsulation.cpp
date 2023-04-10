class Employee
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

};

int main()
{
    Employee employee1 = Employee("Eddie", "YT-CodeBeauty", 25);
    Employee employee2("Noblesse", "Microsoft", 32);

    cout << "-- Employee 1\n\n";
    employee1.IntroduceYourself();
    cout << "\n-- Employee 2\n\n";
    employee2.IntroduceYourself();

    cout << "\n\n setting age of Employee1 to 20\n";
    employee1.setAge(20);

    cout << "-- Employee 1\n\n";
    employee1.IntroduceYourself();
    return 0;
}
