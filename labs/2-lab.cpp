#include <iostream>

using namespace std;


int main()
{
    int n;
    float weight, height, bmi;
    cout << "\n\t\t BMI checker" << endl;
    cout << "\n\t-----------------------------------------------------\n";

    cout << "\n\t Enter the number of people to check bmi: ";
    cin >> n;

    for (int i=1; i<=n; i++)
    {
        cout << "\n\t\t Person " << i << endl;
        cout << "\n\t\t + Enter weight: ";
        cin >> weight;
        cout << "\n\t\t + Enter height: ";
        cin >> height;

        bmi = weight / (height * height);

        if (bmi < 18.5)
            cout << "\n\t\t - - You are underweight";
        else if (bmi > 18.5 && bmi < 24.9)
            cout << "\n\t\t - - Your weight is normal";
        else if (bmi >= 25 && bmi < 29.9)
             cout << "\n\t\t - - You are overweight";
        else if (bmi >= 30 && bmi < 39.9)
             cout << "\n\t\t - - You are obese";
        else
            cout << "\n\t\t - - You are morbidly obese";
        cout << "\n";
    }

    return 0;

}
