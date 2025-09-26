#include <stdio.h>

int main() {
    int n,i,j, count = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements:\n");
    for( i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for( i = 0; i < n; i++) {
        for( j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    printf("Duplicate elements: %d\n", count);
    return 0;
}

