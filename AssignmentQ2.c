#include<stdio.h>
void main()
{
	int marks,chem,phy,maths,eng,roll_no;
	char name[10];
	float average;
	
	printf("\n Enter name of student:");
	scanf("%s",&name);
	
	printf("\n Enter roll no of student:");
	scanf("%d",&roll_no);
	
	printf("\n Enter phy marks:");
	scanf("%d",&phy);
	
	printf("\n Enter chem marks:");
	scanf("%d",&chem);
	
	printf("\n Enter maths marks:");
	scanf("%d",&maths);
	
	printf("\n Enter eng marks:");
	scanf("%d",&eng);
	
	average=(phy+chem+maths+eng)/4.0;
	
	printf("\n name=%s \t roll no=%d \t phy=%d \t chem=%d \t maths=%d \t eng=%d",name,roll_no,phy,chem,maths,eng);

    printf("\n average=%.2f",average);
}
