#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],result[10][10];
	int i,j,k,n;
	printf("enter the size of square matrix(nxn): ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("elements:%d,%d",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("elements:%d,%d",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			result[i][j]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				result[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("result of matrix after multiplication\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
