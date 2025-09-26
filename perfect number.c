#include<stdio.h>
int main()
{
	int start,end,pf,i,j;
	printf("enter starting number: ");
	scanf("%d",&start);
	printf("enter ending number: ");
	scanf("%d",&end);
	
	for(i=start;i<=end;i++)
	{
		pf=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				pf+=j;
			}
		}
		if(pf==i)
		printf("%d\n",i);
	}
	return 0;
}
