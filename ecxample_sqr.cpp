#include<iostream>
#include<math.h>	
using namespace std;
int main(){
int num,sqroot;
float a,b,c,d;
cout<<"enter number for root "<<endl;
cin>>num;
cout<<"enter values for a & b"<<endl;
cin>>a>>b;
sqroot=sqrt(num);
cout<<"the value of square root is"<<sqroot;
c=a+b/sqroot;
d=(a+b)/sqroot;
cout<<"the results of other operations are"<<c<<endl<<d;

return 0;
}