#include <iostream>

using namespace std;

// function with integer parameter
int absolute(int var)
{
    if ( var < 0)
        var = -var;
    return var;
}

// function with float parameter
float absolute(float var)
{
    if (var < 0.0)
        var = -var;
    return var;
}

int main()
{
    int a;
    float b;

    cout << "\n\t ----------- Absolute of Variables ----------\n";
    cout << "\n\t - Enter integer value: ";
    cin >> a;
    cout << "\n\t + Absolute of " << a << " is " << absolute(a);
    cout << "\n\n\n\t - Enter float value: ";
    cin >> b;
    cout << "\n\t + Absolute of " << b << " is " << absolute(b) << endl;

    return 0;
}
