#include<stdio.h>
void main()
{
   char string[]="Dinesh Balaji T";
   int count;
   for(count=0;count<strlen(string);count++)
    {
        if(count==0&&string[count]!=' ')
    {
            printf("%c",string[count]);
    }
        else if(count>0&&string[count-1]==' ')
        {
        printf("%c",string[count]);
         }
    }
}