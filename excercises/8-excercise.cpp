#include <iostream>
#include <string>
using namespace std;

//Classes definitions
class Publication
{
    private:
        string title;
        float price;
    public:
        void setdata()
        {
            cout << "\n\t + Enter title   : ";
            cin >> title;
            cout << "\n\t + Enter price   : GHc";
            cin >> price;
        }
        void getdata()
        {
            cout << "\n\t + Title    : " << title;
            cout << "\n\t + Price    : GHc" << price;
        }
};

class Book : public Publication
{
    private:
        int pageCount;
    public:
        void setdata()
        {
            Publication::setdata();
            cout << "\n\t - Enter pageCount : ";
            cin >> pageCount;
        }
        void getdata()
        {
            Publication::getdata();
            cout << "\n\t - PageCount : " << pageCount;
        }
};

class Tape : Publication
{
    private:
        float playTime;
    public:
        void setdata()
        {
            Publication::setdata();
            cout << "\n\t Enter playTime : ";
            cin >> playTime;
        }
        void getdata()
        {
            Publication::getdata();
            cout << "\n\t - PlayTime : " << playTime << "mins\n" << endl;
        }
};


int main()
{
    Book book;
    Tape tape;

    cout << "\t\t PUBLICATION\n";
    cout << "\t______________________________________________\n\n";
    cout << "\n\t Book details \n";
    book.setdata();
    cout << "\n\t_____________________\n";
    cout << "\n\t Tape details \n";
    tape.setdata();

    cout << "\t______________________________________________\n\n";
    cout << "\n\t Book details \n";
    book.getdata();
    cout << "\n\t_____________________\n";
    cout << "\n\t Tape details \n";
    tape.getdata();

    return 0;
}

