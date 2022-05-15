#include<iostream>
using namespace std;
int main(){
    int ,a,b;
    char sign;

    cout<<"Enter The First Number :"<<endl;
    cin>>a;
    cout<<"Enter The Second Number :"<<endl;
    cin>>b;
    cout<<"Enter Which Arthematic Operator You Want To Apply (+,-,*,/) :"<<endl;
    cin>>sign;

   switch (sign)
   {
   case '+':
       cout<<"The sum of "<<a<< "and"<<b <<"is :"<<a+b<<endl;
       break;
    case '-':
       cout<<"The differnce of "<<a<< "and"<<b <<"is :"<<a-b<<endl;
       break;
    case '*':
       cout<<"The product of "<<a<< "and"<<b <<"is :"<<a*b<<endl;
       break;
    case '/':
       cout<<"The division of "<<a<< "and"<<b <<"is :"<<a/b<<endl;
       break;
   
   default:
        cout<<"Enter Valid Arthematic Operator";
       break;
   }

return 0;
}
