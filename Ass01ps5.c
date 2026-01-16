
#include <stdio.h>

int main() {
    float totalSellingPrice, totalProfit, totalCostPrice, costPriceOneItem;

    printf("=== Cost Price Calculator ===\n");

    
    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &totalSellingPrice);

    printf("Enter the total profit earned on 15 items: ");
    scanf("%f", &totalProfit);
    totalCostPrice = totalSellingPrice - totalProfit;
    costPriceOneItem = totalCostPrice / 15;
    printf("\n--- Calculation Details ---\n");
    printf("Total Selling Price = %.2f\n", totalSellingPrice);
    printf("Total Profit Earned = %.2f\n", totalProfit);
    printf("Total Cost Price    = %.2f\n", totalCostPrice);
    printf("Cost Price of 1 item= %.2f\n", costPriceOneItem);

    printf("\nTherefore, the cost price of one item is: %.2f\n", costPriceOneItem);

    return 0;
}
