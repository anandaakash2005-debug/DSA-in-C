#include<stdio.h>
int main()
{
	int a=56;
	int* ptr=&a;
	printf("the number is:%x\n",ptr);
	printf("the address of a is:%p\n",&ptr);
	printf("the address of a is:%p\n",&a);
	printf("the address of a is:%p\n",ptr);
	printf("the value of a is:%d\n",a);
	printf("the value of a is:%d\n",*ptr);
	return 0;
}
