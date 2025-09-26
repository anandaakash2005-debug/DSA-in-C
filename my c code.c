#include<stdio.h>
#include<math.h>
int square(int a);
int main()
{
	int a;
	printf("enter a number that you want to square: ");
	scanf("%d",&a);
	square(a);
	return 0;
}
int square(int a)
{
	int result=pow(a,2);
	printf("the square of %d is: %d\n",a,result);
	return result;
}
