#include <stdio.h>

int main() {
    int totalMinutes, hours, minutes;

    printf("Enter total minutes: ");
    scanf("%d", &totalMinutes);

    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;

    printf("%d Hours, %d Minutes\n", hours, minutes);

    return 0;
}
