#include<iostream>
using namespace std;
int main(){
    int fact,i;
    float result;
    i=1;
    result=1.0;
    cout<<"Enter the number you want the factorial ";
    cin>>fact;

   
        while ( i <= fact)
        {
              result *= i;
              ++i;
        }
              cout<<"The factorial of "<<fact <<" is "<<result;

    
return 0;
}