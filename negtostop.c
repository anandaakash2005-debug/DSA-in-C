#include<stdio.h>
int main()
{
	do
	{
		int num,sum = 0;
	    printf("enter number(negative num to stop)");
	    scanf("%d",&num);
	    if(num >= 0)
	    
	    	sum += num;
	}
	while(num >= 0);
	printf("sum is:%d\n",sum);
	return 0;
}
