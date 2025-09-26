#include<stdio.h>

/*void printarray(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("the value of element %d is:%d\n",i+1,*(ptr+i));
    }
}*/

void printarray(int ptr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("the value of element %d is:%d\n",i+1,*(ptr+i));
    }
}

int main()
{
    int arr[]={1,22,333,4444,55555,666666,7777777};
    printarray(arr,7);
    return 0;
}
