#include <iostream>
#include<stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    char str[100];
    int i;
    int words=1,characters=0,space=0;
    cout<<"Please enter the string \n";
    gets(str);
    i=0;
    while(str[i] != '\0'){
            if(str[i]!=' '){ // check characters
                characters++;
            }
             else if(str[i]==' ' || str[i] != '\n' || str[i] != '\t'){ //check words
                words++;
            }
             i++;
    }
cout<<"\nTotal words: "<<words;//display total number of words
cout<<"\nTotal characters: "<<characters; //display total number of characters
cout<<"\nSpace: "<<(words-1);//display total number of spaces
getch();
    return 0;
}