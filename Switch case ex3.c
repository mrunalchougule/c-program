/* WAP to calcualte ticket fare amount for the following choice of vehicles

 1. Ac Vehicle (Rs.12 Per Km)
 2. Private Vehicle (Rs.8 per Km)
 3. Reservation (Rs.5 per km)
 4. Local Vehicle (Rs.2 per km)  
 
 Input departure and arrival city name, distance. calcualte and show ticket to user.
 */
 
#include<stdio.h>
void main()
{
	char city1[20];
	char city2[20];
	int distance, choice;
	int ticketCost;
	
	printf("\n Enter City From :");
	scanf("%s",&city1);
	
	printf("\n Enter City To :");
	scanf("%s",&city2);
	
	printf("\n Enter distance :");
	scanf("%d",&distance);								
	
	printf("\n 1. Ac Vehicle");
	printf("\n 2. Private Vehicle");
	printf("\n 3. Reservation");
	printf("\n 4. Local Vehicle");
	
	printf("\n Enter choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\n You selected Ac Vehicle (Rs.12 Per Km)");
			ticketCost = distance*12;
			break;
			
		case 2:
			printf("\n You selected Private Vehicle (Rs.8 Per Km)");
			ticketCost = distance*8;
			break;
			
		case 3:
			printf("\n You selected Reservation (Rs.5 Per Km)");
			ticketCost = distance*5;
			break;
			
		case 4:
			printf("\n You selected Local Vehilce (Rs.2 per Km)");
			ticketCost = distance*2;
			break;
			
		default:
			printf("\n Invalid Choice !");
	}
		
		printf("\n **************** Ticket ****************");
	printf("\n Departure City :%s",city1);
	printf("\n Arrival City :%s",city2);
	printf("\n Distannce : %d Km",distance);
	printf("\n Ticket Cost = Rs.%d",ticketCost);
	printf("\n ------------ Happy Journey ---------------");
}
 
 

   	
			
			
			
