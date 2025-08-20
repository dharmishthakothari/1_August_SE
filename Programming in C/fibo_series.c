//Fibonacci series 
#include<stdio.h>
int main()
{
	int num,i,next=1,pre=0,sum;
	printf("Enter number of series you want ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		if(i==0)
		{
//			pre = 0;
//			next =1;
			sum=0;
		}
		else{
			pre = next;
			next =sum;
			sum=pre+next;
		}
		printf("%d\t",sum);
	}
}
