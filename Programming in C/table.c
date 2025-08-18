//Multiplication number
#include<stdio.h>
int main()
{
	int i,num,ans;
	printf("Enter number ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{	
		ans = num*i;
		printf("%d * %d = %d\n",num,i,ans);
	}
}
