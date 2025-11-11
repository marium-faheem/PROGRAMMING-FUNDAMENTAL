//palindrome
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;              // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                    // remove last digit
    }

    if (original == reversed)
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}
