//accept elements from user
#include<stdio.h>
int main()
{
	
	int numbers[10],i,sum,num_of_element;
	printf("Please enter number of elements ");
	scanf("%d",&num_of_element);
	for(i=0;i<num_of_element;i++)
	{
		printf("Pelase enter [%d] element ",i+1);
		scanf("%d",&numbers[i]);
	}
	//for printing
	for(i=0;i<num_of_element;i++)
	{
	 	printf("\n%d",numbers[i]);
	
	}
}
	
	
	
