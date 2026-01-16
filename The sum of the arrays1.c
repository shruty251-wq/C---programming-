#include <stdio.h>

int main() {
    int a[5];
    int b[5];
    int c[5];
    int i;


    printf("Enter 5 values for the first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }


    printf("Enter 5 values for the second array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }


    for (i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
    }


    printf("The sum of the arrays is:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");
    return 0;
}
