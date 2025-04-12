#include<stdio.h>
void main()
{
	int roll_no,marks;
	char name[20];
	long phone;
	
	printf("Enter roll number of student:");
	scanf("%d",&roll_no);
	
	printf("\n Enter name of student:");
	scanf("%s",&name);
	
	printf("\n Enter marks of student:");
	scanf("%d",&marks);
	
	printf("\n Enter phone no student:");
	scanf("%ld",&phone);
	
	printf("\n roll number=%d \t name=%s \t marks=%d \t phone=%ld",roll_no,name,marks,phone);
	

}
