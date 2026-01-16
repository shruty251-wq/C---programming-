#include <stdio.h>

int main() {
    float km, meters, feet, inches, cm;

    printf("Enter distance between two cities (in km): ");
    scanf("%f", &km);

    meters = km * 1000;
    feet = meters * 3.28084;
    inches = feet * 12;
    cm = km * 100000;

    printf("Distance in meters = %.2f\n", meters);
    printf("Distance in feet   = %.2f\n", feet);
    printf("Distance in inches = %.2f\n", inches);
    printf("Distance in cm     = %.2f\n", cm);

    return 0;
}
