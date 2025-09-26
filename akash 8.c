#include<stdio.h>
#include<stdlib.h>
int main()
{
	float num1,num2,reasult;
	printf("enter two number");
	char operater;
	scanf("%d%d",&num1,&num2);
	printf("enter oprater(+,-,*,/)");
	scanf("%c",&operater);
	switch(operater)
	{
		case '+':
			reasult=num1+num2;
			printf("reasult is:%.2f\n",reasult);
			break;
		case '-':
			reasult=num1-num2;
			printf("reasult is:%.2f\n",reasult);
			break;
		case '*':
			reasult=num1*num2;
			printf("reasult is:%.2f\n",reasult);
			break;
		case '/':
			reasult=num1/num2;
			printf("reasult is:%.2f\n",reasult);
			break;
		
		default:
			printf("no reasult found\n");
			break;
	}
	
	return 0;
}
