#include<stdio.h>
int main()
{
	int id,unit;
	char name;
	float bill,total_amount;
	printf("pls enter customer id");
	scanf("%d",&id);
	printf("enter your name");
	scanf("%s",&name);
	printf("enter total unit consumed");
	scanf("%d",&unit);
	if(unit<=199)
	{
		bill=unit*1.20;
	}
	else if(unit>=200 && unit<400)
	{
		bill=unit*1.50;
	}
	else if(unit>=400 && unit<600)
	{
		bill=unit*1.80;
	}
	else if(unit>=600)
	{
		bill=unit*2.00;
	}
	total_amount=(bill>400)? bill=(bill+(bill*0.15)) :bill;
	if(total_amount<100){
		total_amount=100;
	}
	printf("total amount is:Rs %.2f\n",total_amount);
	return 0;
	
}
