#include<stdio.h>
int main()
{
	int marks[4];
	marks[0]=123;
	printf("marks of one student is: %d",marks[0]);
	marks[0]=1;
	marks[1]=2;
	marks[2]=3;
	marks[3]=4;
	marks[4]=5;
	marks[56]=6;
	printf("marks of one student is: %d",marks[56]);
	return 0;
}
