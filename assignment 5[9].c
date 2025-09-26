#include <stdio.h>

int main() {
    int n, i;

    // Step 1: Get the number of elements
    printf("Enter number of elements (minimum 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }

    int arr[n];

    // Step 2: Read elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest, second;

    // Step 3: Initialize largest and second based on the first two elements
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    // Step 4: Loop through the rest of the array
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    // Step 5: Handle the case when no second largest exists
    if (largest == second) {
        printf("There is no second largest element (all elements may be equal).\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}

