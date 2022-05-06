#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    char str[100];//declare and initialize char array
    int i;
    int words=1,characters=0,space=0;
    cout<<"Please enter the string \n";
    gets(str);
    for(i=0; str[i] != '\0'; i++){
            if(str[i]!=' '){//check characters
                characters++;
            }
             else if(str[i]==' ' || str[i] != '\n' || str[i] != '\t'){ //check words
                words++;
            }
    }
cout<<"\nTotal words: "<<words;   //display total numbers of words
cout<<"\nTotal characters: "<<characters; //display total numbers of characters
cout<<"\nSpace: "<<(words-1);  ////display total numbers of space
getch();
    return 0;
}