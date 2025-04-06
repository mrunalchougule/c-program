#include<stdio.h>

void main()
{
	int no1,no2;
	int choice;
	
	printf("\n Enter number 1 :");
	scanf("%d",&no1); //3
	
	printf("\n Enter number 2 :");
	scanf("%d",&no2); //9
	
	printf("\n 1. Addition");
	printf("\n 2. Subtraction");
	printf("\n 3. Multiplication");
	printf("\n 4. Division");
	
	printf("\n Enter choice :");
	scanf("%d",&choice);

     switch(choice)
	{
		case 1:
			printf("\n Addition = %d",(no1 + no2));
			break;
		case 2:
			printf("\n Subtraction = %d",(no1 - no2));
			break;
		case 3:
			printf("\n Multiplication = %d",(no1 * no2));
			break;
        case 4:
			printf("\n Division = %.2f",(no1/no2));
			break;
			
		default:
			printf("\n Invalid Choice!");
	}
}





