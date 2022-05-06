#include<iostream>
using namespace std;
int main(){
    int num,limit;
    
    cout<<"Enter which number table do you want to print :";
    cin>>num;
    cout<<"Enter the limit of your table do you want to print :";
    cin>>limit;

    for (int i=0; i <= limit; i=i+num)
    {
       cout<<i<<endl;
    }
    

return 0;
}