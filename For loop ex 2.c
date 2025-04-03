#include<stdio.h>
void main()
{
	int m,n,no;
	printf("\n Enter m(start):");
	scanf("%d",&m);
	
	printf("\n Enter n(end):");
	scanf("%d",&n);
	
	for(no=m;no<=n;no++)
	{
		if(no%2==0)
		{
			printf(" %d",no);
		}
		
	}
	
	
}
