// Example of table in while loop
#include<stdio.h>
int main()
{
	int mul=1,i=1;
	int num;
	printf("Enter number ");
	scanf("%d",&num);
	while(i<=10)
	{
		
		mul=num*i;
		printf("\n%d * %d = %d",num,i,mul);
		i++;
	}
	
	

}
