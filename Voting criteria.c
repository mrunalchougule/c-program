#include<stdio.h>
int main()
{
	int age;
	
	printf("\n Enter age of person:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n you are eligible for voting:");
		
	}
	else if(age<18)
	{
		printf("\n you can not eligible for voting:");
	}
}
