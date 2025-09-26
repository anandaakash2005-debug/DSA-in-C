#include<stdio.h>
int main()
{
	int *ptr=NULL;
	ptr=fopen("myfile.txt","w");
	/*char c=fgetc(ptr);
	printf("the character i read was %c\n",c);
	c=fgetc(ptr);
	printf("the character i read was %c\n",c);
	char str[4];
	fgets(str,5,ptr);
	printf("the string is %s\n",str);*/
	
	
	
	fputc('o',ptr);
	fputs("this is harry",ptr);
	
	fclose(ptr);
	return 0;
}
