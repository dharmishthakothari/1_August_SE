#include<stdio.h>
int main()
{
		int num,i,j;
		//array of characters name
		char name[10]="INDIA"; 
		//printf("Enter name ");
		//scanf("%s",name);
		
		for(i=0;i<5;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("%c ",name[j]);
			}
			printf("\n");
		}
}
