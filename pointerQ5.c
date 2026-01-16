#include <stdio.h>

int main() {
    char ch = 'A';
    char *ptr = &ch;

    printf("Address before increment: %p\n", ptr);

    ptr++;

    printf("Address after increment : %p\n", ptr);

    return 0;
}
