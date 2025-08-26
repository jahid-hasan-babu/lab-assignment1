#include <stdio.h>

int main() {
    int number, choice;


    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Check divisibility by:\n");
    printf("1. 3\n");
    printf("2. 4\n");
    printf("3. 5\n");
    printf("4. 6\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            if (number % 3 == 0)
                printf("%d is divisible by 3\n", number);
            else
                printf("%d is not divisible by 3\n", number);
            break;

        case 2:
            if (number % 4 == 0)
                printf("%d is divisible by 4\n", number);
            else
                printf("%d is not divisible by 4\n", number);
            break;

        case 3:
            if (number % 5 == 0)
                printf("%d is divisible by 5\n", number);
            else
                printf("%d is not divisible by 5\n", number);
            break;

        case 4:
            if (number % 6 == 0)
                printf("%d is divisible by 6\n", number);
            else
                printf("%d is not divisible by 6\n", number);
            break;

        default:
            printf("Invalid choice! Please enter 1-4.\n");
    }

    return 0;
}
