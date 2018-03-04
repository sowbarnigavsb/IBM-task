#include <stdio.h>

int main(void) {
	int choice,x,y;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Bill Details\n");
			printf("Post paid\nFor past 1 month your bill amount is Rs.432.00 ");
			break;
		case 2:
			printf("Talk Plan\n");
			printf("Press 1 to know talk times\nPress 2 to know UNLIMITED talk times\n");
			scanf("%d,&x");
			if(x==1)
			printf("Recharge Rs.100 for get 30p/m during day time\nRecharge Rs.200 ,get 10p/m for day&night\n");
			else if(x==2)
			printf("Recharge Rs.300 , get UNLIMITED talk time for 1 month\n");
			break;
		case 3:
			printf("Deals/Discounts\n");
			printf("Recharge Rs.100,get Rs.100\nRecharge Rs.200, get Rs.220\nBoth for voice call\n ");
			break;
		case 4:
			printf("Internet Plans\n");
			printf("Press 1 to know net packs\nPress 2 to know UNLIMITED net packs\n");
			scanf("%d",&y);
			if(y==1)
			printf("Recharge Rs.100 -Get 1GB for 28days\nRecharge Rs.150 -Get 2GB for 56days\n");
			else if(y==2);
			printf("Recharge Rs.350 -GetUNLIMITED internet for 3 months");
			break;
		case 5:
			printf("SMS,Roaming Details\n");
			printf("Recharge Rs.100 -get UNLIMITED SMS & Roaming for 1 month\n");
			break;
		default:
			printf("Invalid Input");
            break;
	}
	// your code goes here
	return 0;
}
