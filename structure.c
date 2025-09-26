#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	int marks;
	char fav_char;
	char name[34];
};
struct student akash,arup,ravi_da;
int main()
{
	akash.id=1;
	arup.id=2;
	ravi_da.id=3;
	akash.marks=66;
	arup.marks=76;
	ravi_da.marks=96;
	akash.fav_char='x';
	arup.fav_char='a';
	ravi_da.fav_char='b';
	strcpy(akash.name,"akash don");
	strcpy(arup.name,"arup sexy");
	strcpy(ravi_da.name,"ravi_da");
	printf("arup's id is:%d\n",arup.id);
	printf("arup's marks is:%d\n",arup.marks);
	printf("arup's fav_char is:%c\n",arup.fav_char);
	printf("arup's name is :%s\n",arup.name);
	return 0;
}
