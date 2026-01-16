#include <stdio.h>

int main() {
    int math, phy, chem, total;

    printf("Enter marks in Math: ");
    scanf("%d", &math);

    printf("Enter marks in Phy: ");
    scanf("%d", &phy);

    printf("Enter marks in Chem: ");
    scanf("%d", &chem);

    total = math + phy + chem;

    if (math >= 65 && phy >= 55 && chem >= 50 && total >= 180) {
        printf("Eligible for admission.\n");
    } else if (total < 180) {
        printf("Not eligible: Insufficient total marks.\n");
    } else {
        printf("Not eligible: Minimum subject marks not met.\n");
    }

    return 0;
}
