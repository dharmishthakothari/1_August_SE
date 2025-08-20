// Example of while prints 1-10 numbers
#include<stdio.h>
int main()
{
	int i=1;
	
	while(i>1)
	{
		printf("%d",i);
		i++;
		//i=i+1
	}
	i=1;
	do
	{
		printf("\n%d",i);
		i++;
	}while(i==1);
}
