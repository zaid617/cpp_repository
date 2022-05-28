#include<iostream>
using namespace std;
int sum(int x, int y)			// function definition
{
int ans;
ans= x+y;
return (ans);				// return value to where the function is called
}

int main(){
int a,b;
int result;

cout<<"enter 1st number to add"<<endl;
cin>>a;
cout<<"enter 2nd number to add"<<endl;
cin>>b;
result = sum(a,b);		      // function call
cout<<"result is="<<result;	     // print result (result having the value of “ ans” of add function) 
return 0;
}

