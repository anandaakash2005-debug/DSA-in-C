#include<stdio.h>
#include<string.h>

struct student
{
	int roll;
	float marks;
	char name[50]; 
};
int main()
{
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter details of %d no of student\n",i+1);
		
		printf("ROLL: ");
		scanf("%d",&s[i].roll);
		
		printf("MARKS: ");
		scanf("%f",&s[i].marks);
		
		printf("NAME: ");
		scanf("%s",s[i].name);
		
	}
	
	for(i=0;i<3;i++)
	{
		printf("ROLL:%d\n.MARKS:%.2f\n.NAME:%s\n",s[i].roll,s[i].marks,s[i].name);
	}
	
	return 0;
}
