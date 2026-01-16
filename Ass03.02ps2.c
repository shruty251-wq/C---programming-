#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float marks1, marks2, marks3, total, percentage;


    printf("Enter student's roll number: ");
    scanf("%d", &rollNo);

    printf("Enter student's name: ");
    scanf("%s", name);

    printf("Enter marks in three subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &marks1);
    printf("Subject 2: ");
    scanf("%f", &marks2);
    printf("Subject 3: ");
    scanf("%f", &marks3);


    total = marks1 + marks2 + marks3;
    percentage = (total / 300) * 100;

    printf("\n----- Student Result -----\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Name        : %s\n", name);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (percentage >= 60) {
        printf("Division    : First Division\n");
    } else if (percentage >= 50) {
        printf("Division    : Second Division\n");
    } else if (percentage >= 40) {
        printf("Division    : Third Division\n");
    } else {
        printf("Division    : Fail\n");
    }

    return 0;
}
