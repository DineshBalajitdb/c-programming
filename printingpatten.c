#include<stdio.h>
void main()
{
    int outerloop,innerloop;
    for(outerloop=1;outerloop<=5;outerloop++)
    {
        for(innerloop=1;innerloop<=outerloop;innerloop++)
        {
            printf("*");

        }
        printf("\n");
    }
    for(outerloop=1;outerloop<=5;outerloop)
    {
        for(innerloop=5;innerloop>=outerloop;innerloop--)
        {
            printf("*");
        }
        printf("\n");
    }
}