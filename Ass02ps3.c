
#include <stdio.h>

int main() {
    int hours, minutes, totalMinutes;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    totalMinutes = (hours * 60) + minutes;

    printf("Total: %d minutes\n", totalMinutes);

    return 0;
}
