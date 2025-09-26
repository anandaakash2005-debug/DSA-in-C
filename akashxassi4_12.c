#include<stdio.h>
#include<math.h>
double calculatepower(double a,int b);
int main()
{
	double a;
	int b;
	printf("enter the value of a and b(a^b): ");
	scanf("%lf %d",&a,&b);
	printf("the power of %lf is:%lf\n",a,pow(a,b));
	return 0;
}
double calculatepower(double a,int b)
{
	if(b == 0)
	{
		return 1;
	}
	else 
	{
		return(a*pow(a,(b-1)));
	}
}
