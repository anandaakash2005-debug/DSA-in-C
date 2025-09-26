#include<stdio.h>
void printeven(int start,int end);
void printodd(int start,int end);
int main()
{
    int start,end,choice;
	printf("enter start");
	scanf("%d",&start);	
	printf("enter end");
	scanf("%d",&end);
	printf("enter choice: 1.print even\n 2.print odd\n");
	scanf("%d",&choice);
	if(choice == 1)
	{
		printf("even numbers from %d to %d\n",start,end);
		printeven(start,end);
    }	
    else if(choice == 2)
    {
    	printf("odd numbers from %d to %d\n",start,end);
    	printodd(start,end);
	}
	else
	{
		printf("invalid choice");
	}
	return 0;
}
void printeven(int start,int end)
{
	if(start > end)
	
		return ;
	
	if(start%2 == 0)
	
		printf("%d",start);
		printeven(start+1,end);
	
}
void printodd(int start,int end)
{
	if(start > end)
	
	return ;	
	
	if(start%2 != 0)
	
		printf("%d",start);
		printodd(start+1,end);
	
}
