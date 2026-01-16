#include <stdio.h>

int main() {
    int num = 20;
    int *ptr = &num;
    printf("Before increment %d",num);
    (*ptr)++;
    printf("After increment %d",num);
    return 0;
}
