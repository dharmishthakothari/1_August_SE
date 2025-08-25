/*
1	1	1	1	1
2	2	2	2
3	3	3
4	4
5
*/
#include<stdio.h>
int main()
{
		int num,i,j;
		printf("Enter number of row ");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{
			for(j=num;j>=i;j--)
			{
				printf("%d ",i);
			}
			printf("\n");
		}
		
}
