// product detail bill
#include<stdio.h>
#include<conio.h>
void main()
{
	int rate,qty,amount,dis,bill,gst,net;
	clrscr();
	printf("Enter the Product rate:");
	scanf("%d",&rate);
	printf("Enter the Product Quntity:");
	scanf("%d",&qty);
	amount = rate * qty;
	dis = amount*0.05;
	bill = amount -dis;
	gst = bill*0.18;
	net = bill + gst;
	printf("rate\tQuntity\tAmount\tDiscount	Bill Amount	Gst	Net Bill");
	printf("\n%d \t%d \t%d\t%d  	\t%d  	\t%d  \t%d",rate,qty,amount,dis,bill,gst,net);
	getch();
}