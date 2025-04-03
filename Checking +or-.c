#include<stdio.h>
void main()
{
	int no1,no2;
	
	printf("\n Enter value of no1:");
	scanf("%d",&no1);
	
	printf("\n Enter value of no2:");
	scanf("%d",&no2);
	
	if(no1>no2)
	{
		printf("\n no1 is mximum:");
	}
	else if(no2>no1)
	{
		printf("\n no2 is maximum:");
	}
	else if(no1==no2)
	{
		printf("\n Numbers are equal:");
	}
}
