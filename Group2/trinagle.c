#include <stdio.h>
#define PI 3.14159265

int main() {
    int choice;
    float base, height, radius, length, width, side, area;

    printf("Choose the shape to find area:\n");
    printf("1. Triangle\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("4. Square\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
            printf("Enter base of the triangle: ");
            scanf("%f", &base);
            printf("Enter height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("Area of the Triangle = %.2f\n", area);
            break;

        case 2: 
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of the Circle = %.2f\n", area);
            break;

        case 3: 
            printf("Enter length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("Area of the Rectangle = %.2f\n", area);
            break;

        case 4: 
            printf("Enter side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of the Square = %.2f\n", area);
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}
