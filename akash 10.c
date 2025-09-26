#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("enter 0 to stop");
	scanf("%d",&num);
	while(num != 0)
	{
		if(num>0)
		sum += num;
		scanf("%d",&num);
	}
	printf("sum is:%d",sum);
	return 0;
}
