
#include<stdio.h>

int main(){
    int a[100];
    int i, n;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i = i + 1){
        scanf("%d", &a[i]);
    }
    printf("Reverse order: ");
    for(i = n - 1; i >= 0; i = i - 1){
        printf("%d ", a[i]);
    }

    return 0;
}
