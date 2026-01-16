#include <stdio.h>

int main() {
    float f;
    f = 5.5;

    float *ptr = &f;

    printf("Size of float variable: %zu bytes\n", sizeof(f));
    printf("Size of float pointer : %zu bytes\n", sizeof(ptr));

    return 0;
}
