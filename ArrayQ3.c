
#include <stdio.h>

int main() {
    int n, i;


    printf("Enter the number of elements: ");
    scanf("%d", &n);


    int arr[n];


    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nThe even numbers are: ");


    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
