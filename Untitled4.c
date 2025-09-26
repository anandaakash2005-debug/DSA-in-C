#include<stdio.h>
void printnum(int n)
{
	if(n>50)
	return ;
	printf("%d\n",n);
    printnum(n+1);
}
int main()
{
	
	printnum(1);
	return 0;
}

