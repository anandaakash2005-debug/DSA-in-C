#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10];
	int i,j,rows,columns;
	printf("enter the number of rows and columns: ");
	scanf("%d %d",&rows,&columns);
	printf("enter the number of first element:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("the sum of two matrices is:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
