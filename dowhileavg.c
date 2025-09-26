#include<stdio.h>
int main()
{
	int i,n,x,sum=0,avg;
	printf("enter no. of number to be average: ");
	scanf("%d",&n);
	do
	{
		printf("enter the number to be average x: ");
		scanf("%d",&x);
		sum+=x;
		i++;
	}
	while(i<n);
	avg=sum/n;
	printf("the sum is:%d",avg);
	return 0;
}
