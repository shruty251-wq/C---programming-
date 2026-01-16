
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;


    printf("Enter Cost Price (CP): ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingPrice);


    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("You made a Profit of %.2f\n", amount);
    }
    else if (sellingPrice < costPrice) {
        amount = costPrice - sellingPrice;
        printf("You incurred a Loss of %.2f\n", amount);
    }
    else {
        printf("There is No Profit, No Loss.\n");
    }

    return 0;
}
