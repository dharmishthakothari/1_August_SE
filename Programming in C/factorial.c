//factorial number
#include<stdio.h>
int main()
{
	int i,num,fact=1;
	printf("Enter number ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		printf("%d\n",i);
		//iteration = 1 fact=1 i=1 fact=1*1 
		//iteration = 2 fact=1 i=2 fact=1*2 fact=2
		//iteration = 3 fact=2 i=3 fact=2*3 fact=6
		//iteration = 4 fact=6 i=4 fact=6*4 fact=24
		//iteration = 5 fact=24 i=5 fact=24*5 fact=120
		
		
		fact=fact*i;		
	}
	printf("Factorial of %d is %d ",num,fact);
}
