#include<stdio.h>
int main()
{
	int i,j,n;
	int arr[50];
	
	printf("enter no of element: ");
	scanf("%d",&n);
	
	printf("enter elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("elements of array: \n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
	
	printf("reverse order of elements: \n");
	for(j=n-1;j>-1;j--)
	printf("%d\n",arr[j]);
	
	return 0;
}
