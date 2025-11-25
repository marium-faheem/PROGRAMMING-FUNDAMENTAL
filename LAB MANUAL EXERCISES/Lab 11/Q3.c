#include <stdio.h>

struct phone {
    int area;
    int exchange;
    int number;
};

int main() {
    struct phone myNumber = {212, 767, 8900};
    struct phone yourNumber;

    printf("Enter area code: ");
    scanf("%d", &yourNumber.area);

    printf("Enter exchange: ");
    scanf("%d", &yourNumber.exchange);

    printf("Enter number: ");
    scanf("%d", &yourNumber.number);

    printf("\nMy number is (%d) %d-%d\n", 
            myNumber.area, myNumber.exchange, myNumber.number);

    printf("Your number is (%d) %d-%d\n",
            yourNumber.area, yourNumber.exchange, yourNumber.number);

    return 0;
}
