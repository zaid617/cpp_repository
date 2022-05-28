#include<iostream>
using namespace std;
double sum(double a , double b){
    double ans;
    ans = a+b;
}
int main(){
    double a,b,result;
    cout<<"Enter 5-digit number";
    cin>>a;
    cout<<"Enter another 5-digit number";
    cin>>b;
    result=sum(a,b);
    cout<<result;
return 0;
}