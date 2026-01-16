#include <stdio.h>
 PI 3.14159


int main() {
    double radius;
    double volume;

    printf("Sphere Volume Calculator \n");
    printf("This program calculates the volume of a sphere.\n");

    printf("Enter the radius of the sphere (in units): ");

   
    if (scanf("%lf", &radius) != 1) {
        printf("Error: Invalid input. Please enter a number.\n");
        
    }

    if (radius < 0) {
        printf("Error: Radius cannot be negative. Please enter a positive value.\n");
        
    } 
    volume = (4.0 * PI * radius * radius * radius) / 3.0;

    
    printf("Radius entered: %.2f units\n", radius);
    printf("The volume of the sphere is: %.4f cubic units\n", volume);

    return 0; 
}
