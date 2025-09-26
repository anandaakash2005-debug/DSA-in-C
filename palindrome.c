#include<stdio.h>
int main()
{
	int num,originalnum,reversednum=0,remainder;
	printf("enter the number");
	scanf("%d",&num);
	num = originalnum;
	while(num != 0)
	{
		remainder = num % 10;
		reversednum = reversednum*10+remainder;
		num/=10;
	}
	if(reversednum = originalnum)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("non palindrome");
	}
	return 0;
}
