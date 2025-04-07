#include<stdio.h>
void main()
{

    int marks,maths,eng,sci,roll_no;
	char name[10];
	float total;
	
	printf("\n Enter name of student:");
	scanf("%s",&name);
	
	printf("\n Enter roll no of student:");
	scanf("%d",&roll_no);
	
	printf("\n Enter science marks:");
	scanf("%d",&sci);
	
	printf("\n Enter english marks:");
	scanf("%d",&eng);
	
	printf("\n Enter maths marks:");
	scanf("%d",&maths);
	
	total=sci+eng+maths;
	printf("\n Total marks=%2f",total);
	
}
