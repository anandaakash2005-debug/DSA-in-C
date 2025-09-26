#include<stdio.h>

void printarray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubblesrt(int *arr,int n)
{
    int issorted=0;
    for(int i=0;i<n-1;i++)
    {
        issorted=1;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issorted=0;
            }
        }
        if(issorted)
        return ;
    }
}

int main()
{
    int arr1[]={12, 54, 65, 7, 23, 9};
    int n=sizeof(arr1)/sizeof(int);
    //int n=6;
    printf("Before Sorting\n");
    printarray(arr1,n);
    bubblesrt(arr1,n);
    printf("After sorting\n");
    printarray(arr1,n);
    return 0;
}