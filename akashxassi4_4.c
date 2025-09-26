#include<stdio.h>
int execute(int num);
int main()
{
	printf("first 50 natural number: \n");
	execute(50);
	return 0;
}
int execute(int num)
{
	if(num<0)
	{
		return 0;
	}
	printf("%d\n",num);
	execute(num-1);
}
