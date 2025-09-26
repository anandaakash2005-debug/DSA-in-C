#include<stdio.h>
int main()
{
	int i,x,n,sum=0,avg;
	printf("enter no. to be avg n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("the numbers to sumed:x= ");
		scanf("%d",&x);
		sum+=x;
	}
	avg=sum/n;
	printf("the average is:%d\n",avg);
	return 0;
}
