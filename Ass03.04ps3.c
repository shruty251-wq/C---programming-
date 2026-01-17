#include <stdio.h>

int main() {
    int digit;
    char *words[] = {"Zero", "One", "Two", "Three", "Four", 
                     "Five", "Six", "Seven", "Eight", "Nine"};

    printf("Enter a digit (0-9): ");
    scanf("%d", &digit);

    if (digit >= 0 && digit <= 9) {
        // Print the string at the index matching the digit
        printf("%s\n", words[digit]);
    } else {
        printf("Invalid input! Please enter a digit between 0 and 9.\n");
    }

    return 0;
}
