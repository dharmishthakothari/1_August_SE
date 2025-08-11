#include<stdio.h>
int main()
{
	//declaring and initilizing 2 variables
	int a=100;
	int b=2;
	//accept input from user .
	printf("Enter number 1 ");
	scanf("%d",&a);
	printf("Enter number 2 ");
	scanf("%d",&b);
	
	
	//arithmatic operators
	printf("\n addition %d",a+b);
	printf("\n sub %d ",a-b);
	printf("\n mul %d ",a*b);
	printf("\n divi %d ",a/b);
	printf("\n mod %d ",a%b);
	
	//relational operators 
	
	printf("\n a>b = %d ",a>b);
	printf("\n a<b = %d ",a<b);
	printf("\n a>=b = %d ",a>=b);
	printf("\n a<=b = %d ",a<=b);
	printf("\n a!=b = %d ",a!=b);
	
	//logical operators 
	//a>b and a>100
	printf("\n a>b && a>100 = %d",(a>b && a>100));
	printf("\n a>b || a>100 = %d ",(a>b || a>100));
	printf("\n !(a>b && a>100) = %d ",!(a>b && a>100));
	
	//Assignment operators 
//	a=a+5;
//	a+=5;
	printf("\n a+=100  = %d ",a+=100);
	printf("\n a-=100  = %d ",a-=100);
	printf("\n a*=100  = %d ",a*=100);
	printf("\n a/=100  = %d ",a/=100);
	
}
