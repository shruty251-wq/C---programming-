
#include <stdio.h>

int main() {
    int customerID;
    char name[50];
    float units, chargePerUnit, totalBill, surcharge;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Units Consumed: ");
    scanf("%f", &units);

    if (units <= 199) {
        chargePerUnit = 1.20;
    }
    else if (units >= 200 && units < 400) {
        chargePerUnit = 1.50;
    }
    else if (units >= 400 && units < 600) {
        chargePerUnit = 1.80;
    }
    else {
        chargePerUnit = 2.00;
    }

    totalBill = units * chargePerUnit;


    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
        totalBill += surcharge;
    }

   
    if (totalBill < 100) {
        totalBill = 100;
    }


    printf("Electricity Bill\n");
    printf("Customer ID   : %d\n", customerID);
    printf("Customer Name : %s\n", name);
    printf("Units Consumed: %.2f\n", units);
    printf("Charge/Unit   : ₹%.2f\n", chargePerUnit);
    printf("Total Bill    : ₹%.2f\n", totalBill);

    return 0;
}
