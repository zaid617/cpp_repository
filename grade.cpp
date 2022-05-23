#include<iostream>
using namespace std;
int main(){
    char grade;
   cout<<"Enter your grade: ";
   cin>>grade;
   switch (grade)
   {
   	case 'A':
      		cout<<("Your average must be between 90 - 100");
      		break; 
   	case 'B':
      		printf("Your average must be between 80 - 89");
      		break;
   	case 'C':
      		printf("Your average must be between 70 - 79");
      		break;
   	case 'D':
      		printf("Your average must be between 60 - 69");
      		break;
   	default: 
      		printf("Your average must be below 60");
   }

return 0;
}
