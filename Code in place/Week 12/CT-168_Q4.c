#include <stdio.h>
void printChar(char *p) {
    if (p == NULL) {
        printf("Null pointer!\n");
        return;
    }
    printf("Character: %c\n", *p);   // Dereference and print
}
int main() {
    char ch = 'A';
    char *ptr = &ch;
    printChar(ptr);
    return 0;
}
