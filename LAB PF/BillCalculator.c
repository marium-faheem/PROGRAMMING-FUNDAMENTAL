#include<stdio.h>
int main() {
    double gbUsed, bill = 0, tax, totalBill;
    printf("Enter total GB used: ");
    scanf("%lf", &gbUsed);
    if (gbUsed <= 100) {
        bill = gbUsed * 2.0;
    }
    else if (gbUsed <= 200) {
        bill = (100 * 2.0) + ((gbUsed - 100) * 1.5);
    }
    else if (gbUsed <= 400) {
        bill = (100 * 2.0) + (100 * 1.5) + ((gbUsed - 200) * 1.0);
    }
    else {
        bill = (100 * 2.0) + (100 * 1.5) + (200 * 1.0) + ((gbUsed - 400) * 0.5);
    }
    tax = bill * 0.10;
    totalBill = bill + tax;
    printf("\nInternet Bill Breakdown:\n");
    printf("Base Bill: Rs %.2f\n", bill);
    printf("Service Tax (10%%): Rs %.2f\n", tax);
    printf("Total Bill: Rs %.2f\n", totalBill);
}