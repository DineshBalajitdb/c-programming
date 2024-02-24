#include<stdio.h>
int palindrom(int number)
{
    int checknumber,reversenumber=0,reminder;
    checknumber=number;
    while(number!=0)
    {
        reminder=number%10;
        reversenumber*=10+reminder;
        number/=10;
    }
    return reversenumber;
}
int main()
{
    int userinput;
    printf("Enter the number to check the palindrom : ");
    scanf("%d",&userinput);
    printf("The Given number is %d and The palindrom number is %d ",userinput,palindrom(userinput));
}