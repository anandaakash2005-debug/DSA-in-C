#include<stdio.h>
int main()
{
	char input;
	float kmstomiles = 0.621371 ;
	float inchestofoot =0.083;
	float cmstoinches=0.393;
	float poundtokgs=0.453;
	float first,second;
	while(1)
	{
		printf("enter character\n 1.enter q to stop\n 2.enter a to transfer kms to miles\n 3.enter b to transfer inches to foot\n 4.enter c to transfer cms to inches\n 5.enter d to transfer pound to kgs\n ");
		scanf("%c",&input);
		switch(input)
		{
			case 'q': printf("queeting program....");
			goto end;
			break;
			case 'a':printf("enter the value in terms of kgs\n");
			scanf("%f",&first);
			second=first*kmstomiles;
			printf("%f kms is equal to %f miles\n",first,second);
			break;
			case 'b':printf("enter the value in terms of inch\n");
			scanf("%f",&first);
			second=first*inchestofoot;
			printf("%f inches is equal to %f foots\n",first,second);
			break;
			case 'c':printf("enter the value in terms of cms\n");
			scanf("%f",&first);
			second=first*cmstoinches;
			printf("%f cms is equal to %f inches\n",first,second);
			break;
			case 'd':printf("enter the value in terms of pound\n");
			scanf("%f",&first);
			second=first*poundtokgs;
			printf("%f pound is equal to %f kgs\n",first,second);
			break;
			default:("wrong character\n");
			break;
		}
	}
	end:
	return 0;	
}
