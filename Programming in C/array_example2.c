#include<stdio.h>
int main()
{
	//declaration of array of 10 
	int numbers[10],i,j;
	
	//initlization 
	for(i=0,j=1;i<10;i++,j++)
	{
		//numbers[i]=i+1;
		numbers[i]=j;
		printf("\n%d",numbers[i]);
	}
//	for(i=0;i<10;i++)
//	{
//		
//		printf("\n%d",numbers[i]);
//	}
}
