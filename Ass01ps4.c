#include <stdio.h>

int main() {
    int marks[5], i, total = 0;
    float percentage;

    printf("Enter marks in 5 subjects (out of 100):\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 500.0) * 100;

    printf("Aggregate Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
