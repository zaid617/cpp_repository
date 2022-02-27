#include <iostream>
using namespace std;
int main()
{
    string arr[6];
    int a, b;

    cout << "Enter Your Name: " << endl;
    cin >> arr[0];
    cout << " Enter Your Father Name: " << endl;
    cin >> arr[1];
    cout << "Enter Your Age: " << endl;
    cin >> b;
    cout << "Enter Your Email: " << endl;
    cin >> arr[2];
    cout << "Enter Your Number: " << endl;
    cin >> a;
    cout << "Enter Your School Name: " << endl;
    cin >> arr[3];
    cout << "Enter Your College Name: " << endl;
    cin >> arr[4];
    cout << "Enter Your Unversity Name: " << endl;
    cin >> arr[5];
    cout << "\t\t****BIO DATA****" << endl
         << endl;
    cout << "NAME:\t\t " << arr[0] << endl;
    cout << "FATHER NAME:\t " << arr[1] << endl;
    cout << "AGE:\t\t " << b << endl;
    cout << "Email:\t\t " << arr[2] << endl;
    cout << "Contact:\t\t " << b << endl;
    cout << "Schoool:\t\t " << arr[3] << endl;
    cout << "College:\t\t " << arr[4] << endl;
    cout << "University:\t\t " << arr[5] << endl;
    cout << "\t\t\t*****" << endl;
    return 0;
}