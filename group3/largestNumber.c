#include <stdio.h>

int main() {
    int num1, num2, num3, largest;


    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        largest = num1;
    else
        largest = num2;

    printf("Largest of %d and %d is: %d\n", num1, num2, largest);

  
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = num1;

    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;

    printf("Largest of %d, %d, and %d is: %d\n", num1, num2, num3, largest);

    return 0;
}
