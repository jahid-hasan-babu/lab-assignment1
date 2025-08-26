#include <stdio.h>

int main() {
    int num, i, sum = 0;


    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

  
    if (sum == num)
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is Not a Perfect number.\n", num);

    return 0;
}
