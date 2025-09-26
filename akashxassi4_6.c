#include<stdio.h>
int countdigit(int num);
int main()
{
	int num;
	printf("enter number to count digit: ");
	scanf("%d",&num);
	if(num<0)
	{
		num =-num;
	}
	int result=countdigit(num);
	printf("the no of digit is:%d",result);
	return 0;
}
int countdigit(int num)
{
	if(num == 0)
	{
		return 0;
	}
	else
	{
		return 1+countdigit(num/10);
	}
	
}
