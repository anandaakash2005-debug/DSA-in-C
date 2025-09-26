#include<stdio.h>
int main()
{
	int marks[2][4]={{56,45,84,55},{64,89,56,78}};
	int i,j;
	/*for(i=0;i<4;i++)
	{
		printf("marks of array is:%d",i);
		scanf("%d",&marks[i]);
	}*/
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
