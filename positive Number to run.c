#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("enter number");
	scanf("%d",&num);
	do
	{
		if(num>=0)
		{
		    sum+=num;	
		}
		printf("enter number");
		scanf("%d",&num);
	}
	while(num>=0);
	printf("sum is:%d\n",sum);
	return 0;
}
