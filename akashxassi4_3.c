#include<stdio.h>
void evodd(int num);
int main()
{
	int num;
	printf("enter number to check even or odd: ");
	scanf("%d",&num);
	evodd(num);
	return 0;
}

void evodd(int num)
{
	if(num%2 == 0)
	{
		printf("even\n");
	}
	else
	{
		printf(" odd\n");
	}
	
}
