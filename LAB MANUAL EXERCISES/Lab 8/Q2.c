#include <stdio.h>
#include <string.h>

int main() {
    char name[50], course[100];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter your name: ");
    gets(name);

    printf("Enter your course name: ");
    gets(course);

    // Combine both strings
    strcat(name, course);

    // Count frequency
    for (i = 0; name[i] != '\0'; i++) {
        unsigned char ch = name[i];
        if (ch != ' ' && ch != '\n') {
            freq[ch]++;
            if (freq[ch] > max) {
                max = freq[ch];
                maxChar = ch;
            }
        }
    }

    printf("Character with maximum frequency: '%c' (%d times)\n", maxChar, max);

    return 0;
}
