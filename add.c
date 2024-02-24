#include<stdio.h>
int add(int first,int second)
{
    return first+second;
}

int main()
{
    int number1,number2,result;
    printf("Enter the Numbers to add : ");
    scanf("%d %d",&number1,&number2);
    result=add(number1,number2);
    printf("the Added Number is %d : ",result);

    
}