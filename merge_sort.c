#include <stdio.h>

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int arr1[high + 1];
    int k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            arr1[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            arr1[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        arr1[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        arr1[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = arr1[i];
    }
}

void mergesort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {9, 1, 4, 14, 4, 15, 6};
    int n = sizeof(arr) / sizeof(int);
    printf("Before shorting\n");
    printarray(arr, n);
    printf("After shorting\n");
    mergesort(arr, 0, n - 1);
    printarray(arr, n);
    return 0;
}