#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    int T, N, P, h;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &N, &P);

        int a[10000 + 5];   // 固定大小，避免某些編譯器不支援 VLA
        memset(a, 0, sizeof(a));

        /* 記錄因罷工影響的天數 */
        for (int i = 0; i < P; i++) {
            scanf("%d", &h);
            for (int j = h; j <= N; j += h) {
                a[j] = 1;
            }
        }

        /* 排除星期五(6)與星期六(7) */
        for (int i = 6; i <= N; i += 7) {
            a[i] = 0;
        }
        for (int i = 7; i <= N; i += 7) {
            a[i] = 0;
        }

        /* 計算總罷工天數 */
        int sum = 0;
        for (int i = 1; i <= N; i++) {
            sum += a[i];
        }

        printf("%d\n", sum);
    }

    return 0;
}
