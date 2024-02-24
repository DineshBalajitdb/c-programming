#include<stdio.h>
void quicksort(int number[],int first,int last){
   int start , end, pivot, temp;
   if(first<last){
      pivot=first;
      start =first;
      end=last;
      while(start <end){
         while(number[start ]<=number[pivot])
         start ++;
         while(number[end]>number[pivot])
         end--;
         if(start <end){
            temp=number[start ];
            number[start ]=number[end];
            number[end]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[end];
      number[end]=temp;
      quicksort(number,first,end-1); 
      quicksort(number,end+1,last);
    }
}
int main(){
   int initialize , count, number[25];
   printf("Enter the number of elements: ");
   scanf("%d",&count);
   printf("Enter %d elements: ", count);
   for(initialize =0;initialize<count;initialize++)
   scanf("%d",&number[initialize]);
   quicksort(number,0,count-1);
   printf("Order of Sorted elements: ");
   for(initialize =0;initialize <count;initialize ++)
   printf(" %d",number[initialize ]);
   return 0;
}