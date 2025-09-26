#include<stdio.h>
void swap(int x,int y);
int main()
{
	int a=3,b=2;
	printf("before swap:a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("after swap:a=%d,b=%d\n",a,b);
	return 0;
}
void swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
	printf("inside swap function:x=%d,y=%d\n",x,y);
	return ;
}

