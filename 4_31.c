#include <stdio.h>

int main(void) {
    int i, j, space, stars;
    int n = 5;  // 控制鑽石大小（中間最寬的那行有 9 個 *）

    // 上半部（包含中間行）
    for (i = 1; i <= n; i++) {
        // 印空白
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // 印星號
        for (stars = 1; stars <= 2 * i - 1; stars++) {
            printf("*");
        }
        printf("\n");
    }

    // 下半部
    for (i = n - 1; i >= 1; i--) {
        // 印空白
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // 印星號
        for (stars = 1; stars <= 2 * i - 1; stars++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}