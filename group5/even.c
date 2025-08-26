#include <stdio.h>

int main() {
    int i, count = 0;

    printf("Even numbers between 20 and 100:\n");


    for (i = 20; i <= 100; i++) {
        if (i % 2 == 0) {  
            printf("%d ", i);
            count++;
        }
    }

    
    printf("\nTotal even numbers between 20 and 100: %d\n", count);

    return 0;
}
