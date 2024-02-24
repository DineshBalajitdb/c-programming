#include<stdio.h>
void bigger(int firstnumber,int secondnumber)
{
    (firstnumber>secondnumber)?(printf("%d is largest number",firstnumber)):(printf("%d is largest number",secondnumber));
    return ;
}
int main()
{
    int a,b,result;
    printf("Enter the Two number A and B :");
    scanf("%d %d",&a,&b);
    bigger(a,b);
   return 0;
}