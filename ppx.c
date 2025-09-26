#include <stdio.h>

int main() {
    int password;
    const int correctPassword = 1234; 

    printf("Welcome! Please enter the correct password (integer).\n");

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != correctPassword) {
            printf("Incorrect password. Try again.\n");
        }
    } while (password != correctPassword);

    printf("Access granted!\n");

    return 0; 
}
