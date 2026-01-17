#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float radius, length, width, base, height, area;

   
    printf("   GEOMETRIC AREA CALCULATOR\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("\nEnter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("The area of the circle is: %.2f\n", area);
            break;
        case 2:
            printf("\nEnter the length: ");
            scanf("%f", &length);
            printf("Enter the width: ");
            scanf("%f", &width);
            area = length * width;
            printf("The area of the rectangle is: %.2f\n", area);
            break;
        case 3:
            printf("\nEnter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is: %.2f\n", area);
            break;
        default:
            printf("\nInvalid choice! Please restart and choose 1, 2, or 3.\n");
    }

    return 0;
}
