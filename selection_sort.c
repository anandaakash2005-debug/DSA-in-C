#include<stdio.h>

void printarray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void selectionsort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int indexofmin=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[indexofmin])
            {
                indexofmin=j;
            }
        }
        int temp=arr[indexofmin];
        arr[indexofmin]=arr[i];
        arr[i]=temp;
    }
}

int main()
{
    int arr1[]={12, 54, 65, 7, 23, 9};
    int n=sizeof(arr1)/sizeof(int);
    printf("Before Sorting\n");
    printarray(arr1,n);
    selectionsort(arr1,n);
    printf("After sorting\n");
    printarray(arr1,n);
    return 0;
}