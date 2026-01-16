#include <stdio.h>

int main() {
    float centigrade, fahrenheit;

    printf("Enter temperature in Centigrade: ");
    scanf("%f", &centigrade);

    fahrenheit = (9 * centigrade) / 5 + 32;

    printf("Temperature in Fahrenheit: %.6f\n", fahrenheit);

    return 0;
}
