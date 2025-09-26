#include<stdio.h>
int main()
{
	int i=0,num,sum=0;
	printf("enter number");
	scanf("%d",&num);
	do
	{
		
		printf("%d\n",i);
		i++;
		sum+=num;
		scanf("sum is:%d",sum);
		if(num<=0)
		{
			break;
		}
	}
	while(i<=num);
	
	return 0;
}
