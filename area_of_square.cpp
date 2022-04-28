#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    float d,e, pi=	3.14159265358979323846;
    cout<<"Find Area Of Square"<<endl;
    cout<<"Enter The Length Of Any Side Of Square "<<endl;
    cin>>a;
    b= a*a;
    cout<<"Area Of The Square Is:"<<b<<endl;
    cout<<"\t\t\t******";
    cout<<"Find Area Of Circle******"<<endl;
    cout<<"Enter The Radius Of A Circle "<<endl;
    cin>>c;
    d= pi*(c*c);
    cout<<"Area Of The Circle Is:"<<d<<endl;
    e=2*pi*c;
    cout<<"Circumference Of The Circle Is:"<<e<<endl;

return 0;
}