#include <stdio.h>

int main(void) {
    int i, j, k;

    // (A)
    printf("(A)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // (B)
    printf("(B)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // (C)
    printf("(C)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (k = 10; k >= i; k--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // (D)
    printf("(D)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 10; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}