#include <stdio.h>

int main() {
    int n,i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n], b[n];

    printf("Enter elements:\n");
    for( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    printf("Copied array:\n");
    for( i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}

