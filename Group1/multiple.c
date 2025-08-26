#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient;


    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

 
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;


    if (num2 != 0) {
        quotient = num1 / num2;
        printf("\nResults:\n");
        printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, sum);
        printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, difference);
        printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, product);
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, quotient);
    } else {
        printf("\nResults:\n");
        printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, sum);
        printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, difference);
        printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, product);
        printf("Division: Not possible (division by zero)\n");
    }

    return 0;
}
