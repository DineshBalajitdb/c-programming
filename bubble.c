#include<stdio.h>
#include<stdbool.h>
int bubble(int array[],int number)
{
    
    for(int outer_loop=0;outer_loop<number-1;outer_loop++)
    {
        bool swaping=false;
        for(int inner_loop=0;inner_loop<number-outer_loop-1;inner_loop++)
        if(array[inner_loop]>array[inner_loop+1])
        {
            int temp =array[inner_loop];
            array[inner_loop]=array[inner_loop+1];
            array[inner_loop+1]=temp;
            swaping=true;
        }
        if(swaping==false)
        {
            break;
        }
    }
    return array;

}
int main()
{
    int array[]={3,21,2,1,23,12,12};
    int number=7;
    bubble(array,number);
    for(int count=0;count<number;count++)
    {
        printf("%d\n",array[count]);
    }
    return 0;

}