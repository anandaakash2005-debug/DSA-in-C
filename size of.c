#include<stdio.h>
int main()
{
	int a,e[10];
	float b;
	double c;
	char d;
	printf("the size of integer=%lu bytes\n",sizeof(a));
	printf("the size of float=%lu bytes\n",sizeof(b));
	printf("the size of double=%lu bytes\n",sizeof(c));
	printf("the size of char=%lu bytes\n",sizeof(d));
	printf("the size of integer type array having 10 element=%lu bytes\n",sizeof(e));
	return 0;
}
