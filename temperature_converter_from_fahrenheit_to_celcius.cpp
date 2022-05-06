#include<iostream>
using namespace std;
int main(){
    float F ,temp;
    cout<<"Enter Teperature In Fahrenheit You Want To Convert In Celcius "<<endl;
    cin>>F;
    temp = (F-32) * 5 /9;
    cout<<"The Temperature In Celcius is "<<temp;
return 0;
}