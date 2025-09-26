#include <stdio.h>

// Function to display array elements
void displayArray(int arr[], int size) {
    int i;
    printf("Array elements are:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n, i;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Validate size
    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Function call
    displayArray(arr, n);

    return 0;
}

