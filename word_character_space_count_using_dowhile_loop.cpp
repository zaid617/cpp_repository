#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    char str[100];
    int i;
    int words=1,characters=0,space=0;
    cout<<"Please enter the string \n";
    gets(str); //count characters of a string wit out space

    i=0;
    do{
            if(str[i]!=' '){ // check characetrs
                characters++;
            }
             else if(str[i]==' ' || str[i] != '\n' || str[i] != '\t'){ // check words
                words++;
            }
             i++;
    }while(str[i] != '\0');
cout<<"\nTotal words: "<<words; //display total number of words
cout<<"\nTotal characters: "<<characters; //display total number of characters
cout<<"\nSpace: "<<(words-1); //display total number of spaces
getch();
    return 0;
}