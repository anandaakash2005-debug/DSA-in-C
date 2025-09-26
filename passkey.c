#include<stdio.h>
int main()
{
	int passkey;
	printf("enter password");
	scanf("%d",&passkey);
	do
	{
		if(passkey != 76)
		{
			printf("incorrect password!\n");
		}
		printf("enter passward");
	    scanf("%d",&passkey);
	}
	while(passkey==76);
	printf("your password is correct!\n");
	return 0;
}
