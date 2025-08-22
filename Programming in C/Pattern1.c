//Pattern 1 
/*
 c=1 c=2   c=3     c=4      c=5	
r=1 1
r=2 1	1
r=3 1	1	1
r=4 1	1	1	1
r=5 1	1	1	1	1
*/

#include<stdio.h>
int main()
{	
	int col,row,r;
	printf("Enter no of rows ");
	scanf("%d",&row);
	//for row
	for(r=1;r<=row;r++)
	{
		//for column
		for(col=1;col<=r;col++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

