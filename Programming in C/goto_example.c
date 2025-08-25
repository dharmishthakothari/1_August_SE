//goto 

#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i==5)
		{
			goto test;
		}
		printf("%d",i);
	}
	//label bye
	bye:
		printf("Bye Bye ");
	
	test:
		printf("Have a great day!!!");
}
