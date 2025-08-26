#include <stdio.h>

int main() {
    int i, sum = 0;

  
    for (i = 5; i <= 150; i += 5) {
        sum += i;
    }

    printf("The sum of the series 5 + 10 + ... + 150 is: %d\n", sum);

    return 0;
}
