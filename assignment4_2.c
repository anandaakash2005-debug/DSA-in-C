#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int a=2,b=3;
	printf("before swap a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("after swap a=%d,b=%d\n",a,b);
	return 0;
}

 void swap(int *x,int *y)
{
    int temp=*x;
	*x=*y;
	*y=temp;
		
}
