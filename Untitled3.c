#include<stdio.h>
struct book
{
	char title[30];
	char author[30];
	float price;
};

int main()
{
	struct book s[50];
	int i,n,max,min;
	int maxpointer=0,minpointer=0;
	printf("enter number of books: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter details of %d no book",i+1);
		printf("enter title: ");
		scanf("%s",s[i].title);
		printf("enter author name: ");
		scanf("%s",s[i].author);
		printf("enter price: ");
		scanf("%f",&s[i].price);
	}
	for(i=0;i<n;i++)
	{
		printf("the details of %d no book",i+1);
		printf("title is:%s",s[i].title);
		printf("author name:%s",s[i].author);
		printf("price:%.2f",s[i].price);
	}
	
	max=s[0].price;
	min=s[0].price;
	
	for(i=1;i<n;i++)
	{
		if(s[i].price>max)
		{
			maxpointer=i;
		}
		else if(s[i].price<min)
		{
			minpointer=i;
		}
	}
	
	printf("the book with maxprice is:\n");
	printf("title is:%s\n",s[maxpointer].title);
	printf("author name:%s\n",s[maxpointer].author);
	printf("price:%.2f\n",s[maxpointer].price);
	
	printf("the book with minprice is:\n");
	printf("title is:%s\n",s[minpointer].title);
	printf("author name:%s\n",s[minpointer].author);
	printf("price:%.2f\n",s[minpointer].price);
	
	return 0;
	
}
