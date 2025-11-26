#include <stdio.h>

// Function declarations
void inputMatrix(int *a, int r, int c, char name);
void addMatrix(int *a, int *b, int *sum, int r, int c);
void transposeMatrix(int *a, int *t, int r, int c);
void printMatrix(int *a, int r, int c);

int main() {
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[10][10], b[10][10], sum[10][10], t[10][10];

    inputMatrix(&a[0][0], r, c, 'A');
    inputMatrix(&b[0][0], r, c, 'B');

    addMatrix(&a[0][0], &b[0][0], &sum[0][0], r, c);
    transposeMatrix(&sum[0][0], &t[0][0], r, c);

    printf("\nMatrix A:\n");
    printMatrix(&a[0][0], r, c);

    printf("\nMatrix B:\n");
    printMatrix(&b[0][0], r, c);

    printf("\nSum (A + B):\n");
    printMatrix(&sum[0][0], r, c);

    printf("\nTranspose of Sum Matrix:\n");
    printMatrix(&t[0][0], c, r);

    return 0;
}

void inputMatrix(int *a, int r, int c, char name) {
    printf("\nEnter elements of Matrix %c:\n", name);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%c[%d][%d] = ", name, i+1, j+1);
            scanf("%d", (a + i*c + j));
        }
    }
}

void addMatrix(int *a, int *b, int *sum, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            *(sum + i*c + j) = *(a + i*c + j) + *(b + i*c + j);
        }
    }
}

void transposeMatrix(int *a, int *t, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            *(t + j*r + i) = *(a + i*c + j);
        }
    }
}

void printMatrix(int *a, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%4d ", *(a + i*c + j));
        }
        printf("\n");
    }
}
