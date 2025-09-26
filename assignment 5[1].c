#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d of array: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the reverse order of number:");
	for(i=n-1;i>-1;i--)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
