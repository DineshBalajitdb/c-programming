int factorial(int Number)
{
   if(Number==0)
   {
    return 1;
   }
   else{
    return Number*factorial(Number-1);
   }
    
}
int main()
{
	int number;
	printf("Enter the number of factorial :");
	scanf("%d",&number);
	printf("factorial of %d = %d",number,factorial(number));

}
