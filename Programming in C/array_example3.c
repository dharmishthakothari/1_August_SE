#include<stdio.h>
int main()
{
	//declaration of array of 10 
	int numbers[10],i,j;
	
	//initlization 
	for(i=0,j=10;i<10;i++)
	{
		//numbers[i]=i+1;
		numbers[i]=j;
		j=j+10;
		printf("\n%d",numbers[i]);
	}

}
