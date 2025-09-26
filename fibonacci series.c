#include<stdio.h>

int fibonacci(int num)
{
    if(num == 0)
        return 0;
    if(num == 1)
        return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
    int i, n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("%d\n", fibonacci(i));  // Fixed typo and logic
    }

    return 0;
}

