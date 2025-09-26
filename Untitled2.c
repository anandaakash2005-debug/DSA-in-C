#include<stdio.h>
int main()
{
	int i,j,n,isprime;
	printf("enter a range(1-range): ");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		isprime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime==1)
		printf("%d\n",i);
	}
	return 0;
}
