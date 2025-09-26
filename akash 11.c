#include<stdio.h>
int main()
{
	int num,remainder,reversenum;
	printf("enter number that you want to reverse: ");
	scanf("%d",&num);
	do
	{
		remainder=num%10;
		reversenum=remainder;
		num/=10;
		reversenum+=reversenum;
	}
	while(num != 0);
	printf("the reversenum is:%d",reversenum);
	return 0;
}
