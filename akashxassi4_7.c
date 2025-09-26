#include<stdio.h>
int digitsum(int num);
int main()
{
	int num,digit;
	
	printf("enter number to sum of digit: ");
	scanf("%d",&num);
	printf("the sum of digit is:%d",digitsum(num));
	return 0;
}
int digitsum(int num)
{
	
	if(num==0)
	{
		return 0;
	}
	else
	{
		return (num%10+digitsum(num/10));
	}
}
