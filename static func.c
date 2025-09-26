#include<stdio.h>
int b=34;
int func1(int b1)
{
	printf("the value of b inside func1 is:%d\n",b);
	printf("theaddress of b inside func1 is:%d\n",&b);
	return b1*10;
}
int main()
{
	int b=344;
	printf("the address of b inside the main is:%d\n",&b);
	int val=func1(b);
	int*ptr=&val;
	printf("the value of func1 is:%d",val);
	return 0;
}
