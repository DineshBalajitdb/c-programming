#include<stdio.h>
int multiply();
int main()
{
	int number;
	printf("Enter he number for factorial:");
	scanf("%d",&number);
	multiply(number);
	printf("the Factorial of %d = %d ",number,multiply(number));
	return 0;
}
int multiply(int number)
{
	if(number>=1)
	{
		return number*(multiply(number-1));
	}
	else
	{
		return 1;	
	}

}
                                                                                                         