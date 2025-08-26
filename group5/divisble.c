#include <stdio.h>

int main() {
    int i, count = 0;
    int divisor;

  
    printf("Enter a number to check divisibility (e.g., 3, 4, 5): ");
    scanf("%d", &divisor);

    printf("Numbers between 1 and 50 not divisible by %d:\n", divisor);

   
    for (i = 1; i <= 50; i++) {
        if (i % divisor != 0) {  
            printf("%d ", i);
            count++;
        }
    }

    
    printf("\nTotal numbers not divisible by %d: %d\n", divisor, count);

    return 0;
}
