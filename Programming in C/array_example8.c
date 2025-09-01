//Sum of all array elements 
//Accept element from user 
#include<stdio.h>
int main()
{
	int numbers[10],i,j,num,sum=0;
	printf("Enter number of element  ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter element ");
		//i is index and numbers[i] is element
		scanf("%d",&numbers[i]);		
		sum=sum+numbers[i];
	}
	printf("sum = %d",sum);
	for(i=0;i<num;i++)
	{
		printf("\n%d",numbers[i]);
	}
}
	
	
