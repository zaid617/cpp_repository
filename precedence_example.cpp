#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,sqroot,b,c,d,e;
    cout<<"Enter Any Num You Want The Square root";
    cin>>a;
    cout<<"Enter The Value Of A and B";
    cin>>b>>c;
    sqroot = sqrt(a);
    d = b+c/sqroot;
    e = (b+c)/sqroot;
    cout<<"The Answer a+b/square root of a is :"<<d<<endl;
    cout<<"The Answer (a+b)/sqroot is :"<<e;
return 0;
}