#include<stdio.h>

void printarray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertionsrt(int *arr,int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int arr1[]={12, 54, 65, 7, 23, 9};
    int n=sizeof(arr1)/sizeof(int);
    //int n=6;
    printf("Before Sorting\n");
    printarray(arr1,n);
    insertionsrt(arr1,n);
    printf("After sorting\n");
    printarray(arr1,n);
    return 0;
}