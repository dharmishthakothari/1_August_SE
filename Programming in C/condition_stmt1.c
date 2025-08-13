// Conditional stmt if else if
#include<stdio.h>
main()
{
	//a is postive negative or zero
	int a;
	printf("Enter value ");
	//scanf function ,digit (%d) , address of a 
	scanf("%d",&a);
	
	if(a>0)
	{
		printf(" %d is postive ",a);
	}else if(a<0)
	{
		printf("%d is negative",a);
	}
	else if(a==0)
	{
		printf("%d is zero",a);
	}
	else
	{
		printf(" %d Invalid input ",a);
	}
}
