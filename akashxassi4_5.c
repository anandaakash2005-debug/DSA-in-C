#include<stdio.h>
 int sum(int num);
int main()
{
	int num;
    printf("enter no you want to sum from 1:");
	scanf("%d",&num);
	printf("the sum of n natural number is:%d\n",sum(num));
	return 0;
}

int sum(int num)
{
	if(num==0)
	{
	   return 0;	
	}
	else
	{
		return(num+sum(num-1));
	}
}
