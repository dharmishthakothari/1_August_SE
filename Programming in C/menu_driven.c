//Menu driven program 1. Addition 2.Substraction 3.Multilication
#include<stdio.h>
int main()
{
	int choice,number1,number2,ans;
	//bool val=true;
	while(1)
	{
	
		printf("\n 1. Addition \n 2. Subtraction \n 3. Multilication \n 4. Division \n 5. Exit");
		printf("\nEnter your choice ");
		scanf("%d",&choice);
		if(choice==5)
			break;
		printf("\nPlease enter 2 numbers ");
		scanf("%d%d",&number1,&number2);
	
		switch(choice)
		{
			case 1:printf("Addition = %d",number1+number2);
					break;
			case 2: printf("Subtraction = %d",number1-number2);
					break;
			case 3: printf("Multilication = %d",number1*number2);
					break;
			case 4:printf("Division = %d",number1/number2);
					break;
			case 5: break;
			default : printf("\nPlease select valid choice \n");
				
		}
	}
}
