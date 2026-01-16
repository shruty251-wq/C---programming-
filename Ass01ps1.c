
#include <stdio.h>

int main() {
    float radius, perimeter, area;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Perimeter (Circumference) = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);

    return 0;
}
