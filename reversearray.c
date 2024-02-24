#include<stdio.h>
int reversearray(int array[],int length)
    {
        int Number,count,reminder,reversenumber;
        for(count=0;count<length;count++)
        {
            Number=array[count];

            while(Number!=0)
            {
                reminder=Number%10;
                reversenumber*10+reminder;
                Number/=10;

            }
            array[count]=reversenumber;
        }
        for(count=0;count<length;count++)
        {
            printf("%d",array[count]);
        }
        return ;
    }


void main()
{
    int array[]={42,12,34,65,32,98};
    int number= strlen(array);
    reversearray(array,number);
    return 0;
}
