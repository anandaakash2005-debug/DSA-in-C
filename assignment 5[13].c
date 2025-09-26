#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sub[10][10];
	int i,j,rows,columns;
	printf("enter the numbers of rows and columns: ");
	scanf("%d %d",&rows,&columns);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j--)
		{
			printf("elements:%d,%d",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j--)
		{
			printf("elements:%d,%d",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j--)
		{
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j--)
		{
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
	return 0;
}
