#include <stdio.h>

int main() {
    int i, sum = 0;


    for (i = 2; i <= 50; i += 2) {
        sum += i;
    }

    printf("The sum of the series 2 + 4 + ... + 50 is: %d\n", sum);

    return 0;
}
