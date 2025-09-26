#include<stdio.h>
int main()
{
	int option;
	printf("enter your option(1-4)\n");
	printf("opt.1-view train list\n");
	printf("opt.2-book ticket\n");
	printf("opt.3-cancel ticket\n");
	printf("opt.4-for exit\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
		    printf("rajdhani express\n,shatabdi express\n,duronto express\n");
		    break;
		case 2:
			printf("ticket booked successfully!\n");
			break;
		case 3:
			printf("ticket canceled successfully!\n");
			break;
		case 4:
		    printf("thank you for useing our survice\n");
			break;
		default :
		    printf("you are pressing wrong number\n");	
	}
	return 0;
}
