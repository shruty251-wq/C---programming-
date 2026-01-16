
#include <stdio.h>

int main() {
    char grade;

    printf("Enter the grade (E, V, G, A, F): ");
    scanf("%c", &grade);

    if (grade >= 'a' && grade <= 'z') {
        grade = grade - 32;
    }
    switch (grade) {
        case 'E':
            printf("Excellent\n");
            break;
        case 'V':
            printf("Very Good\n");
            break;
        case 'G':
            printf("Good\n");
            break;
        case 'A':
            printf("Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid Grade Entered!\n");
            break;
    }

    return 0;
}
