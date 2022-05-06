#include<iostream>
using namespace std;
int main(){
    int increment;
    int salary;

    cout<<"Enter your current salary :"<<endl;
    cin>>salary;

    cout<<"Enter your overtime hours :"<<endl;
    cin>>increment;
    
    if (increment>=5)
    {
        cout<<"You Got Increment Of 10%"<<endl;
        cout<<"Your New Salary With The Increment Of 10% Is"<<salary*0.1<<endl;
    }
    else if (increment>=4)
    {
        cout<<"You Got Increment Of 7%"<<endl;
        cout<<"Your New Salary With The Increment Of 7% Is"<<(salary/100)*7<<endl;
    }
    else if (increment>=2)
    {
        cout<<"You Got Increment Of 5%"<<endl;
        cout<<"Your New Salary With The Increment Of 5% Is"<<(salary/100)*5<<endl;
    }
    else{
        cout<<"You Got No Increment"<<endl;
    }
 
return 0;
}