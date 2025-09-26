#include<stdio.h>
int main()
{
	int i=0,x,n,sum=0,avg;
	printf("enter no. of number to be avg n:");
	scanf("%d",&n);
	while(i<n)
	{
		i++;
		printf("enter number to get average:x= ");
		scanf("%d",&x);
		sum+=n;
	}
	printf("sum is:%d",sum);
	avg=sum/n;
	printf("average is:%d",avg);
	return 0;
}
