#include <iostream>
using namespace std;

int main() {
 char c;                        //declearing a variable c
 cout << "Enter a character: "; //print messenge for user
 cin >> c;                      //taking input from user
 cout << "ASCII Value of " << c << " is " << int(c);  // checking the value of c in ASCII code and print
 return 0;
}