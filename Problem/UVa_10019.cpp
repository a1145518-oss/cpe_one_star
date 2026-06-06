#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
    int T, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        /* 計算 N 的二進位中 1 的個數 */
        int X1 = N;
        int b1 = 0;
        while (X1) {
            b1 += X1 & 1;
            X1 >>= 1;
        }

        /* 將 N 視為十六進位表示（由十進位數字組成） */
        int X2 = 0;
        int mul = 1;
        X1 = N;
        while (X1) {
            X2 += (X1 % 10) * mul;
            X1 /= 10;
            mul *= 16;
        }

        /* 計算 X2 的二進位中 1 的個數 */
        int b2 = 0;
        while (X2) {
            b2 += X2 & 1;
            X2 >>= 1;
        }

        printf("%d %d\n", b1, b2);
    }

    return 0;
}