
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
void main()
{
	int count=0,number=0,intitilize;
	char string[]="Dinesh Balaji";
	while(string[count]!='\0')
	{
		number++;
		count++;
	}
	bool reading_word=false;
	for(intitilize=0;intitilize<number;intitilize++)
	{
		if(!reading_word&&isalpha(string[intitilize]))
		{
			printf("%c",string[intitilize]);
			reading_word=true;
		}
		else if(reading_word&&!isalpha(string[intitilize]))
		{
			reading_word=false;
		}
	}
}
