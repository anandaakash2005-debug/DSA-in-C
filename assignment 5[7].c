#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int i, j = 0, k = 0;

    
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even[j++] = arr[i]; 
        else
            odd[k++] = arr[i];  
    }

    
    printf("Even elements:\n");
    for(i = 0; i < j; i++)
        printf("%d ", even[i]);

    
    printf("\nOdd elements:\n");
    for(i = 0; i < k; i++)
        printf("%d ", odd[i]);

    return 0;
}

