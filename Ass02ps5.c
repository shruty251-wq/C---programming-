
#include <stdio.h>

int main() {
    int a, b, c, sum;

    printf("Enter three numbers separated by commas: ");
    scanf("%d,%d,%d", &a, &b, &c);

    sum = a + b + c;

    printf("The sum of three numbers: %d\n", sum);

    return 0;
}
