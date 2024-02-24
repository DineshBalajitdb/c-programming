#include<stdio.h>
int main()
{
    int count,sum=0;
    int array[5];
    printf("Enter the 5 array :");
    for(count=0;count<5;count++)
    {
        scanf("%d",&array[count]);
         sum=sum+array[count];
    }
    printf("The sum of Array is :%d",sum);
    
}