#include<stdio.h>
int main()
{
	int array[]={23,56,84,45,27,90};
	printf("value at position 3 is:%d\n",array[3]);
	printf("the address of first element of array is %d\n",&array[0]);
	printf("the address of first element of array is %d\n",array);
	printf("the address of second element of array is %d\n",&array[1]);
	printf("the address of second element of array is %d\n",array+1);
	printf("the address of third element of array is %d\n",&array[2]);
	printf("the address of third element of array is %d\n",array+2);
	
	printf("value at position 3 is:%d\n",array[3]);
	printf("the value at address of first element of array is %d\n",*(&array[0]));
	printf("the value at address of first element of array is %d\n",array[0]);
	printf("the value at address of second element of array is %d\n",*(&array[1]));
	printf("the value at address of second element of array is %d\n",*(array+1));
	return 0;
}
