#include <stdio.h>
int main() {
    int arr[4] = {1, 2, 3, 4};
    int max1 = arr[0];
    int max2 = arr[1];
    if (max2 > max1) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }
    for (int i = 2; i < 4; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    printf("Two largest numbers are: %d and %d", max2, max1);
    return 0;
}
