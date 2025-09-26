#include<stdio.h>
int main()
{
	int num=212,i;
	for(i=0;i<=2;++i)
	printf("right shift of number by%d:%d\n",i,num>>i);
	printf("\n");
	for(i=0;i<=2;++i)
	printf("right shift of number by%d:%d\n",i,num<<i);
	return 0;
}
