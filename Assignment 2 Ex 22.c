//WAP to print following triangle
//           *
//         * * *
//       * * * * * 
//     * * * * * * *

#include<stdio.h> 
void main()
{   
	int r,c,s;
	
	r=1;
	while(r<=4) 
	{
		s=r;
		while(s<=4)
		{
			printf("  ");
			s++;
		}
	       c=1;
        while(c<=2*r-1)
		{
			printf(" *");
		    c++;
		    
		}
		printf("\n");
		r++;
    }


//2

    r=5;
    while(r>=1)
    {
    	s=0;
    	while(s<=5-r)
    	{
    		printf("  ");
    		s++;
		}
		c=r;
		while(c<=5*2-1)
		{
			printf(" *");
			c++;
		}
		printf("\n");
		--r;
    }


    //3
    r=1;
	while(r<=5)
	{
		s=r;
		while(s<=4)
		{
			printf("  ");
			s++;
		}
		c=1;
		while(c<=r)
		{
			printf(" %d",c);
			c++;
		}
		printf("\n");
		r++;
	}
}







