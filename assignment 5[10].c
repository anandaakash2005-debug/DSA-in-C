#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number of element: ");
	scanf("%d",&n);
	if(n<2)
	{
		printf("enter at least 2 number\n");
		return 0;
	}
	int arr[n];
	printf("enter %d of element",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int minimum,second;
	if(arr[0]<arr[1])
	{
		minimum=arr[0];
		second=arr[1];
	}
	else 
	{
		minimum=arr[1];
		second=arr[0];
	}
	for(i=2;i<n;i++)
	{
		if(arr[i]<minimum)
		{
			second=minimum;
			minimum=arr[i];
		}
		else if(arr[i]<second && minimum != arr[i])
		{
			second=arr[i];
		}
	}
	if(minimum == second)
	{
		printf("there is no second maximum\n");
	}
	else
	{
		printf("the second maximum is:%d\n",second);
	}
	return 0;
}
