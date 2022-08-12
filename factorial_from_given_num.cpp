#include <iostream>
using namespace std;
int main()
{
    int fact;
    float result;
    result = 1.0;
    cout << "Enter the number you want the factorial ";
    cin >> fact;

    if (fact < 0)
    {
        cout << "Enter a positive integer";
    }
    else
    {
        for (int i = 1; i <= fact; ++i)
        {
            result *= i;
        }
        cout << "The factorial of " << fact << " is " << result;
    }

    return 0;
}