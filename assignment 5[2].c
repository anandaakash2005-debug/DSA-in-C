#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number of element:");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d of element: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("the sum of all element of arrayis:%d",sum);
	return 0;
}
