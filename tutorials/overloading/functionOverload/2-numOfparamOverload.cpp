#include <iostream>

using namespace std;

// function with one integer parameter
int power(int var)
{
    return (var * var);
}

// function with two integer parameters
int power(int var, int n)
{
    int result = 1;
    for (int i=0; i<n; i++)
    {
        result *= var;
    }
    return result;
}

int main()
{
    int a,b,c;

    cout << "\n\t ----------- Power of Variables ----------\n";
    cout << "\n\t - Enter integer value: ";
    cin >> a;
    cout << "\n\t + Square of " << a << " is " << power(a);
    cout << "\n\n\n\t - Enter integer value and power separated by space : ";
    cin >> b >> c;
    cout << "\n\t + Power of (" << b << ", "<< c << ") is " << power(b,c) << endl;

    return 0;
}
