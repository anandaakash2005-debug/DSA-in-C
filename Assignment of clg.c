#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,sum=0;
	printf("enter number(except-0)");
	scanf("%d",&num);
	do
	{
		printf("%d\n",sum);
		sum+=num;
		
	}
	while(num!=0 && sum<=120);
	return 0;
}
