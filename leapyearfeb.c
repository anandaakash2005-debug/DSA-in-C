#include<stdio.h>
int main()
{
	char feb;
	int days;
	printf("enter 1 for leap year if not enter any intiger");
	scanf("%c",&feb);
	days=(feb=='1')?29:28;
	printf("number of days in february is:%d\n",days);
	return 0;
}
