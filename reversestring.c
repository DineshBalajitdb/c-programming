#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
void main()
{
    int number=0,count,initialize=0;
    
    char string[]="Hello Definition Multimedia Interface";
    while(string[initialize++]!='\0')
    {
        number++;
        initialize++;
    }
   bool Reading_word=false;
    for(count=0;count<number;count++)
    {
        if(!Reading_word&&isalpha(string[count]))
        {
            printf("%c",string[count]);
            Reading_word=true;
        }
        else if(Reading_word&&!isalpha(string[count]))
        {
            Reading_word=false;
        }
    }
}
