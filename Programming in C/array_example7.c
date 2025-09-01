#include<stdio.h>
int main()
{
	int num;
	printf("Enter no of element ");
	scanf("%d",&num);
	int numbers[num],i,j;
	
	for(i=0;i<num;i++)
	{
		printf("Enter element ");
		scanf("%d",&numbers[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("\t%d",numbers[i]);
	}
}
