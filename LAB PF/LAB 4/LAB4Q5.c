#include<stdio.h>

int main() {
    int number, last_digit, rest, result;

    printf("Enter number:\n");
    scanf("%d", &number);

    last_digit = number % 10;
    rest = number / 10;

    result = rest - (2 * last_digit);

    if (result == 0 || result == 7 || result == -7) {
        printf("The number is divisible by 7.\n");
    } else {
        printf("The number is not divisible by 7.\n");
    }

    return 0;
}
