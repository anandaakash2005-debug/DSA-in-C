#include<stdio.h>
int factorial(int num);
int main()
{
	int num;
	printf("enter the number to be factorial:  \n");
	scanf("%d",&num);
	printf("the factorial of %d is:%d\n",num,factorial(num));
	return 0;
}
int factorial(int num)
{
	if(num == 1 || num == 0)
	{
		return 1;
	}
	else
	{
		return(num*factorial(num-1));
	}
}

