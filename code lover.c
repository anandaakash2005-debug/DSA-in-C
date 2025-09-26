#include<stdio.h>
#include<math.h>
int squarearea(int a);
float circlearea(float r);
int rectanglearea(int l,int w);
int main()
{
	int a,l,w;
	squarearea(a);
	float r;
	circlearea(r);
	rectanglearea(l,w);
}
int squarearea(int a)
{
	printf("enter side");
	scanf("%d",&a);
	int squarearea;
	squarearea=pow(a,2);
	printf("square area is:%d\n",squarearea);
}
float circlearea(float r)
{
	float pi=3.14;
	printf("enter radious");
	scanf("%f",&r);
	float circlearea;
	circlearea=pi*pow(r,2);
	printf("area of circle is:%f\n",circlearea);
}
int rectanglearea(int l,int w)
{
	printf("enter length and width:");
	scanf("%d%d",&l,&w);
	int rectanglearea;
	rectanglearea=l*w;
	printf("area of rectangle is:%d",rectanglearea);
}
