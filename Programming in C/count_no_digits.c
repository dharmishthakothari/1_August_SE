//Count no of Digits 
#include<stdio.h>
int main()
{
	int num,rem;
	int count=0,sum=0;
	printf("Enter number ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		count++;
		sum=sum+rem;
		
		printf("\n%d",rem);
		num=num/10;
	}
	printf("\n\n\nNo of digits %d",count);
	printf("\n\nSum of Digits is %d",sum);
}
