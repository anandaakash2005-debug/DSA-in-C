#include <stdio.h>

int main() {
    int i,n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    int max = arr[0];
    int min = arr[0];

    // Find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    // Output result
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

