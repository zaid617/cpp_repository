#include <iostream> //header files
using namespace std;
int main()
{
    int abc[5]; //initialling and declaration of variables
    int i;
    int sum = 0;
    float avg;
    int a = 0;
    for (i = 1; i < 6; i++) //for loop
    {
        cout << "enter " << ++a << " number" << endl;
        cin >> abc[i];
        sum += abc[i]; //sum of all numbers
    }
    cout << "sum = " << sum <<endl;
     avg = sum / 5;          //average of all numbers
    cout << "avg =" << avg <<endl;
}
