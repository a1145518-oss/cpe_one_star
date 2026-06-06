#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int a[55][55];
int dx[] = {0, 1, 0, -1}; // N, E, S, W
int dy[] = {1, 0, -1, 0};

int main() {
    int row, col;
    int R, C, D, nR, nC;
    int lost;
    char d;
    char s[200];  // 指令字串

    // 方向字母與方向數字的對應 (map<char,int> + map<int,char>)
    char mp2[4] = {'N', 'E', 'S', 'W'};

    scanf("%d %d", &row, &col);

    while (scanf("%d %d %c %s", &R, &C, &d, s) == 4) {

        // 將字母方向轉為 0~3
        if (d == 'N') D = 0;
        else if (d == 'E') D = 1;
        else if (d == 'S') D = 2;
        else D = 3; // W

        lost = 0;

        int len = strlen(s);
        for (int i = 0; i < len; i++) {

            if (s[i] == 'F') {

                nR = R + dx[D];
                nC = C + dy[D];

                if (nR >= 0 && nR <= row && nC >= 0 && nC <= col) {
                    R = nR;
                    C = nC;
                } else {
                    if (a[R][C] == 1) {
                        // 這個位置被標記過：忽略該掉落的指令
                        continue;
                    } else {
                        printf("%d %d %c LOST\n", R, C, mp2[D]);
                        lost = 1;
                        a[R][C] = 1; // 標記此處
                        break;
                    }
                }

            } else if (s[i] == 'R') {
                D = (D + 1) % 4;
            } else { // L
                D = (D - 1 + 4) % 4;
            }
        }

        if (!lost) {
            printf("%d %d %c\n", R, C, mp2[D]);
        }
    }

    return 0;
}
