#include <iostream>

using namespace std;

void sumToN(int n)
{
    int nsum = 0;
    cout << "\n\n\t ";
    if (n == 1)
    {
        cout << "Sum: 1" << endl;
        return;
    }
    for (int i=1; i<n; i++)
    {
        nsum += i;
        if (i != n-1)
            cout << i << " + ";
        else
             cout << i << " = " << nsum << endl;
    }
}

void centTofeet(float cent)
{
    float cfeet;
    cfeet = cent * 0.0328084;
    cout << "\n\t Height: " << cfeet << " feet" << endl;
}

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);

}

int main()
{
    int n;
    float cent;
    cout << "\n\t\t Sum of the first n natural numbers" << endl;
    cout << "\n\t-----------------------------------------------------\n";
    cout << "\n\t Enter the natural number: ";
    cin >> n;
    sumToN(n);

    cout << "\n\t\t Centimeters to feet" << endl;
    cout << "\n\t-----------------------------------------------------\n";
    cout << "\n\t Enter height in centimeters: ";
    cin >> cent;
    centTofeet(cent);

    cout << "\n\t\t nth Fibonacci generator" << endl;
    cout << "\n\t-----------------------------------------------------\n";
    cout << "\n\t Enter the position: ";
    cin >> n;
    cout << "\n\t "<< n <<"th term in the series:  "<< fibonacci(n) << endl;

    return 0;
}

