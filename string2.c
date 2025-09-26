#include<stdio.h>
void printstr(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
	printf("\n");
}
int main()
{
	char str[34];
	gets(str);
	
	printstr(str);
	printf("using printf:%s\n",str);
	
	puts(str);
	return 0;
}
