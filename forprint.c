#include<stdio.h>
int main()
{
	char gand[]={'a','b','c','d'};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",gand[j]);
		}
		printf("\n");
	}
	for(i=2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",gand[j]);
		}
		printf("\n");
	}
	return 0;
}
