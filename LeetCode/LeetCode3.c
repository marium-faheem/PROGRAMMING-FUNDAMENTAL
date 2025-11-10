#include<stdio.h>
bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    int main(){
    int reversed = 0;
    int original = x;

    // Reverse half of the number
    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;

        // Stop when reversed >= remaining part of x
        if (reversed >= x) {
            break;
        }
    }

    // Check if palindrome (handles odd and even digits)
    return (reversed == x || reversed / 10 == x);
}
    
