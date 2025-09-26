#include<stdio.h>
int sum(int a,int b);
int main()
{
	sum(3,2);
	return 0;
}
int sum(int a,int b)
{
	printf("the sum is:%d",a+b);
	return a+b;
}
