#include<stdio.h>
int main()
{
	int matrix[10][10],transpose[10][10];
	int i,j,rows,columns;
	printf("enter rows and columns of a matrix:");
	scanf("%d %d",&rows,&columns);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("elements:%d,%d",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("the given matrix is:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			transpose[j][i]=matrix[i][j];
		}
	}
	printf("\nthe transpose of matrix:\n");
	for(i=0;i<columns;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
