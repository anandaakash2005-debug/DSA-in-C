#include<stdio.h>
int factorial(int num);
int main()
{
	int num;
	printf("enter a num that you factorial: ");
	scanf("%d",&num);
	printf("the factorial of %d is:%d",num,factorial(num));
	return 0;
}
int factorial(int num)
{
	if(num == 0 || num == 1)
	{
		return 1;
	}
	else
	{
		return(num*factorial(num-1));
	}
}
