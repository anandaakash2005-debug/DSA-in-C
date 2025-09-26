#include<stdio.h>

void printarray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int partition(int A[],int low,int high)
{
    int pivot=A[low];
    int i=low+1;
    int j=high;
    do
    {
        while(i <= high &&A[i] <= pivot)
        {
            i++;
        }
        while(j >= low && A[j] > pivot)
        {
            j--;
        }
        if(i < j)
        {
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    } while (i<j);
    int temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}

void quicksort(int A[],int low,int high)
{
    int partitionindex;
    if(low < high)
    {
        partitionindex=partition(A,low,high);
        quicksort(A,low,partitionindex-1);
        quicksort(A,partitionindex+1,high);
    }
}

int main()
{
    int arr1[]={12, 54, 65, 7, 23, 9};
    int n=sizeof(arr1)/sizeof(int);
    printf("Before Sorting\n");
    printarray(arr1,n);
    quicksort(arr1,0,n-1);
    printf("After sorting\n");
    printarray(arr1,n);
    return 0;
}